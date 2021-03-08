#pragma once
#include <math.h>
#include <vector>
#include "Layers.h"
#include <time.h>
#include <cmath>
int height, width;


namespace MultiLayerSISnet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	double d(int x, int y, int x1, int y1);
	bool found_of_edge(Node& a, Node& b, int lays);
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:

	private: System::Windows::Forms::Timer^ timer1;



	private: System::Windows::Forms::Label^ label2;







	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel2;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel3;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel4;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel5;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel6;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel7;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel8;










	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::GroupBox^ groupBox11;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::GroupBox^ groupBox10;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::GroupBox^ groupBox9;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::RadioButton^ radioButton12;
	private: System::Windows::Forms::RadioButton^ radioButton11;
	private: System::Windows::Forms::RadioButton^ radioButton10;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::RadioButton^ radioButton9;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TabControl^ tabControl1;
private: System::Windows::Forms::CheckBox^ checkBox7;
private: System::Windows::Forms::CheckBox^ checkBox6;
private: System::Windows::Forms::TabPage^ tabPage3;
private: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::RadioButton^ radioButton15;
private: System::Windows::Forms::RadioButton^ radioButton14;
private: System::Windows::Forms::RadioButton^ radioButton13;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea17 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend17 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series45 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea18 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend18 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series46 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series47 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea19 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend19 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series48 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series49 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series50 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series51 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series52 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series53 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea20 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend20 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series54 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series55 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel3 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel4 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel5 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel6 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel7 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel8 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton15 = (gcnew System::Windows::Forms::RadioButton());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton14 = (gcnew System::Windows::Forms::RadioButton());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton13 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->chart4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->statusStrip1->SuspendLayout();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->tabPage4->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->tabPage1->SuspendLayout();
			this->groupBox11->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(0, -1);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(900, 741);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::PictureBox1_MouseClick);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::PictureBox1_MouseMove);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::Timer1_Tick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 723);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 29);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Итерация:";
			// 
			// statusStrip1
			// 
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->toolStripStatusLabel1,
					this->toolStripStatusLabel2, this->toolStripStatusLabel3, this->toolStripStatusLabel4, this->toolStripStatusLabel5, this->toolStripStatusLabel6,
					this->toolStripStatusLabel7, this->toolStripStatusLabel8
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 762);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1456, 25);
			this->statusStrip1->TabIndex = 13;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(165, 20);
			this->toolStripStatusLabel1->Text = L"Информация об узле: ";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(27, 20);
			this->toolStripStatusLabel2->Text = L"i - ";
			// 
			// toolStripStatusLabel3
			// 
			this->toolStripStatusLabel3->Name = L"toolStripStatusLabel3";
			this->toolStripStatusLabel3->Size = System::Drawing::Size(27, 20);
			this->toolStripStatusLabel3->Text = L"j - ";
			// 
			// toolStripStatusLabel4
			// 
			this->toolStripStatusLabel4->Name = L"toolStripStatusLabel4";
			this->toolStripStatusLabel4->Size = System::Drawing::Size(32, 20);
			this->toolStripStatusLabel4->Text = L"X - ";
			// 
			// toolStripStatusLabel5
			// 
			this->toolStripStatusLabel5->Name = L"toolStripStatusLabel5";
			this->toolStripStatusLabel5->Size = System::Drawing::Size(31, 20);
			this->toolStripStatusLabel5->Text = L"Y - ";
			// 
			// toolStripStatusLabel6
			// 
			this->toolStripStatusLabel6->Name = L"toolStripStatusLabel6";
			this->toolStripStatusLabel6->Size = System::Drawing::Size(97, 20);
			this->toolStripStatusLabel6->Text = L"Состояние - ";
			// 
			// toolStripStatusLabel7
			// 
			this->toolStripStatusLabel7->Name = L"toolStripStatusLabel7";
			this->toolStripStatusLabel7->Size = System::Drawing::Size(204, 20);
			this->toolStripStatusLabel7->Text = L"Время до выздоровления - ";
			// 
			// toolStripStatusLabel8
			// 
			this->toolStripStatusLabel8->Name = L"toolStripStatusLabel8";
			this->toolStripStatusLabel8->Size = System::Drawing::Size(194, 20);
			this->toolStripStatusLabel8->Text = L"Счётчик заражений узла - ";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// tabPage5
			// 
			this->tabPage5->BackColor = System::Drawing::Color::Honeydew;
			this->tabPage5->Controls->Add(this->chart3);
			this->tabPage5->Controls->Add(this->chart1);
			this->tabPage5->Location = System::Drawing::Point(4, 37);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(676, 700);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Доп.стат";
			// 
			// chart3
			// 
			chartArea17->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea17);
			legend17->Name = L"Legend1";
			this->chart3->Legends->Add(legend17);
			this->chart3->Location = System::Drawing::Point(3, 322);
			this->chart3->Name = L"chart3";
			this->chart3->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			this->chart3->PaletteCustomColors = gcnew cli::array< System::Drawing::Color >(2) { System::Drawing::Color::Green, System::Drawing::Color::Red };
			series45->ChartArea = L"ChartArea1";
			series45->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series45->Legend = L"Legend1";
			series45->Name = L"SIS";
			this->chart3->Series->Add(series45);
			this->chart3->Size = System::Drawing::Size(670, 375);
			this->chart3->TabIndex = 2;
			this->chart3->Text = L"chart3";
			// 
			// chart1
			// 
			chartArea18->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea18);
			legend18->Name = L"Legend1";
			legend18->Position->Auto = false;
			legend18->Position->Height = 10;
			legend18->Position->Width = 20;
			legend18->Position->X = 80;
			this->chart1->Legends->Add(legend18);
			this->chart1->Location = System::Drawing::Point(5, 5);
			this->chart1->Margin = System::Windows::Forms::Padding(5);
			this->chart1->Name = L"chart1";
			series46->BorderWidth = 3;
			series46->ChartArea = L"ChartArea1";
			series46->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series46->Color = System::Drawing::Color::Red;
			series46->Legend = L"Legend1";
			series46->Name = L"Заражённые";
			series47->BorderWidth = 3;
			series47->ChartArea = L"ChartArea1";
			series47->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series47->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series47->Legend = L"Legend1";
			series47->Name = L"Здоровые";
			this->chart1->Series->Add(series46);
			this->chart1->Series->Add(series47);
			this->chart1->Size = System::Drawing::Size(666, 309);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::Color::Honeydew;
			this->tabPage4->Controls->Add(this->groupBox8);
			this->tabPage4->Controls->Add(this->groupBox7);
			this->tabPage4->Controls->Add(this->groupBox6);
			this->tabPage4->Controls->Add(this->chart2);
			this->tabPage4->Location = System::Drawing::Point(4, 37);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(676, 700);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Статистика";
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->label15);
			this->groupBox8->Controls->Add(this->label16);
			this->groupBox8->Controls->Add(this->label17);
			this->groupBox8->Location = System::Drawing::Point(214, 138);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(247, 127);
			this->groupBox8->TabIndex = 14;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Третий слой";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(6, 61);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(190, 29);
			this->label15->TabIndex = 9;
			this->label15->Text = L"Инфецированы:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(6, 90);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(113, 29);
			this->label16->TabIndex = 10;
			this->label16->Text = L"Здоровы:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(6, 32);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(79, 29);
			this->label17->TabIndex = 11;
			this->label17->Text = L"Всего:";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->label12);
			this->groupBox7->Controls->Add(this->label13);
			this->groupBox7->Controls->Add(this->label14);
			this->groupBox7->Location = System::Drawing::Point(424, 5);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(247, 127);
			this->groupBox7->TabIndex = 13;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Второй слой";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 61);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(190, 29);
			this->label12->TabIndex = 6;
			this->label12->Text = L"Инфецированы:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(6, 90);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(113, 29);
			this->label13->TabIndex = 7;
			this->label13->Text = L"Здоровы:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 32);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(79, 29);
			this->label14->TabIndex = 8;
			this->label14->Text = L"Всего:";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label9);
			this->groupBox6->Controls->Add(this->label10);
			this->groupBox6->Controls->Add(this->label11);
			this->groupBox6->Location = System::Drawing::Point(5, 5);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(247, 127);
			this->groupBox6->TabIndex = 12;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Первый слой";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 61);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(190, 29);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Инфецированы:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 90);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(113, 29);
			this->label10->TabIndex = 4;
			this->label10->Text = L"Здоровы:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 32);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(79, 29);
			this->label11->TabIndex = 5;
			this->label11->Text = L"Всего:";
			// 
			// chart2
			// 
			chartArea19->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea19);
			legend19->Name = L"Legend1";
			legend19->Position->Auto = false;
			legend19->Position->Height = 10;
			legend19->Position->Width = 20;
			legend19->Position->X = 80;
			this->chart2->Legends->Add(legend19);
			this->chart2->Location = System::Drawing::Point(5, 273);
			this->chart2->Margin = System::Windows::Forms::Padding(5);
			this->chart2->Name = L"chart2";
			series48->BorderWidth = 3;
			series48->ChartArea = L"ChartArea1";
			series48->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series48->Color = System::Drawing::Color::Red;
			series48->Legend = L"Legend1";
			series48->Name = L"Заражённые(слой1)";
			series49->BorderWidth = 3;
			series49->ChartArea = L"ChartArea1";
			series49->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series49->Color = System::Drawing::Color::Yellow;
			series49->Legend = L"Legend1";
			series49->Name = L"Здоровые(слой1)";
			series50->BorderWidth = 3;
			series50->ChartArea = L"ChartArea1";
			series50->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series50->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			series50->Legend = L"Legend1";
			series50->Name = L"Заражённые(слой2)";
			series51->BorderWidth = 3;
			series51->ChartArea = L"ChartArea1";
			series51->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series51->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series51->Legend = L"Legend1";
			series51->Name = L"Здоровые(слой2)";
			series52->BorderWidth = 3;
			series52->ChartArea = L"ChartArea1";
			series52->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series52->Color = System::Drawing::Color::Purple;
			series52->Legend = L"Legend1";
			series52->Name = L"Заражённые(слой3)";
			series53->BorderWidth = 3;
			series53->ChartArea = L"ChartArea1";
			series53->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series53->Color = System::Drawing::Color::Black;
			series53->Legend = L"Legend1";
			series53->Name = L"Здоровые(слой3)";
			this->chart2->Series->Add(series48);
			this->chart2->Series->Add(series49);
			this->chart2->Series->Add(series50);
			this->chart2->Series->Add(series51);
			this->chart2->Series->Add(series52);
			this->chart2->Series->Add(series53);
			this->chart2->Size = System::Drawing::Size(666, 422);
			this->chart2->TabIndex = 2;
			this->chart2->Text = L"chart2";
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Honeydew;
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->groupBox11);
			this->tabPage1->Controls->Add(this->groupBox10);
			this->tabPage1->Controls->Add(this->groupBox9);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->button15);
			this->tabPage1->Controls->Add(this->groupBox5);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->trackBar1);
			this->tabPage1->Location = System::Drawing::Point(4, 37);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(676, 700);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"SIS";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(381, 543);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(270, 35);
			this->button4->TabIndex = 28;
			this->button4->Text = L"Очистить сессию";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Button4_Click);
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->textBox8);
			this->groupBox11->Controls->Add(this->label19);
			this->groupBox11->Controls->Add(this->textBox6);
			this->groupBox11->Controls->Add(this->label8);
			this->groupBox11->Location = System::Drawing::Point(12, 341);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(327, 161);
			this->groupBox11->TabIndex = 27;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"Третий слой";
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Constantia", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->Location = System::Drawing::Point(100, 60);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(47, 34);
			this->textBox8->TabIndex = 1;
			this->textBox8->Text = L"50";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(6, 32);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(275, 58);
			this->label19->TabIndex = 0;
			this->label19->Text = L"Вероятность заражения\r\n(0-100):";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(159, 90);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(47, 36);
			this->textBox6->TabIndex = 24;
			this->textBox6->Text = L"3";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 93);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(157, 29);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Время  вызд.:\r\n";
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->textBox5);
			this->groupBox10->Controls->Add(this->textBox7);
			this->groupBox10->Controls->Add(this->label18);
			this->groupBox10->Controls->Add(this->label7);
			this->groupBox10->Location = System::Drawing::Point(12, 182);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(326, 153);
			this->groupBox10->TabIndex = 26;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"Второй слой";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(159, 90);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(47, 36);
			this->textBox5->TabIndex = 22;
			this->textBox5->Text = L"3";
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Constantia", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(100, 56);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(47, 34);
			this->textBox7->TabIndex = 1;
			this->textBox7->Text = L"50";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(6, 32);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(275, 58);
			this->label18->TabIndex = 0;
			this->label18->Text = L"Вероятность заражения\r\n(0-100):";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 93);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(157, 29);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Время  вызд.:";
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->textBox2);
			this->groupBox9->Controls->Add(this->textBox3);
			this->groupBox9->Controls->Add(this->label3);
			this->groupBox9->Controls->Add(this->label4);
			this->groupBox9->Location = System::Drawing::Point(12, 8);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(327, 168);
			this->groupBox9->TabIndex = 25;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Первый слой";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(159, 93);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(47, 36);
			this->textBox2->TabIndex = 8;
			this->textBox2->Text = L"3";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(100, 57);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(53, 36);
			this->textBox3->TabIndex = 9;
			this->textBox3->Text = L"50";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 32);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(281, 58);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Вероятность заражения \r\n(0-100):";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 96);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(157, 29);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Время  вызд.:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(260, 527);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(69, 36);
			this->textBox4->TabIndex = 20;
			this->textBox4->Text = L"50";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(18, 505);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(281, 58);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Вероятность заражения \r\nмежду слоями(0-100):";
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(23, 576);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(273, 67);
			this->button15->TabIndex = 18;
			this->button15->Text = L"Зафиксировать связи между слоями";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::Button15_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->radioButton12);
			this->groupBox5->Controls->Add(this->radioButton11);
			this->groupBox5->Controls->Add(this->radioButton10);
			this->groupBox5->Location = System::Drawing::Point(345, 8);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(325, 168);
			this->groupBox5->TabIndex = 17;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Выберите слой";
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->Enabled = false;
			this->radioButton12->Location = System::Drawing::Point(22, 119);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(172, 33);
			this->radioButton12->TabIndex = 2;
			this->radioButton12->TabStop = true;
			this->radioButton12->Text = L"Третий слой";
			this->radioButton12->UseVisualStyleBackColor = true;
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Enabled = false;
			this->radioButton11->Location = System::Drawing::Point(21, 80);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(171, 33);
			this->radioButton11->TabIndex = 1;
			this->radioButton11->TabStop = true;
			this->radioButton11->Text = L"Второй слой";
			this->radioButton11->UseVisualStyleBackColor = true;
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Enabled = false;
			this->radioButton10->Location = System::Drawing::Point(21, 41);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(179, 33);
			this->radioButton10->TabIndex = 0;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"Первый слой";
			this->radioButton10->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(345, 182);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(325, 153);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Изменение сетки";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(15, 113);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(188, 33);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Удаление узла";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(14, 74);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(205, 33);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Удаление ребра";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(14, 35);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(155, 33);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Заражение";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(378, 354);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(273, 41);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Распространение";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(376, 449);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(163, 29);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Интервал:500\r\n";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(378, 401);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(273, 41);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Остановить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Button3_Click);
			// 
			// trackBar1
			// 
			this->trackBar1->BackColor = System::Drawing::Color::Honeydew;
			this->trackBar1->Location = System::Drawing::Point(381, 481);
			this->trackBar1->Maximum = 1000;
			this->trackBar1->Minimum = 100;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->trackBar1->Size = System::Drawing::Size(270, 56);
			this->trackBar1->TabIndex = 14;
			this->trackBar1->TickFrequency = 100;
			this->trackBar1->TickStyle = System::Windows::Forms::TickStyle::Both;
			this->trackBar1->Value = 500;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::TrackBar1_Scroll);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::Honeydew;
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->button14);
			this->tabPage2->Controls->Add(this->button7);
			this->tabPage2->Controls->Add(this->button8);
			this->tabPage2->Controls->Add(this->groupBox4);
			this->tabPage2->Controls->Add(this->groupBox3);
			this->tabPage2->Controls->Add(this->checkBox2);
			this->tabPage2->Controls->Add(this->groupBox2);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 37);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(676, 700);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Сеть";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(17, 631);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(296, 50);
			this->button6->TabIndex = 18;
			this->button6->Text = L"Сохранить сеть в файл";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::Button6_Click);
			// 
			// button14
			// 
			this->button14->Enabled = false;
			this->button14->Location = System::Drawing::Point(364, 575);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(306, 50);
			this->button14->TabIndex = 25;
			this->button14->Text = L"Отрисовка слоёв";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::Button14_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(364, 631);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(306, 50);
			this->button7->TabIndex = 19;
			this->button7->Text = L"Загрузить сеть из файла";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::Button7_Click);
			// 
			// button8
			// 
			this->button8->Enabled = false;
			this->button8->Location = System::Drawing::Point(17, 575);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(296, 50);
			this->button8->TabIndex = 0;
			this->button8->Text = L"Удалить все слои";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::Button8_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->radioButton15);
			this->groupBox4->Controls->Add(this->checkBox7);
			this->groupBox4->Controls->Add(this->checkBox5);
			this->groupBox4->Controls->Add(this->radioButton9);
			this->groupBox4->Controls->Add(this->radioButton8);
			this->groupBox4->Controls->Add(this->button12);
			this->groupBox4->Location = System::Drawing::Point(11, 409);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(659, 160);
			this->groupBox4->TabIndex = 24;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Третий слой (чёрный-фиолетовый)";
			// 
			// radioButton15
			// 
			this->radioButton15->AutoSize = true;
			this->radioButton15->Location = System::Drawing::Point(438, 108);
			this->radioButton15->Name = L"radioButton15";
			this->radioButton15->Size = System::Drawing::Size(218, 33);
			this->radioButton15->TabIndex = 6;
			this->radioButton15->TabStop = true;
			this->radioButton15->Text = L"Тип соседства #3";
			this->radioButton15->UseVisualStyleBackColor = true;
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Location = System::Drawing::Point(345, 36);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(74, 33);
			this->checkBox7->TabIndex = 5;
			this->checkBox7->Text = L"Тор";
			this->checkBox7->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Checked = true;
			this->checkBox5->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox5->Location = System::Drawing::Point(6, 35);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(328, 62);
			this->checkBox5->TabIndex = 4;
			this->checkBox5->Text = L"Отобразить\r\n(многослойная отрисовка)\r\n";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Location = System::Drawing::Point(438, 69);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(219, 33);
			this->radioButton9->TabIndex = 3;
			this->radioButton9->Text = L"Тип соседства #2";
			this->radioButton9->UseVisualStyleBackColor = true;
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Checked = true;
			this->radioButton8->Location = System::Drawing::Point(438, 35);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(215, 33);
			this->radioButton8->TabIndex = 2;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"Тип соседства #1";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(6, 108);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(151, 46);
			this->button12->TabIndex = 0;
			this->button12->Text = L"Построить";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::Button12_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->radioButton14);
			this->groupBox3->Controls->Add(this->checkBox6);
			this->groupBox3->Controls->Add(this->checkBox4);
			this->groupBox3->Controls->Add(this->radioButton5);
			this->groupBox3->Controls->Add(this->radioButton4);
			this->groupBox3->Controls->Add(this->button10);
			this->groupBox3->Location = System::Drawing::Point(11, 252);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(659, 151);
			this->groupBox3->TabIndex = 23;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Второй слой (зелёный-синий)";
			// 
			// radioButton14
			// 
			this->radioButton14->AutoSize = true;
			this->radioButton14->Location = System::Drawing::Point(434, 99);
			this->radioButton14->Name = L"radioButton14";
			this->radioButton14->Size = System::Drawing::Size(218, 33);
			this->radioButton14->TabIndex = 6;
			this->radioButton14->TabStop = true;
			this->radioButton14->Text = L"Тип соседства #3";
			this->radioButton14->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(345, 35);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(74, 33);
			this->checkBox6->TabIndex = 5;
			this->checkBox6->Text = L"Тор";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Checked = true;
			this->checkBox4->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox4->Location = System::Drawing::Point(6, 33);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(328, 62);
			this->checkBox4->TabIndex = 4;
			this->checkBox4->Text = L"Отобразить\r\n(многослойная отрисовка)\r\n";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(434, 62);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(219, 33);
			this->radioButton5->TabIndex = 3;
			this->radioButton5->Text = L"Тип соседства #2";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Checked = true;
			this->radioButton4->Location = System::Drawing::Point(434, 23);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(215, 33);
			this->radioButton4->TabIndex = 2;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Тип соседства #1";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(6, 99);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(151, 46);
			this->button10->TabIndex = 0;
			this->button10->Text = L"Построить";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::Button10_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(11, 54);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(198, 33);
			this->checkBox2->TabIndex = 21;
			this->checkBox2->Text = L"Индексы узлов";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton13);
			this->groupBox2->Controls->Add(this->radioButton7);
			this->groupBox2->Controls->Add(this->radioButton6);
			this->groupBox2->Controls->Add(this->checkBox3);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->checkBox1);
			this->groupBox2->Location = System::Drawing::Point(11, 93);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(659, 158);
			this->groupBox2->TabIndex = 22;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Первый слой (жёлтый-красный)";
			// 
			// radioButton13
			// 
			this->radioButton13->AutoSize = true;
			this->radioButton13->Location = System::Drawing::Point(434, 112);
			this->radioButton13->Name = L"radioButton13";
			this->radioButton13->Size = System::Drawing::Size(218, 33);
			this->radioButton13->TabIndex = 26;
			this->radioButton13->TabStop = true;
			this->radioButton13->Text = L"Тип соседства #3";
			this->radioButton13->UseVisualStyleBackColor = true;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(434, 74);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(219, 33);
			this->radioButton7->TabIndex = 25;
			this->radioButton7->Text = L"Тип соседства #2";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Checked = true;
			this->radioButton6->Location = System::Drawing::Point(434, 35);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(215, 33);
			this->radioButton6->TabIndex = 24;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Тип соседства #1";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Checked = true;
			this->checkBox3->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox3->Location = System::Drawing::Point(11, 35);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(328, 62);
			this->checkBox3->TabIndex = 22;
			this->checkBox3->Text = L"Отобразить \r\n(многослойная отрисовка)";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(8, 105);
			this->button1->Margin = System::Windows::Forms::Padding(5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(151, 46);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Построить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(345, 36);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(74, 33);
			this->checkBox1->TabIndex = 20;
			this->checkBox1->Text = L"Тор";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(202, 29);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Размерность n*n:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(214, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(68, 36);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"5";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(760, -1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(684, 741);
			this->tabControl1->TabIndex = 21;
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::Honeydew;
			this->tabPage3->Controls->Add(this->chart4);
			this->tabPage3->Controls->Add(this->dataGridView1);
			this->tabPage3->Location = System::Drawing::Point(4, 37);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(676, 700);
			this->tabPage3->TabIndex = 5;
			this->tabPage3->Text = L"Зависимости";
			// 
			// chart4
			// 
			chartArea20->Name = L"ChartArea1";
			this->chart4->ChartAreas->Add(chartArea20);
			legend20->Name = L"Legend1";
			legend20->Position->Auto = false;
			legend20->Position->Height = 10;
			legend20->Position->Width = 20;
			legend20->Position->X = 80;
			this->chart4->Legends->Add(legend20);
			this->chart4->Location = System::Drawing::Point(5, 314);
			this->chart4->Margin = System::Windows::Forms::Padding(5);
			this->chart4->Name = L"chart4";
			series54->BorderWidth = 3;
			series54->ChartArea = L"ChartArea1";
			series54->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::StackedColumn;
			series54->Color = System::Drawing::Color::Red;
			series54->Legend = L"Legend1";
			series54->Name = L"Заражённые";
			series55->BorderWidth = 3;
			series55->ChartArea = L"ChartArea1";
			series55->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::StackedColumn;
			series55->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series55->Legend = L"Legend1";
			series55->Name = L"Здоровые";
			this->chart4->Series->Add(series54);
			this->chart4->Series->Add(series55);
			this->chart4->Size = System::Drawing::Size(671, 381);
			this->chart4->TabIndex = 2;
			this->chart4->Text = L"chart4";
			this->chart4->Click += gcnew System::EventHandler(this, &MyForm::Chart4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle9;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6
			});
			this->dataGridView1->Location = System::Drawing::Point(6, 6);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle10;
			this->dataGridView1->Size = System::Drawing::Size(664, 300);
			this->dataGridView1->TabIndex = 1;
			// 
			// Column1
			// 
			this->Column1->Frozen = true;
			this->Column1->HeaderText = L"#";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 30;
			// 
			// Column2
			// 
			this->Column2->Frozen = true;
			this->Column2->HeaderText = L"Слой1";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 80;
			// 
			// Column3
			// 
			this->Column3->Frozen = true;
			this->Column3->HeaderText = L"Слой2";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 80;
			// 
			// Column4
			// 
			this->Column4->Frozen = true;
			this->Column4->HeaderText = L"Слой3";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 80;
			// 
			// Column5
			// 
			this->Column5->Frozen = true;
			this->Column5->HeaderText = L"МежСл";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 90;
			// 
			// Column6
			// 
			this->Column6->Frozen = true;
			this->Column6->HeaderText = L"Заражение";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 120;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::Honeydew;
			this->ClientSize = System::Drawing::Size(1456, 787);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->pictureBox1);
			this->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Margin = System::Windows::Forms::Padding(5);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MultiLayerSISnet";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->groupBox11->ResumeLayout(false);
			this->groupBox11->PerformLayout();
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Bitmap^ Image; // Полотно
		Graphics^ graph; // Рисунок
		System::Drawing::Font^ heb; // Шрифт
		double kf_inf_l1 = 50; // Вероятность заражения
		double kf_inf_l2 = 50; // Вероятность заражения
		double kf_inf_l3 = 50; // Вероятность заражения
		double l_kf_inf = 50;// Вероятность заражения между слоями
		double im = 50; // Иммунитет узлов
		int rec_time_l1 = 1; // Время восстановления на первом слое
		int rec_time_l2 = 1; // Время восстановления на втором слое
		int rec_time_l3 = 1; // Время восстановления на третьем слое
		int t_r = 0; // Итерация
		int c_inf = 0; // Кол-во инфицированных на всех слоях
		int c_heal = 0; // Кол-во здоровых на всех слоях
		String^ s_file; // Путь сохранения\загрузки
		int n, m; // Размерность сетки m x n
		int index=0;

	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) //создание первого слоя
	{
		button8->Enabled = true;
		button14->Enabled = true;
		height = pictureBox1->Size.Height;
		width = pictureBox1->Size.Width;
		n = Convert::ToInt32(textBox1->Text);
		m = Convert::ToInt32(textBox1->Text);
		if (radioButton6->Checked)
		{
			Layers.push_back(Layer(n, m, height, width, 0,1,checkBox1->Checked));
		}
		else if (radioButton7->Checked)
		{
			Layers.push_back(Layer(n, m, height, width, 1,1, checkBox1->Checked));
		}
		else if (radioButton13->Checked)
		{
			Layers.push_back(Layer(n, m, height, width, 2, 1, checkBox1->Checked));
		}
		button1->Enabled = false;
		radioButton10->Enabled = true;
		Button14_Click(sender, e);
	}



	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) // Запуск таймера
	{
		kf_inf_l1 = Convert::ToDouble(textBox3->Text);
		kf_inf_l2 = Convert::ToDouble(textBox7->Text);
		kf_inf_l3 = Convert::ToDouble(textBox8->Text);
		rec_time_l1 = Convert::ToInt16(textBox2->Text);
		l_kf_inf = Convert::ToDouble(textBox4->Text);
		rec_time_l2 = Convert::ToDouble(textBox5->Text);
		rec_time_l3 = Convert::ToDouble(textBox6->Text);
		for (int i = 0; i < Layers.size(); i++)
		{
			for (int j = 0; j < Layers[i].LNodes.size(); j++)
			{
				Layers[i].LNodes[j].time_to_recovery = 0;
			}
		}
		timer1->Start();
	}



	private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) //Остановка
	{
		index++;
		dataGridView1->Rows->Add(index,(textBox3->Text+"%,"+ textBox2->Text), (textBox7->Text + "%," + textBox5->Text), (textBox8->Text + "%," + textBox6->Text),textBox4->Text+"%", (float(c_inf) / (c_inf + c_heal)) * 100 +"%");
		chart4->Series["Здоровые"]->Points->Add((float(c_heal) / (c_heal + c_inf))*100);
		chart4->Series["Заражённые"]->Points->Add((float(c_inf) / (c_heal + c_inf))*100);


		timer1->Stop();
	}	



	private: System::Void PictureBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) //Изменение сетки
	{
		if ((radioButton1->Checked || radioButton2->Checked || radioButton3->Checked)&&(radioButton10->Checked || radioButton11->Checked || radioButton12->Checked))
		{
			int lay = 0;
			int ilay = 0;
			if (radioButton10->Checked)
				lay = 1;
			else if (radioButton11->Checked)
				lay = 2;
			else if (radioButton12->Checked)
				lay = 3;
			for (int i = 0; i < Layers.size(); i++)
			{
				if (Layers[i].num == lay)
				{
					ilay = i;
				}
			}

			if (radioButton1->Checked)//Заражение
			{
				double minD = 100000;
				int point = -1;
				for (int i = 0; i < Layers[ilay].LNodes.size(); i++)
				{
					if (d(e->X, e->Y, Layers[ilay].LNodes[i].X, Layers[ilay].LNodes[i].Y) < minD)
					{
						minD = d(e->X, e->Y, Layers[ilay].LNodes[i].X, Layers[ilay].LNodes[i].Y);
						point = i;
					}
				}
				if (Layers[ilay].LNodes[point].active == true)
				{
					if (Layers[ilay].LNodes[point].infection == false)
					{
						Layers[ilay].LNodes[point].infection = true;
						Layers[ilay].count_heal--;
						Layers[ilay].count_inf++;
						Layers[ilay].LNodes[point].count_infection++;
					}
					else
					{
						Layers[ilay].LNodes[point].infection = false;
						Layers[ilay].count_heal++;
						Layers[ilay].count_inf--;
					}
				}
				Button14_Click(sender, e);//отрисовка
			}
			else if (radioButton2->Checked)// Удаление ребра
			{
				double minE = 100000;
				int point = -1;
				for (int i = 0; i < Layers[ilay].LEdges.size(); i++)
				{
					if (d(e->X, e->Y, (Layers[ilay].LEdges[i].f_node->X + Layers[ilay].LEdges[i].s_node->X) / 2, (Layers[ilay].LEdges[i].f_node->Y + Layers[ilay].LEdges[i].s_node->Y) / 2) < minE)
					{
						minE = d(e->X, e->Y, (Layers[ilay].LEdges[i].f_node->X + Layers[ilay].LEdges[i].s_node->X) / 2, (Layers[ilay].LEdges[i].f_node->Y + Layers[ilay].LEdges[i].s_node->Y) / 2);
						point = i;
					}
				}
				if (Layers[ilay].LEdges[point].active == true)
				{
					Layers[ilay].LEdges[point].active = false;
				}
				else if (Layers[ilay].LEdges[point].active == false)
				{
					Layers[ilay].LEdges[point].active = true;
				}
				Button14_Click(sender, e);
			}
			else if (radioButton3->Checked)// Удаление узла
			{
				double minD = 100000;
				int point = -1;
				for (int i = 0; i < Layers[ilay].LNodes.size(); i++)
				{
					if (d(e->X, e->Y, Layers[ilay].LNodes[i].X, Layers[ilay].LNodes[i].Y) < minD)
					{
						minD = d(e->X, e->Y, Layers[ilay].LNodes[i].X, Layers[ilay].LNodes[i].Y);
						point = i;
					}
				}
				if (Layers[ilay].LNodes[point].active == true)
				{
					Layers[ilay].LNodes[point].active = false;
					for (int i = 0; i < Layers[ilay].LEdges.size(); i++)
					{
						if (Layers[ilay].LEdges[i].f_node == &Layers[ilay].LNodes[point] || Layers[ilay].LEdges[i].s_node == &Layers[ilay].LNodes[point])
						{
							Layers[ilay].LEdges[i].active = false;
						}
					}
					if (Layers[ilay].LNodes[point].infection == false)
					{
						Layers[ilay].count_heal--;
					}
					else
					{
						Layers[ilay].count_inf--;
					}
				}
				else if (Layers[ilay].LNodes[point].active == false)
				{
					Layers[ilay].LNodes[point].active = true;
					for (int i = 0; i < Layers[ilay].LEdges.size(); i++)
					{
						if (Layers[ilay].LEdges[i].f_node == &Layers[ilay].LNodes[point] || Layers[ilay].LEdges[i].s_node == &Layers[ilay].LNodes[point])
						{
							Layers[ilay].LEdges[i].active = true;
						}
					}
					if (Layers[ilay].LNodes[point].infection == false)
					{
						Layers[ilay].count_heal++;
					}
					else
					{
						Layers[ilay].count_inf++;
					}
				}
				Button14_Click(sender, e);
			}
		}
	}



	private: System::Void Timer1_Tick(System::Object^ sender, System::EventArgs^ e) //Распространение
	{
		if (button1->Enabled==false || button10->Enabled==false || button12->Enabled==false)
		{
			srand(time(NULL));
			t_r++;//Итерация
			label2->Text = "Итерация:" + Convert::ToString(t_r);
			int rec_time;
			int kf_inf;
			for (int layer = 0; layer < Layers.size(); layer++)
			{
				if (Layers[layer].num == 1)
				{
					rec_time = rec_time_l1;
					kf_inf = kf_inf_l1;
				}
				else if (Layers[layer].num == 2)
				{
					rec_time = rec_time_l2;
					kf_inf = kf_inf_l2;
				}
				else if (Layers[layer].num == 3)
				{
					rec_time = rec_time_l3;
					kf_inf = kf_inf_l3;
				}
				for (int i = 0; i < Layers[layer].LNodes.size(); i++)
				{
					if (Layers[layer].LNodes[i].infection == true && Layers[layer].LNodes[i].check_changed == false && Layers[layer].LNodes[i].active == true)//Если узел заражён и не изменялся в этой итерации
					{

						for (int j = 0; j < Layers[layer].LNodes[i].Near.size(); j++)//заражение
						{
							if (Layers[layer].LNodes[i].num_lay == Layers[layer].LNodes[i].Near[j]->num_lay)
							{
								//если иммунитет ниже коэф распространения и сосед не заражён, и не менялся в этой итерации
								if (((im = rand() % 100) < kf_inf) && (Layers[layer].LNodes[i].Near[j]->infection == false) && (Layers[layer].LNodes[i].Near[j]->check_changed == false) && (Layers[layer].LNodes[i].Near[j]->active == true) && (found_of_edge(Layers[layer].LNodes[i], *Layers[layer].LNodes[i].Near[j],layer) == true))
								{
									Layers[layer].LNodes[i].Near[j]->infection = true;//заражает соседа
									Layers[layer].LNodes[i].Near[j]->check_changed = true;//фиксация изменения состояния соседа
									Layers[layer].count_heal--;
									Layers[layer].count_inf++;
									Layers[layer].LNodes[i].Near[j]->count_infection++;//счётчик заражений узла
								}
								//tor
								if (Layers[layer].tor == true)
								{
									if (0 <= Layers[layer].LNodes[i].i && Layers[layer].LNodes[i].j == 0)
									{
										if (((im = rand() % 100) < kf_inf) && (Layers[layer].LNodes[i + m - 1].infection == false) && (Layers[layer].LNodes[i + m - 1].check_changed == false) && (Layers[layer].LNodes[i + m - 1].active == true))
										{
											Layers[layer].LNodes[i + m - 1].infection = true;
											Layers[layer].LNodes[i + m - 1].check_changed = true;
											Layers[layer].count_heal--;
											Layers[layer].count_inf++;
											Layers[layer].LNodes[i+m-1].count_infection++;//счётчик заражений узла
										}
									}
									if (0 <= Layers[layer].LNodes[i].j && Layers[layer].LNodes[i].i == 0)
									{
										if (((im = rand() % 100) < kf_inf) && (Layers[layer].LNodes[i + n * (m - 1)].infection == false) && (Layers[layer].LNodes[i + n * (m - 1)].check_changed == false) && (Layers[layer].LNodes[i + n * (m - 1)].active == true))
										{
											Layers[layer].LNodes[i + n * (m - 1)].infection = true;
											Layers[layer].LNodes[i + n * (m - 1)].check_changed = true;
											Layers[layer].count_heal--;
											Layers[layer].count_inf++;
											Layers[layer].LNodes[i + n * (m - 1)].count_infection++;//счётчик заражений узла
										}
									}
									if (0 <= Layers[layer].LNodes[i].i && Layers[layer].LNodes[i].j == m-1)
									{
										if (((im = rand() % 100) < kf_inf) && (Layers[layer].LNodes[i -m+1].infection == false) && (Layers[layer].LNodes[i -m+1].check_changed == false) && (Layers[layer].LNodes[i -m+1].active == true))
										{
											Layers[layer].LNodes[i -m+1].infection = true;
											Layers[layer].LNodes[i-m+1].check_changed = true;
											Layers[layer].count_heal--;
											Layers[layer].count_inf++;
											Layers[layer].LNodes[i -m+1].count_infection++;//счётчик заражений узла
										}
									}
									if (0 <= Layers[layer].LNodes[i].j && Layers[layer].LNodes[i].i == n-1)
									{
										if (((im = rand() % 100) < kf_inf) && (Layers[layer].LNodes[i - n * (m - 1)].infection == false) && (Layers[layer].LNodes[i - n * (m - 1)].check_changed == false) && (Layers[layer].LNodes[i - n * (m - 1)].active == true))
										{
											Layers[layer].LNodes[i - n * (m - 1)].infection = true;
											Layers[layer].LNodes[i - n * (m - 1)].check_changed = true;
											Layers[layer].count_heal--;
											Layers[layer].count_inf++;
											Layers[layer].LNodes[i - n * (m - 1)].count_infection++;//счётчик заражений узла
										}
									}
								}
								//
							}
							else
							{
								if (((im = 1 + rand() % 100) < l_kf_inf) && (Layers[layer].LNodes[i].Near[j]->infection == false) && (Layers[layer].LNodes[i].Near[j]->check_changed == false) && (Layers[layer].LNodes[i].Near[j]->active == true))
								{
									Layers[layer].LNodes[i].Near[j]->infection = true;//заражает соседа
									Layers[layer].LNodes[i].Near[j]->check_changed = true;//фиксация изменения состояния соседа
									for (int in = 0; in < Layers.size(); in++)
									{
										if (Layers[in].num == Layers[layer].LNodes[i].Near[j]->num_lay)
										{
											Layers[in].count_heal--;
											Layers[in].count_inf++;
										}
									}
									Layers[layer].LNodes[i].Near[j]->count_infection++;//счётчик заражений узла
								}
							}
						}
						if (Layers[layer].LNodes[i].time_to_recovery == rec_time - 1)//если пришло время восстановления
						{
							Layers[layer].LNodes[i].infection = false;//выздоравливает
							Layers[layer].LNodes[i].time_to_recovery = 0;//время до восстановления обнуляется
							Layers[layer].LNodes[i].check_changed = true;//фиксация изменения состояния узла
							Layers[layer].count_heal++;
							Layers[layer].count_inf--;
						}
						else//иначе
						{
							Layers[layer].LNodes[i].time_to_recovery++;//счётчик времени до восстановления 
						}
					}
				}
			}
			//восстановление флажка изменения по окончании распространения в итерации
			for (int j = 0; j < Layers.size(); j++)
			{
				for (int i = 0; i < Layers[j].LNodes.size(); i++)
				{
					Layers[j].LNodes[i].check_changed = false;
				}
			}
			Button14_Click(sender, e);
		}
	}





	private: System::Void PictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) //Информация об узле
	{
		if ((Layers.size()!=0)&&((radioButton10->Checked)||(radioButton11->Checked)||(radioButton12->Checked)))
		{
			int lay = 0;
			double minD = 100000;
			int point = -1;
			int layi=0;
			if (radioButton10->Checked)
				lay = 1;
			else if (radioButton11->Checked)
				lay = 2;
			else if (radioButton12->Checked)
				lay = 3;
			for (int i = 0; i < Layers.size(); i++)
			{
				if (Layers[i].num == lay)
				{
					layi = i;
				}
			}
			for (int i = 0; i < Layers[layi].LNodes.size(); i++)
			{
				if (d(e->X, e->Y, Layers[layi].LNodes[i].X, Layers[layi].LNodes[i].Y) < minD)
				{
					minD = d(e->X, e->Y, Layers[layi].LNodes[i].X, Layers[layi].LNodes[i].Y);
					point = i;
				}
			}
			if (Layers[layi].LNodes[point].active == true)
			{
				toolStripStatusLabel2->Text = "i - " + Convert::ToString(Layers[layi].LNodes[point].i);
				toolStripStatusLabel3->Text = "j - " + Convert::ToString(Layers[layi].LNodes[point].j);
				toolStripStatusLabel4->Text = "X - " + Convert::ToString(Layers[layi].LNodes[point].X);
				toolStripStatusLabel5->Text = "Y - " + Convert::ToString(Layers[layi].LNodes[point].Y);
				if (Layers[layi].LNodes[point].infection == true)
				{
					toolStripStatusLabel6->Text = "Состояние - заражён";
					toolStripStatusLabel7->Text = "Время до выздоровления - " + Convert::ToString(rec_time_l1 - Layers[layi].LNodes[point].time_to_recovery);
				}
				else
				{
					toolStripStatusLabel6->Text = "Состояние - здоров";
					toolStripStatusLabel7->Text = "Время до выздоровления - 0";
				}
				toolStripStatusLabel8->Text = "Счётчик заражений узла - " + Convert::ToString(Layers[layi].LNodes[point].count_infection);
			}
		}
	}



	private: System::Void TrackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) //Изменение интервала
	{
		timer1->Interval = trackBar1->Value;
		label5->Text = "Интервал:" + Convert::ToString(timer1->Interval);
	}



	private: System::Void Button6_Click(System::Object^ sender, System::EventArgs^ e) // Сохранение сети в файл
	{
		saveFileDialog1->ShowDialog();
		s_file = saveFileDialog1->FileName;
		try
		{
			auto fk = System::Text::Encoding::GetEncoding(1251);
			auto z = gcnew IO::StreamWriter(s_file, false, fk);
			z->Write(Convert::ToString(n) + "\r\n");
			z->Write(Convert::ToString(m) + "\r\n");
			z->Write(Convert::ToString(t_r) + "\r\n");
			z->Write(Convert::ToString(Layers.size()) + "\r\n");
			for (int layr = 0; layr < Layers.size(); layr++)
			{
				z->Write(Convert::ToString(Layers[layr].num) + "\r\n");
				z->Write(Convert::ToString(Layers[layr].typeL) + "\r\n");
				z->Write(Convert::ToString(Layers[layr].count_heal) + "\r\n");
				z->Write(Convert::ToString(Layers[layr].count_inf) + "\r\n");
				z->Write(Convert::ToString(Layers[layr].tor) + "\r\n");
				for (int i = 0; i < Layers[layr].LNodes.size(); i++)
				{
					z->Write(Convert::ToString(Layers[layr].LNodes[i].active) + "\r\n");
					z->Write(Convert::ToString(Layers[layr].LNodes[i].infection) + "\r\n");
					z->Write(Convert::ToString(Layers[layr].LNodes[i].check_changed) + "\r\n");
					z->Write(Convert::ToString(Layers[layr].LNodes[i].time_to_recovery) + "\r\n");
					z->Write(Convert::ToString(Layers[layr].LNodes[i].count_infection) + "\r\n");
				}
				for (int i = 0; i < Layers[layr].LEdges.size(); i++)
				{
					z->Write(Convert::ToString(Layers[layr].LEdges[i].active) + "\r\n");
				}
			}
			z->Close();
			MessageBox::Show("Запись успешна");
		}
		catch (Exception ^ E)
		{
			MessageBox::Show("Ошибка, возможно данный файл уже существует");
		}
	}



	private: System::Void Button7_Click(System::Object^ sender, System::EventArgs^ e) // Загрузка сети из файла
	{
		openFileDialog1->ShowDialog();
		s_file = openFileDialog1->FileName;
		try
		{
			chart1->Series["Здоровые"]->Points->Clear();
			chart1->Series["Заражённые"]->Points->Clear();
			chart2->Series["Здоровые(слой1)"]->Points->Clear();
			chart2->Series["Заражённые(слой1)"]->Points->Clear();
			chart2->Series["Здоровые(слой2)"]->Points->Clear();
			chart2->Series["Заражённые(слой2)"]->Points->Clear();
			chart2->Series["Здоровые(слой3)"]->Points->Clear();
			chart2->Series["Заражённые(слой3)"]->Points->Clear();
			chart3->Series["SIS"]->Points->Clear();
			System::Text::Encoding^ fk = System::Text::Encoding::GetEncoding(1251);
			IO::StreamReader^ R = gcnew IO::StreamReader(s_file, fk);
			int size = 0;
			n = Convert::ToInt16(R->ReadLine());
			m = Convert::ToInt16(R->ReadLine());
			t_r= Convert::ToInt16(R->ReadLine());
			size = Convert::ToInt16(R->ReadLine());
			Layers.clear();
			button8->Enabled = true;
			button14->Enabled = true;
			button15->Enabled = true;
			height = pictureBox1->Size.Height;
			width = pictureBox1->Size.Width;

			int prov;
			int layi = 0;
			for (int layr = 0; layr < size; layr++)
			{
				prov = Convert::ToInt16(R->ReadLine());
				Layers.push_back(Layer(n, m, height, width, Convert::ToInt16(R->ReadLine()), prov,false));
				for (int il = 0; il < Layers.size(); il++)
				{
					if (Layers[il].num == prov)
					{
						layi = il;
						if (Layers[il].num == 1)
						{
							button1->Enabled = false;
							radioButton10->Enabled = true;
						}
						else if (Layers[il].num == 2)
						{
							button10->Enabled = false;
							radioButton11->Enabled = true;
						}
						else if (Layers[il].num == 3)
						{
							button12->Enabled = false;
							radioButton12->Enabled = true;
						}
					}
				}
				Layers[layi].count_heal = Convert::ToInt16(R->ReadLine());
				Layers[layi].count_inf = Convert::ToInt16(R->ReadLine());
				Layers[layi].tor = Convert::ToBoolean(R->ReadLine());
				for (int i = 0; i < Layers[layi].LNodes.size(); i++)
				{
					Layers[layi].LNodes[i].active = Convert::ToBoolean(R->ReadLine());
					Layers[layi].LNodes[i].infection = Convert::ToBoolean(R->ReadLine());
					Layers[layi].LNodes[i].check_changed = Convert::ToBoolean(R->ReadLine());
					Layers[layi].LNodes[i].time_to_recovery = Convert::ToInt16(R->ReadLine());
					Layers[layi].LNodes[i].count_infection = Convert::ToInt16(R->ReadLine());
				}
				for (int i = 0; i < Layers[layi].LEdges.size(); i++)
				{
					Layers[layi].LEdges[i].active = Convert::ToBoolean(R->ReadLine());
				}
			}
			R->Close();
			Button14_Click(sender, e);
			MessageBox::Show("Загрузка успешна!");
		}
		catch (IO::FileNotFoundException ^ E)
		{
			MessageBox::Show(E->Message + "\n Ошибка при обработке файла");
		}
		catch (Exception ^ E)

		{
			MessageBox::Show("Ошибка");
		}

	}



	private: System::Void Button8_Click(System::Object^ sender, System::EventArgs^ e)//удаление слоёв
	{
		Layers.clear();
		c_heal = 0;
		c_inf = 0;
		button14->Enabled = false;
		button1->Enabled = true;
		button10->Enabled = true;
		button12->Enabled = true;
		button8->Enabled = false;
		radioButton10->Enabled = false;
		radioButton11->Enabled = false;
		radioButton12->Enabled = false;
		button15->Enabled = true;
		chart1->Series["Здоровые"]->Points->Clear();
		chart1->Series["Заражённые"]->Points->Clear();
		chart2->Series["Здоровые(слой1)"]->Points->Clear();
		chart2->Series["Заражённые(слой1)"]->Points->Clear();
		chart2->Series["Здоровые(слой2)"]->Points->Clear();
		chart2->Series["Заражённые(слой2)"]->Points->Clear();
		chart2->Series["Здоровые(слой3)"]->Points->Clear();
		chart2->Series["Заражённые(слой3)"]->Points->Clear();
		chart3->Series["SIS"]->Points->Clear();
		button2->Enabled = false;
		Image = gcnew Bitmap(height, width);
		graph = Graphics::FromImage(Image);
		this->pictureBox1->Image = Image;
	}


	private: System::Void Button14_Click(System::Object^ sender, System::EventArgs^ e) //отрисовка всех слоёв
	{
		button2->Enabled = true;
		c_heal = 0;
		c_inf = 0;
		Image = gcnew Bitmap(height, width);
		graph = Graphics::FromImage(Image);
		
		label2->Text = "Итерация:" + Convert::ToString(t_r);
		SolidBrush^ c1;
		SolidBrush^ c2;
		Pen^ skyBluePen;
		for (int j = 0; j < Layers.size(); j++)
		{
			if (Layers[j].num == 1)
			{
				if (checkBox3->Checked)
				{
					c1 = gcnew SolidBrush(Color::Yellow);
					c2 = gcnew SolidBrush(Color::Red);
					skyBluePen = gcnew Pen(Brushes::Yellow, 5);
					for (int i = 0; i < Layers[j].LEdges.size(); i++)
					{
						if (Layers[j].LEdges[i].active == true)
						{
							graph->DrawLine(skyBluePen, Layers[j].LEdges[i].f_node->X + 10, Layers[j].LEdges[i].f_node->Y + 10, Layers[j].LEdges[i].s_node->X + 10, Layers[j].LEdges[i].s_node->Y + 10);
						}
					}
					if (Layers[j].tor == true)
					{
						for (int i = 0; i < Layers[j].LNodes.size(); i++)
						{
							if (0 <= Layers[j].LNodes[i].i && Layers[j].LNodes[i].j == 0)
							{
								if (Layers[j].LNodes[i].active == true && Layers[j].LNodes[i + m - 1].active == true)
								{
									graph->DrawLine(skyBluePen, Layers[j].LNodes[i].X + 10, Layers[j].LNodes[i].Y + 10, 0, Layers[j].LNodes[i].Y + 10);
									graph->DrawLine(skyBluePen, Layers[j].LNodes[i + m - 1].X + 10, Layers[j].LNodes[i + m - 1].Y + 10, width, Layers[j].LNodes[i].Y + 10);
								}
							}
						}
						for (int i = 0; i < Layers[j].LNodes.size(); i++)
						{
							if (0 <= Layers[j].LNodes[i].j && Layers[j].LNodes[i].i == 0)
							{
								if (Layers[j].LNodes[i].active == true && Layers[j].LNodes[i + n * (m - 1)].active == true)
								{
									graph->DrawLine(skyBluePen, Layers[j].LNodes[i].X + 10, Layers[j].LNodes[i].Y + 10, Layers[j].LNodes[i].X + 10, 0);
									graph->DrawLine(skyBluePen, Layers[j].LNodes[i + n * (m - 1)].X + 10, Layers[j].LNodes[i + n * (m - 1)].Y + 10, Layers[j].LNodes[i + n * (m - 1)].X + 10, height);
								}
							}
						}
					}
					heb = gcnew System::Drawing::Font("Arial", 8);
					for (int i = 0; i < Layers[j].LNodes.size(); i++)//Отрисовка узлов
					{
						if (Layers[j].LNodes[i].active == true)
						{
							if (Layers[j].LNodes[i].infection == false)
							{
								graph->FillEllipse(c1, Layers[j].LNodes[i].X -	2.5, Layers[j].LNodes[i].Y - 2.5, 25, 25);
							}
							else
							{
								graph->FillEllipse(c2, Layers[j].LNodes[i].X - 2.5, Layers[j].LNodes[i].Y - 2.5, 25, 25);
							}
							if (checkBox2->Checked)
							{
								graph->DrawString("(" + Layers[j].LNodes[i].i + "," + Layers[j].LNodes[i].j + ")", heb, Brushes::Black, Layers[j].LNodes[i].X + 15, Layers[j].LNodes[i].Y + 15);
							}
						}
					}
					
				}
				chart2->Series["Заражённые(слой1)"]->Points->AddXY(t_r, Layers[j].count_inf);
				chart2->Series["Здоровые(слой1)"]->Points->AddXY(t_r, Layers[j].count_heal);
				label9->Text = "Инфецированы:" + Convert::ToString(Layers[j].count_inf);
				label10->Text = "Здоровы:" + Convert::ToString(Layers[j].count_heal);
				label11->Text = "Всего:" + Convert::ToString(Layers[j].count_heal + Layers[j].count_inf);
			}
		}
		for (int j = 0; j < Layers.size(); j++)
		{
			if (Layers[j].num == 2)
			{
				if (checkBox4->Checked)
				{
					c1 = gcnew SolidBrush(Color::Green);
					c2 = gcnew SolidBrush(Color::Blue);
					skyBluePen = gcnew Pen(Brushes::Green, 3);
					for (int i = 0; i < Layers[j].LEdges.size(); i++)
					{
						if (Layers[j].LEdges[i].active == true)
						{
							graph->DrawLine(skyBluePen, Layers[j].LEdges[i].f_node->X + 10, Layers[j].LEdges[i].f_node->Y + 10, Layers[j].LEdges[i].s_node->X + 10, Layers[j].LEdges[i].s_node->Y + 10);
						}
					}
					if (Layers[j].tor == true)
					{
						for (int i = 0; i < Layers[j].LNodes.size(); i++)
						{
							if (0 <= Layers[j].LNodes[i].i && Layers[j].LNodes[i].j == 0)
							{
								if (Layers[j].LNodes[i].active == true && Layers[j].LNodes[i + m - 1].active == true)
								{
									graph->DrawLine(skyBluePen, Layers[j].LNodes[i].X + 10, Layers[j].LNodes[i].Y + 10, 0, Layers[j].LNodes[i].Y + 10);
									graph->DrawLine(skyBluePen, Layers[j].LNodes[i + m - 1].X + 10, Layers[j].LNodes[i + m - 1].Y + 10, width, Layers[j].LNodes[i].Y + 10);
								}
							}
						}
						for (int i = 0; i < Layers[j].LNodes.size(); i++)
						{
							if (0 <= Layers[j].LNodes[i].j && Layers[j].LNodes[i].i == 0)
							{
								if (Layers[j].LNodes[i].active == true && Layers[j].LNodes[i + n * (m - 1)].active == true)
								{
									graph->DrawLine(skyBluePen, Layers[j].LNodes[i].X + 10, Layers[j].LNodes[i].Y + 10, Layers[j].LNodes[i].X + 10, 0);
									graph->DrawLine(skyBluePen, Layers[j].LNodes[i + n * (m - 1)].X + 10, Layers[j].LNodes[i + n * (m - 1)].Y + 10, Layers[j].LNodes[i + n * (m - 1)].X + 10, height);
								}
							}
						}
					}
					heb = gcnew System::Drawing::Font("Arial", 8);
					for (int i = 0; i < Layers[j].LNodes.size(); i++)//Отрисовка узлов
					{
						if (Layers[j].LNodes[i].active == true)
						{
							if (Layers[j].LNodes[i].infection == false)
							{
								graph->FillEllipse(c1, Layers[j].LNodes[i].X , Layers[j].LNodes[i].Y , 20, 20);
							}
							else
							{
								graph->FillEllipse(c2, Layers[j].LNodes[i].X , Layers[j].LNodes[i].Y , 20, 20);
							}
							if (checkBox2->Checked)
							{
								graph->DrawString("(" + Layers[j].LNodes[i].i + "," + Layers[j].LNodes[i].j + ")", heb, Brushes::Black, Layers[j].LNodes[i].X + 15, Layers[j].LNodes[i].Y + 15);
							}
						}
					}
					
				}
				chart2->Series["Заражённые(слой2)"]->Points->AddXY(t_r, Layers[j].count_inf);
				chart2->Series["Здоровые(слой2)"]->Points->AddXY(t_r, Layers[j].count_heal);
				label12->Text = "Инфецированы:" + Convert::ToString(Layers[j].count_inf);
				label13->Text = "Здоровы:" + Convert::ToString(Layers[j].count_heal);
				label14->Text = "Всего:" + Convert::ToString(Layers[j].count_heal + Layers[j].count_inf);
			}
		}
		for (int j = 0; j < Layers.size(); j++)
		{
			if (Layers[j].num == 3)
			{
				if (checkBox5->Checked)
				{
					c1 = gcnew SolidBrush(Color::Black);
					c2 = gcnew SolidBrush(Color::Purple);
					skyBluePen = gcnew Pen(Brushes::Black, 1);
					for (int i = 0; i < Layers[j].LEdges.size(); i++)
					{
						if (Layers[j].LEdges[i].active == true)
						{
							graph->DrawLine(skyBluePen, Layers[j].LEdges[i].f_node->X + 10, Layers[j].LEdges[i].f_node->Y + 10, Layers[j].LEdges[i].s_node->X + 10, Layers[j].LEdges[i].s_node->Y + 10);
						}
					}
					if (Layers[j].tor == true)
					{
						for (int i = 0; i < Layers[j].LNodes.size(); i++)
						{
							if (0 <= Layers[j].LNodes[i].i && Layers[j].LNodes[i].j == 0)
							{
								if (Layers[j].LNodes[i].active == true && Layers[j].LNodes[i + m - 1].active == true)
								{
									graph->DrawLine(skyBluePen, Layers[j].LNodes[i].X + 10, Layers[j].LNodes[i].Y + 10, 0, Layers[j].LNodes[i].Y + 10);
									graph->DrawLine(skyBluePen, Layers[j].LNodes[i + m - 1].X + 10, Layers[j].LNodes[i + m - 1].Y + 10, width, Layers[j].LNodes[i].Y + 10);
								}
							}
						}
						for (int i = 0; i < Layers[j].LNodes.size(); i++)
						{
							if (0 <= Layers[j].LNodes[i].j && Layers[j].LNodes[i].i == 0)
							{
								if (Layers[j].LNodes[i].active == true && Layers[j].LNodes[i + n * (m - 1)].active == true)
								{
									graph->DrawLine(skyBluePen, Layers[j].LNodes[i].X + 10, Layers[j].LNodes[i].Y + 10, Layers[j].LNodes[i].X + 10, 0);
									graph->DrawLine(skyBluePen, Layers[j].LNodes[i + n * (m - 1)].X + 10, Layers[j].LNodes[i + n * (m - 1)].Y + 10, Layers[j].LNodes[i + n * (m - 1)].X + 10, height);
								}
							}
						}
					}
					heb = gcnew System::Drawing::Font("Arial", 8);
					for (int i = 0; i < Layers[j].LNodes.size(); i++)//Отрисовка узлов
					{
						if (Layers[j].LNodes[i].active == true)
						{
							if (Layers[j].LNodes[i].infection == false)
							{
								graph->FillEllipse(c1, Layers[j].LNodes[i].X+5, Layers[j].LNodes[i].Y+5, 10, 10);
							}
							else
							{
								graph->FillEllipse(c2, Layers[j].LNodes[i].X+5, Layers[j].LNodes[i].Y+5, 10, 10);
							}
							if (checkBox2->Checked)
							{
								graph->DrawString("(" + Layers[j].LNodes[i].i + "," + Layers[j].LNodes[i].j + ")", heb, Brushes::Black, Layers[j].LNodes[i].X + 15, Layers[j].LNodes[i].Y + 15);
							}
						}
					}
					
				}
				chart2->Series["Заражённые(слой3)"]->Points->AddXY(t_r, Layers[j].count_inf);
				chart2->Series["Здоровые(слой3)"]->Points->AddXY(t_r, Layers[j].count_heal);
				label15->Text = "Инфецированы:" + Convert::ToString(Layers[j].count_inf);
				label16->Text = "Здоровы:" + Convert::ToString(Layers[j].count_heal);
				label17->Text = "Всего:" + Convert::ToString(Layers[j].count_heal + Layers[j].count_inf);
			}
			c_inf = c_inf + Layers[j].count_inf;
			c_heal = c_heal + Layers[j].count_heal;
		}
		this->pictureBox1->Image = Image;
		chart1->Series["Заражённые"]->Points->AddXY(t_r, c_inf);
		chart1->Series["Здоровые"]->Points->AddXY(t_r, c_heal);
		chart3->Series["SIS"]->Points->Clear();
		chart3->Series["SIS"]->Points->AddXY("Здоровые-" + Convert::ToString(c_heal), c_heal);
		chart3->Series["SIS"]->Points->AddXY("Заражённые-" + Convert::ToString(c_inf), c_inf);
	}



	private: System::Void Button10_Click(System::Object^ sender, System::EventArgs^ e) //построение второго слоя
	{
		button8->Enabled = true;
		button14->Enabled = true;
		n = Convert::ToInt32(textBox1->Text);
		m = Convert::ToInt32(textBox1->Text);
		height = pictureBox1->Size.Height;
		width = pictureBox1->Size.Width;
		if (radioButton4->Checked)
		{
			Layers.push_back(Layer(n, m, height, width, 0,2, checkBox6->Checked));
		}
		else if (radioButton5->Checked)
		{
			Layers.push_back(Layer(n, m, height, width, 1,2, checkBox6->Checked));
		}
		else if (radioButton14->Checked)
		{
			Layers.push_back(Layer(n, m, height, width, 2, 2, checkBox6->Checked));
		}
		button10->Enabled = false;
		radioButton11->Enabled = true;
		Button14_Click(sender, e);
	}



	private: System::Void Button12_Click(System::Object^ sender, System::EventArgs^ e) //построение третьего слоя
	{
		button8->Enabled = true;
		button14->Enabled = true;
		n = Convert::ToInt32(textBox1->Text);
		m = Convert::ToInt32(textBox1->Text);
		height = pictureBox1->Size.Height;
		width = pictureBox1->Size.Width;
		if (radioButton8->Checked)
		{
			Layers.push_back(Layer(n, m, height, width, 0,3, checkBox7->Checked));
		}
		else if (radioButton9->Checked)
		{
			Layers.push_back(Layer(n, m, height, width, 1,3, checkBox7->Checked));
		}
		else if (radioButton15->Checked)
		{
			Layers.push_back(Layer(n, m, height, width, 2, 3, checkBox7->Checked));
		}
		button12->Enabled = false;
		radioButton12->Enabled = true;
		Button14_Click(sender, e);
	}


	private: System::Void Button15_Click(System::Object^ sender, System::EventArgs^ e)//фиксация связей между слоями 
	{
		if ((button1->Enabled == false && button10->Enabled == false && button12->Enabled==true) || (button1->Enabled == false && button12->Enabled == false && button10->Enabled == true) || (button12->Enabled == false && button10->Enabled == false && button1->Enabled == true))
		{
			int l1 = 0;
			int l2 = 0;
			int a = 0, b = 0;
			if (button1->Enabled == false && button10->Enabled == false)
			{
				a = 1;
				b = 2;
			}
			else if (button1->Enabled == false && button12->Enabled == false)
			{
				a = 1;
				b = 3;
			}
			else if (button12->Enabled == false && button10->Enabled == false)
			{
				a = 3;
				b = 2;
			}
			for (int i = 0; i < Layers.size(); i++)
			{
				if (Layers[i].num == a)
					l1 = i;
				else if (Layers[i].num == b)
					l2 = i;
			}
			for (int i = 0; i < Layers[l1].LNodes.size(); i++)
			{
				for (int j = 0; j < Layers[l2].LNodes.size(); j++)
				{
					if ((Layers[l1].LNodes[i].X == Layers[l2].LNodes[j].X) && (Layers[l1].LNodes[i].Y == Layers[l2].LNodes[j].Y))
					{
						Layers[l1].LNodes[i].Near.push_back(&Layers[l2].LNodes[j]);
						Layers[l2].LNodes[j].Near.push_back(&Layers[l1].LNodes[i]);
					}
				}
			}
			button15->Enabled = false;
		}
		else if (button1->Enabled == false && button10->Enabled == false && button12->Enabled == false)
		{
			int l1 = 0;
			int l2 = 0;
			for (int i = 0; i < Layers.size(); i++)
			{
				if (Layers[i].num == 1)
					l1 = i;
				else if (Layers[i].num == 2)
					l2 = i;
			}
			for (int i = 0; i < Layers[l1].LNodes.size(); i++)
			{
				for (int j = 0; j < Layers[l2].LNodes.size(); j++)
				{
					if ((Layers[l1].LNodes[i].X == Layers[l2].LNodes[j].X) && (Layers[l1].LNodes[i].Y == Layers[l2].LNodes[j].Y))
					{
						Layers[l1].LNodes[i].Near.push_back(&Layers[l2].LNodes[j]);
						Layers[l2].LNodes[j].Near.push_back(&Layers[l1].LNodes[i]);
					}
				}
			}
			for (int i = 0; i < Layers.size(); i++)
			{
				if (Layers[i].num == 3)
					l1 = i;
				else if (Layers[i].num == 2)
					l2 = i;
			}
			for (int i = 0; i < Layers[l1].LNodes.size(); i++)
			{
				for (int j = 0; j < Layers[l2].LNodes.size(); j++)
				{
					if ((Layers[l1].LNodes[i].X == Layers[l2].LNodes[j].X) && (Layers[l1].LNodes[i].Y == Layers[l2].LNodes[j].Y))
					{
						Layers[l1].LNodes[i].Near.push_back(&Layers[l2].LNodes[j]);
						Layers[l2].LNodes[j].Near.push_back(&Layers[l1].LNodes[i]);
					}
				}
			}
			button15->Enabled = false;
			MessageBox::Show("Связи зафиксированы! (1-2-3)");
		}
	}



	private: System::Void Chart4_Click(System::Object^ sender, System::EventArgs^ e)//изменение графика
	{
		if (chart4->Series["Здоровые"]->ChartType != System::Windows::Forms::DataVisualization::Charting::SeriesChartType::StackedArea)
		{
			chart4->Series["Здоровые"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::StackedArea;
			chart4->Series["Заражённые"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::StackedArea;
		}
		else
		{
			chart4->Series["Здоровые"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::StackedColumn;
			chart4->Series["Заражённые"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::StackedColumn;
		}
	}



	private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e)//очистка сессии
	{
		for (int i = 0; i < Layers.size(); i++)
		{
			for (int j = 0; j < Layers[i].LNodes.size(); j++)
			{
				Layers[i].LNodes[j].infection = false;
				Layers[i].LNodes[j].check_changed = false;
				Layers[i].LNodes[j].count_infection = 0;
				Layers[i].LNodes[j].time_to_recovery = 0;
			}
			Layers[i].count_heal += Layers[i].count_inf;
			Layers[i].count_inf = 0;
		}
		c_heal += c_inf;
		c_inf = 0;
		t_r = 0;
		chart1->Series["Здоровые"]->Points->Clear();
		chart1->Series["Заражённые"]->Points->Clear();
		chart2->Series["Здоровые(слой1)"]->Points->Clear();
		chart2->Series["Заражённые(слой1)"]->Points->Clear();
		chart2->Series["Здоровые(слой2)"]->Points->Clear();
		chart2->Series["Заражённые(слой2)"]->Points->Clear();
		chart2->Series["Здоровые(слой3)"]->Points->Clear();
		chart2->Series["Заражённые(слой3)"]->Points->Clear();
		chart3->Series["SIS"]->Points->Clear();
		Button14_Click(sender, e);
	}
};



	double d(int x, int y, int x1, int y1)//Функция вычисления расстояния
	{
		return sqrt(((x - x1) * (x - x1)) + ((y - y1) * (y - y1)));
	}

	bool found_of_edge(Node& a, Node& b, int lays)
	{
		for (int i = 0; i < Layers[lays].LEdges.size(); i++)
		{
			if ((Layers[lays].LEdges[i].f_node == &a && Layers[lays].LEdges[i].s_node == &b) || (Layers[lays].LEdges[i].f_node == &b && Layers[lays].LEdges[i].s_node == &a))
			{
				if (Layers[lays].LEdges[i].active == true)
				{
					return true;
				}
			}
		}
		return false;
	}


}
