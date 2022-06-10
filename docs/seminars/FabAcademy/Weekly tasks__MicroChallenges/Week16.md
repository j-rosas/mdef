---
hide:
    - toc
---

##### Week 16

**Wildcard week**

For this week, I used the cooper tape panel that we used for challenge 2. this time the board will be used by the Robot ABB 140, to create music by programming the movement of the robot through the board.



The first step was to fabricate the tool that the robot will handle. In this case, the tool is a pen that is commonly used for smartphones due to its conductivity, the handle to the robot was already designed by FabLab, and also the string system, The nessesary thing was to print them to make adjustments.

![](../images/WT16_03.JPG)

Related to the music, I used the same program in puredata, where the music was controlled by the touch sensors of the Esp32 feather, and knobs to controll manually volume and other parameter.

Also for making different kind of music, I used Ableton live connected to playtronica, to make some midi samples sound.

Then thanks to Edu, we calibrate the robotic location point with the tool installed, so the robot would recognize the size of the tool. All that was made with the controller of the robot, that can be operated manually. It is a complex process that needs a lot of pacience and practice, to learn the steps, the multiple axis, and to know how the robot works

![](../images/WT16_08.JPG)
![](../images/WT16_04.JPG)
![](../images/WT16_05.JPG)



In the computer, we used the program that it was allready configured to use the robot, we had to install the surface in a foam to avoid breaks or errors, and then catch the four points of the board, all in cordenates that were defined by the tip position of the tool.

![](../images/WT16_01.png)

Having the surface ready, we drew a path that for the robot to follow with the tool and "play music", 

The important thing to understand is that the robot follows planes, as coordinates, not lines or points. So the interesting thing of the visualization in grasshopper, permits to see if there are some rotated planes or other errors.

![](../images/WT16_06.png)
![](../images/WT16_07.JPG)

With the file ready, we loaded the program on the controller, and we ran line by line with a super slow speed, to check if averything was ok, after the first trial, it ran well. 

![](../images/WT16_02.JPG)
![](../images/WT16_09.JPG)

For this ocasion the music and the path were random, but for a next Iteration i will chose some meaningful paths and some better sounds to go through.


