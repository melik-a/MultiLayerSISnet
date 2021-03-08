# MultiLayerSISnet
Program implements creation of a multi-layer network and allows to emulate the epidemiological SIS model.

*This was my first relatively large project, so the code style and code quality are poor here =)*
* * *

## About
This was my course work project on 2019.  
___Course work task: Implement a multi-layer network with an epidemic SIS model.___  
Implementation: The task was performed using C++/CLI technology in the Visual Studio 2019 development environment.
## Net
The program allows you to create a multi-layer network.  
The maximum number of layers is 3. To create a layer, enter the network dimension in the corresponding field of the interface,  
select the parameters for a particular layer (Figure 1), and then click the "Build"button.

Figure 1 - Program interface

The program has 3 types of communication between nodes (Figure 2), each type is available for selection on all layers.

Figure 2 - From left to right: first, second, and third

Also, for each layer, there is a torus flag, which is designed to connect the extreme nodes to each other (Figure 3).


Figure 3 - Torus

In addition, for each layer, the "Display (multi-layer rendering" check box is located in the fields of each layer, depending on the state of the check box, a particular layer will or will not be displayed during multi-layer rendering.
The "Node indexes" checkbox applies to all layers. When enabled, their indexes will be drawn along with the network nodes (Figure 4).


Figure 4 - Network with indexes

Using the "Draw Layers" button, the user can see what a multi-layer network looks like, of course, if more than one layer is created (Figure 5).


Figure 5 - Multi-layer network

You can use the "Remove all Layers" button to remove all layers of a multi-layer network.
The "Save network to file" and "Load network from file" buttons, respectively, allow you to save and load the network.








## SIS.
The program allows you to model the epidemiological SIS model. To do this, the SIS tab contains fields for entering the propagation probabilities and recovery time for each layer,
as well as the probability of infection between layers (Figure 6).



.



