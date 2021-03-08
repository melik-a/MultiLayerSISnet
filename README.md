# MultiLayerSISnet
Program implements creation of a multi-layer network and allows to emulate the epidemiological SIS model.

*This was my first relatively large project, so the code style and code quality are poor here =)*
* * *

## About
This was my course work project on 2019.  
___Course work task: Implement a multi-layer network with an epidemic SIS model.___  
Implementation: The task was performed using C++/CLI technology in the Visual Studio 2019 development environment.

![View](/img/View.png "view")

## Net.
The program allows you to create a multi-layer network.  
The maximum number of layers is 3. To create a layer, enter the network dimension in the corresponding field of the interface,  
select the parameters for a particular layer (Figure 1), and then click the "Build" button.

![Figure 1](/img/Figure_1.png "Program interface")  
*Figure 1 - Program interface*

The program has 3 types of communication between nodes (Figure 2), each type is available for selection on all layers.

![Figure 2](/img/Figure_2.png "From left to right: first, second, and third")  
*Figure 2 - From left to right: first, second, and third*

Also, for each layer, there is a torus flag, which is designed to connect the extreme nodes to each other (Figure 3).

![Figure 3](/img/Figure_3.png "Torus")  
*Figure 3 - Torus*

In addition, for each layer, the "Display (multi-layer rendering" check box is located in the fields of each layer, depending on the state of the check box, a particular layer will or will not be displayed during multi-layer rendering.
The "Node indexes" checkbox applies to all layers. When enabled, their indexes will be drawn along with the network nodes (Figure 4).

![Figure 4](/img/Figure_4.png "Network with indexes")  
*Figure 4 - Network with indexes*

Using the "Draw Layers" button, the user can see what a multi-layer network looks like, of course, if more than one layer is created (Figure 5).

![Figure 5](/img/Figure_5.png "Multi-layer network")  
*Figure 5 - Multi-layer network*

You can use the "Remove all Layers" button to remove all layers of a multi-layer network.
The "Save network to file" and "Load network from file" buttons, respectively, allow you to save and load the network.

## SIS.
The program allows you to model the epidemiological SIS model. To do this, the SIS tab contains fields for entering the propagation probabilities and recovery time for each layer,
as well as the probability of infection between layers (Figure 6).

![Figure 6](/img/Figure_6.png "SIS tab")  
*Figure 6 - SIS tab*

The "Fix links between layers" button is used to link the layers if the user needs it, otherwise the infection will spread separately on each layer.
To manipulate the network, you need to select a particular layer in the appropriate field, then select what you want to do with the network (infect a node, delete a node, delete an edge). After that, the user points the pointer at a particular part of the network to change it (Figure 7). When you hover over the network, information about the node that is closest to the pointer appears at the bottom of the window.

![Figure 7](/img/Figure_7.png "Example of network modification")  
*Figure 7 - Example of network modification*

After the network is modified and the sources of infection are established, you can start modeling. This is done using the "Spread" button, which starts the simulation process (Figure 8). The user can change the network rendering interval during the simulation by using the slider on the form. The iterations are displayed in the lower-left corner.

![Figure 8](/img/Figure_8.png "Distribution")  
*Figure 8 - Distribution*

Using the "Clear Session" button, the user can reset the states of all nodes.

## Statistics.
Statistics for each layer and for the entire network are displayed on the corresponding tabs of the program.

![Figure 9](/img/Figure_9.png "Statistics by layer")  
*Figure 9 - Statistics by layer*

![Figure 10](/img/Figure_10.png "Network statistics")  
*Figure 10 - Network statistics*

![Figure 11](/img/Figure_11.png "Percentage of network infection")  
*Figure 11 - Percentage of network infection*
