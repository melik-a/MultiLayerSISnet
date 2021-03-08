#pragma once
#include <math.h>
#include "MyForm.h"
#include <vector>
using namespace System;

class Layer;

std::vector <Layer> Layers;


class Node
{
public:
	std::vector <Node*> Near;//вектор указателей на соседей
	int i, j;//i - индекс по строке, j - индекс по столбцу
	int X, Y;//координаты
	bool infection;//состояние узла ( true - заражён, false - не заражён )
	bool check_changed;//флажок измения состояния
	int time_to_recovery;//время восстановления
	int count_infection;//счётчик заражений узла
	bool active;//флажок активности узла 
	int num_lay;//номер слоя узла
	Node(int a, int b, int c, int d, int f)
	{
		i = a;
		j = b;
		X = c;
		Y = d;
		infection = false;
		time_to_recovery = 0;
		check_changed = false;
		count_infection = 0;
		active = true;
		num_lay = f;
	}

};



class Edge
{
public:
	Node* f_node;//указатель на узел
	Node* s_node;//указатель на узел
	bool active;//флажок активности ребра
	Edge(Node* a, Node* b)
	{
		f_node = a;
		s_node = b;
		active = true;
	}
};


class Layer
{
public:
	std::vector <Node>  LNodes;//вектор узлов слоя
	std::vector <Edge> LEdges;//вектор рёбер слоя
	int num;//номер слоя
	int typeL;//тип слоя
	int count_heal=0;//кол-во здоровых узлов в слое
	int count_inf=0;//кол-во заражённых узлов в слое
	bool tor;//флажок тора
	Layer(int n, int m, int height, int width, int type, int nomer, bool t)
	{
		tor = t;
		typeL = type;
		num = nomer;
		double length;
		double* DotsX = new double[m];
		double* DotsY = new double[n];

		if (height / (n + 1) > width / (m + 1))
			length = width / (m + 1);
		else
			length = height / (n + 1);
		for (int i = 0; i < m; i++)
			DotsX[i] = length + length * i;
		for (int i = 0; i < n; i++)
			DotsY[i] = length + length * i;

		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
			{
				LNodes.push_back(Node(i, j, DotsX[j], DotsY[i],num));
				count_heal++;
			}
		if (type == 0)
		{
			//добавление узлов в списки соседей
			for (int i = 0; i < LNodes.size(); i++)
			{
				if (LNodes[i].j != m - 1)
				{
					LNodes[i].Near.push_back(&LNodes[i + 1]);
					LEdges.push_back(Edge(&LNodes[i], &LNodes[i + 1]));
				}
				if (LNodes[i].i != m - 1)
				{
					LNodes[i].Near.push_back(&LNodes[i + m]);
					LEdges.push_back(Edge(&LNodes[i], &LNodes[i + m]));
				}
			}

			for (int i = LNodes.size() - 1; i > 0; i--)
			{
				if (LNodes[i].j != 0)
				{
					LNodes[i].Near.push_back(&LNodes[i - 1]);

				}
				if (LNodes[i].i != 0)
				{
					LNodes[i].Near.push_back(&LNodes[i - m]);
				}
			}
		}
		else if (type == 1)
		{
			//альтернативный принцип соседства 2
			for (int i = 1; i < LNodes.size() - m ; i++)
			{
				if (m % 2 != 0)
				{
					if (i % 2 != 0)
					{
						if (LNodes[i + m - 1].i - LNodes[i].i == 1)
						{
							LNodes[i].Near.push_back(&LNodes[i + m - 1]);
							LNodes[i + m - 1].Near.push_back(&LNodes[i]);
							LEdges.push_back(Edge(&LNodes[i], &LNodes[i + m - 1]));
						}
						if (i + m + 1 < LNodes.size())
						{
							if (LNodes[i + m + 1].i - LNodes[i].i == 1)
							{
								LNodes[i].Near.push_back(&LNodes[i + m + 1]);
								LNodes[i + m + 1].Near.push_back(&LNodes[i]);
								LEdges.push_back(Edge(&LNodes[i], &LNodes[i + m + 1]));
							}
						}
					}
				}
				else
				{
					if ((LNodes[i].i + 1) % 2 != 0)
					{
						if (i % 2 != 0)
						{
							if (LNodes[i + m - 1].i - LNodes[i].i == 1)
							{
								LNodes[i].Near.push_back(&LNodes[i + m - 1]);
								LNodes[i + m - 1].Near.push_back(&LNodes[i]);
								LEdges.push_back(Edge(&LNodes[i], &LNodes[i + m - 1]));
							}
							if (i + m + 1 < LNodes.size())
							{
								if (LNodes[i + m + 1].i - LNodes[i].i == 1)
								{
									LNodes[i].Near.push_back(&LNodes[i + m + 1]);
									LNodes[i + m + 1].Near.push_back(&LNodes[i]);
									LEdges.push_back(Edge(&LNodes[i], &LNodes[i + m + 1]));
								}
							}
						}
					}
					else
					{
						if (i % 2 == 0)
						{
							if (LNodes[i + m - 1].i - LNodes[i].i == 1)
							{
								LNodes[i].Near.push_back(&LNodes[i + m - 1]);
								LNodes[i + m - 1].Near.push_back(&LNodes[i]);
								LEdges.push_back(Edge(&LNodes[i], &LNodes[i + m - 1]));
							}
							if (i + m + 1 < LNodes.size())
							{
								if (LNodes[i + m + 1].i - LNodes[i].i == 1)
								{
									LNodes[i].Near.push_back(&LNodes[i + m + 1]);
									LNodes[i + m + 1].Near.push_back(&LNodes[i]);
									LEdges.push_back(Edge(&LNodes[i], &LNodes[i + m + 1]));
								}
							}
						}
					}
				}
			}
			
			for (int j = 0; j < LNodes.size(); j++)
			{
				if (LNodes[j].Near.size() == 0)
				{
					LNodes[j].active = false;
					count_heal--;
				}
			}
		}
		else if (type == 2)
		{
			//альтернативный принцип соседства 3
			for (int i = 0; i < LNodes.size()-m; i++)
			{
				if (m % 2 != 0)//нечётное кол-во узлов
				{
					if (i % 2 == 0)//чётные узлы
					{
						//левые
						if (LNodes[i + m - 1].i - LNodes[i].i == 1)//если разница(по строкам) между узлом и потенц соседом равна 1
						{
							//становятся соседями
							LNodes[i].Near.push_back(&LNodes[i + m - 1]);
							LNodes[i + m - 1].Near.push_back(&LNodes[i]);
							LEdges.push_back(Edge(&LNodes[i], &LNodes[i + m - 1]));
						}
						//правые
						if (i + m + 1 < LNodes.size())//если не выходит за пределы вектора
						{
							if (LNodes[i + m + 1].i - LNodes[i].i == 1)//если разница(по строкам) между узлом и потенц соседом равна 1
							{
								//становятся соседями
								LNodes[i].Near.push_back(&LNodes[i + m + 1]);
								LNodes[i + m + 1].Near.push_back(&LNodes[i]);
								LEdges.push_back(Edge(&LNodes[i], &LNodes[i + m + 1]));
							}
						}
					}
				}
				else//чётное
				{
					if ((LNodes[i].i + 1) % 2 == 0)//если чётная строка узлов
					{
						if (i % 2 != 0)//нечётные узлы
						{
							if (LNodes[i + m - 1].i - LNodes[i].i == 1)//если разница(по строкам) между узлом и потенц соседом равна 1
							{
								//становятся соседями
								LNodes[i].Near.push_back(&LNodes[i + m - 1]);
								LNodes[i + m - 1].Near.push_back(&LNodes[i]);
								LEdges.push_back(Edge(&LNodes[i], &LNodes[i + m - 1]));
							}
							if (LNodes[i + m + 1].i - LNodes[i].i == 1)//если разница(по строкам) между узлом и потенц соседом равна 1
							{
								//становятся соседями
								LNodes[i].Near.push_back(&LNodes[i + m + 1]);
								LNodes[i + m + 1].Near.push_back(&LNodes[i]);
								LEdges.push_back(Edge(&LNodes[i], &LNodes[i + m + 1]));
							}
						}
					}
					else//нечётная
					{
						if (i % 2 == 0)//чётные узлы
						{
							if (LNodes[i + m - 1].i - LNodes[i].i == 1)//если разница(по строкам) между узлом и потенц соседом равна 1
							{
								//становятся соседями
								LNodes[i].Near.push_back(&LNodes[i + m - 1]);
								LNodes[i + m - 1].Near.push_back(&LNodes[i]);
								LEdges.push_back(Edge(&LNodes[i], &LNodes[i + m - 1]));
							}
							if (LNodes[i + m + 1].i - LNodes[i].i == 1)//если разница(по строкам) между узлом и потенц соседом равна 1
							{
								//становятся соседями
								LNodes[i].Near.push_back(&LNodes[i + m + 1]);
								LNodes[i + m + 1].Near.push_back(&LNodes[i]);
								LEdges.push_back(Edge(&LNodes[i], &LNodes[i + m + 1]));
							}
						}
					}
				}
			}
			//узлы без связей
			for (int j = 0; j < LNodes.size(); j++)
			{
				if (LNodes[j].Near.size() == 0)
				{
					LNodes[j].active = false;
					count_heal--;
				}
			}
		}

	}
};







//
			////tor
			//if (tor == true)
			//{
			//	for (int i = 0; i < LNodes.size(); i++)
			//	{
			//		if (LNodes[i].active == true)
			//		{
			//			if (0 <= LNodes[i].i && LNodes[i].j == 0)
			//			{
			//				LNodes[i].Near.push_back(&LNodes[i + m - 1]);
			//				LNodes[i + m - 1].Near.push_back(&LNodes[i]);
			//			}
			//		}
			//	}
			//	for (int i = 0; i < LNodes.size(); i++)
			//	{
			//		if (LNodes[i].active == true)
			//		{
			//			if (0 <= LNodes[i].j && LNodes[i].i == 0)
			//			{
			//				LNodes[i].Near.push_back(&LNodes[i + n * (m - 1)]);
			//				LNodes[i + n * (m - 1)].Near.push_back(&LNodes[i]);
			//			}
			//		}
			//	}
			//}
			////

