---
hide:
    - toc
---

##### Week 15

**Interface Application** 

Code/program an interface with the tools provided during the ( processing,P5JS, MitAppInventor,Aframe,NodeRed) or other alternatives software that interfaces a user with an input and/or output device that you want to use.

Interpret and implement design and programming protocols to create a Graphic User Interface (GUI).

Pure Data protocol+ Arduino 6 knob controller.


For the controller, the arduino file is quite simple. it connects to analog pins and makes the possibility of using it very wide.
the code is repeated 6 times to have all six potentiometers working. Also it is open to be used with other sensors and different inputs.

![](../images/WT15_01.PNG)

Pure data is an open source program for designing sound and music, it works with nodes so it is easy to start working with it. there is also a big community that upload tutorials and different lessons to learn to use it.

It has also the possibility to connect it to arduino using a shared port.

For opening the port, there has to be a connection between the nodes, then just a simple click on the "open" and the software is communicating with the board.

then the unpack node and the "f" nodes are for dividing the inputs. that are on the same order that in arduino.

![](../images/WT15_02.PNG)

The board has 6 potentiometers connected to voltage, ground, and all 6 analog  pins of the board.

![](../images/WT15_03.JPG)
![](../images/WT15_04.JPG)

Then to use the board it is necessary to have the port open, and just start playing with the knobs.

![](../images/WT15_05.PNG)