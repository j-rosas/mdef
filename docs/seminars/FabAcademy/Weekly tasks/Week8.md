---
hide:
    - toc
---

##### Week 8

Embedded Programming

Use your programmer (HUZZAH32, ESP32 Feather) to program a circuit with a “led and a bottom” to do something
The circuit board, could be done as a shield, breadboard or vinyl cutter


#### Programing a 6 knob controller.

For this Challenge, I manage to design a 6 knob controller, to use it with Pure Data, an open software to create music and sound with defined parameters.

The first step was to connect a potenciometer to arduino, It is actually simple, because its only necesary to plug the potenciometer to the 3v, a specific pin, and the ground.

To see how the potenciometer works, the arduino was connected to grasshopper, with the firefly plugin, to controll arduino

![](../images/W82.png)

The file of arduino is from the library of arduino examples

![](../images/W81.png)

Then, to connect arduino to puredata, is necesary to design the puredata modules, open the port and set values to start transforming values into sound.

![](../images/W83.png)


After that, It was necessary to replicate the ports and splitting them by spaces, the Analog reads are the six ports that arduino have avalaible. The values that the sensor shows, are from 0 to 1500 aprox.


![](../images/W84.png)

 Then the job is to connect the other 6 potenciometers to the breadboard and set all the values in pure data.


![](../images/W88.png)


Observations.

When the potentiometers are connected to the breadboard, they have some latching in the process, os for the next iteration its necesary to sold the pins and make a shiel board to have that more controlled. 

Another interesting thing is that the potenciometers can be used as controllers for almost everything, so we will use them for next interventions and projects.





