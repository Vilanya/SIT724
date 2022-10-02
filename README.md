# SIT724 - Project Handover

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

The *Code* folder contains the .ino file that is to be uploaded onto the microprocessor (ensure that the pin numbers in the code match the pins on your setup). Once it is uploaded, for EXPERIMENT #1, the mask can be left on a table for 60 seconds, worn for the next 180 seconds and taken off for the last 60 seconds of the experiment. For EXPERIMENT #2, the mask can be worn and taken off to see how the program picks up the change in status. 

In order to test the device, the experiments can be repeated in different environmental and physical conditions to determine the accuracy of measurements. Repeating the same experiment multiple times and using the mean values will provide more accurate readings.It also helps to graphically visualize the data. The folder *Graphs* shows the visualisations of collected data from EXPERIMENT #1 and the response times from EXPERIMENT #2. Data sets from these previous experiments performed can be found in the _Datasets_ folder, along with an Excel workbook containing visualisations. These can be used to get an understanding on some outputs that this experiment can give.
