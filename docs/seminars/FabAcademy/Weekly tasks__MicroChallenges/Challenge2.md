---
hide:
    - toc
---

#### Micro Challenge 2

**Kinnect and grasshopper**

In combining and navigating our interests, we saw intersections in our interests, mainly themes of immersive and interactiveness, explorative education, engaging experiences and provocative products.

After understanding our collective themes, we asked ourselves: how can we create an artifact that collects and presents data, using movement to answer provocative questions centered around MDEF journey and our collective consciousness?

We wanted to find a way of summarizing the topics we discussed and learned about in this second term at MDEF and find a way of generating resposnes from people who are outside of MDEF, during Design Dialogues. These are the questions:


Purpose

![](../images/MC02_02.png)

![](../images/MC02_01.png)

What should the Artifact do:
- Connect to Kinect, Grasshopper, Firefly to recognise body movement and gestures via skeleton tracker

- Through Grasshopper and Firefly, determine lines and points as nodes on the body that the Kinect has sensed to connect to a servo Motor

- Control a servo Motor and its parameters on Grasshopper/ Firefly, using Arduino sketches and Uno Write component, use arm gestures to control the motors movement

- Servo Motor should successfully move a pen and move according to the gestures sensed through the kinect.

- Control a DC and its parameters on Grasshopper/ Firefly, using Arduino sketches and Uno Write components. This motor should rotate a disk while the servo inscribes the drawing according to the gestures.

- A series of questions should be listed, where the observer answers based on their arm gestures.

What should the Artifact not do:
- The motors should move at the correct speed, not to fast or too slow
- The questions/ prompts, the movement of the DC Motor should not be out of sinc. We calibrated each component to be in a 40 second window where each question should be answered in a 5 second window.

Execution

![](../images/MC02_10.JPG)
![](../images/MC02_08.png)

CNC

We used the CNC milling machine to create the structure for our design. Since we didn’t want to waste material by making avoidable mistakes, we initially prototyped the base using cardboard.

3D SCANNING

We used the Kinect to be able to detect the motion of the participants because we wanted the project to be interactive. Grasshopper was the program we used to make the movements control the servo. Later, we also combined more electronic components in Grasshopper, such as the button, spinning DC motor and potentiometer.

ELECTRONICS DESIGN

We used Arduino UNO and bread boards with servos, motors, buttons and potentiometer to be able to control the rotation of the panel and movements of the pen in relation to the Kinect.

EMBEDDED PROGRAMMING

We used Arduino to design the electronics: turning on the motor with a button and regulating the speed. Then, we ended up finalizing everything in Grasshopper so that we could have a unique file with both Kinect and electronic components.

3D MODELING

The joint between the motor and the cardboard “wheel” was modeled in Fusion, imported to Cura and printed using the fab lab ender-3 printer.

LASER CUTTING

The handle meant to hold the servo and pen was designed in Fusion, then laser cut using an acrylic scrap sheet.

![](../images/MC02_03.jpeg)
![](../images/MC02_04.jpeg)
![](../images/MC02_05.jpeg)
![](../images/MC02_06.png)
![](../images/MC02_07.png)
![](../images/MC02_08.png)
![](../images/MC02_09.JPG)






