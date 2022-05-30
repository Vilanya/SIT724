# SIT723 - Project Handover

This document outlines the steps to be taken to recreate this project, including explanations on the experiments to be conducted and the testing procedures.

****

**Artefact Setup**

Requirements: 
- N95 Disposable Face Mask
- Arduino UNO
- Temperature sensor
- Steam(Humidity) sensor
- Jumper wires
- Breadboard

Connect the sensors to the Arduino UNO. Make small slits on the mask and pass the sensors through it, attaching them to the inside of the mask. Ensure that the slits are not too big, in order to avoid leakage issues.

**Experiment**

The *project* folder contains the .ino file that is to be uploaded onto the microprocessor (ensure that the pin numbers in the code match the pins on your setup). Once it is uploaded, the mask can be left on a table for 60 seconds, worn for the next 180 seconds and taken off for the last 60 seconds of the experiment. 

In order to test the device, the experiments can be repeated in different environmental and physical conditions to determine the accuracy of measurements. Repeating the same experiment multiple times and using the mean values will provide more accurate readings.It also helps to graphically visualize the data. 
