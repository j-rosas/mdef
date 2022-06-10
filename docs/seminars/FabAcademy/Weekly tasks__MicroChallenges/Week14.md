---
hide:
    - toc
---

Week 14 - Networking and Communications

Send a message between two microcontrollers (boards/ esp32 feathers or boards you made). The task could be done by pairs.

Communication can be done by cable or wireless

**Communicating two Arduino esp32 feather via Wifi**


We have found this tutorial to make the connection of the two feathers via wifi, with different type of sensors. since is the first time that we work with networking and com, we will simplify the task to make the connection, send and recive info from one to another with text.

https://randomnerdtutorials.com/esp32-client-server-wi-fi/


https://www.youtube.com/watch?time_continue=175&v=2z7Ow4PjJRc&feature=emb_logo


![](../images/WT14_01.JPG)

Setting the Boards

The connection is vía wifi, so here we are using only the breadboard to have certain order, and know wich board is wich. Also i tried to add an analog 
 input like a potentiometer, but in this first attempt,it didn´t work. 

![](../images/WT14_09.JPG)


Codes:

The codes used where a simplification of the one that was on the tutorial, adding the text writing list.

There is a code for a Server, the one that send the wifi signal and IP, and the client, that connects to the sender. Also is possible to connect to the sender via wifi of the phone, adding the IP requested.

![](../images/WT14_02.PNG)

![](../images/WT14_03.PNG)

![](../images/WT14_06.JPG)

Sometimes is necessary to reset manually the arduino feather board to upload the code correctly.

![](../images/WT14_07.PNG)

![](../images/WT14_08.PNG)


Also is possible to connect via wifi from the cellphone entering the IP +  hello, enabling the phone to read that info. It can be a easy and local way to send messages.

After uploading the Client code, the Arduino connects automatically to the server, and it reads the signal with the message.

![](../images/WT14_05.PNG)




