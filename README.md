# FrostByte
FrostByte is a temperature in-vehicle monitoring system built on the ATmega328 microcontroller, designed to enhance cabin awareness through smart sensor integration. A button sensor first detects driver or passenger presence; only then does the temperature sensor activate, feeding analog data to the 10-bit ADC. The resulting value drives a PWM output that reflects temperature intensity. An LED indicates when both sensors are active, and all key data—occupancy, temperature, ADC output, and PWM duty cycle—is transmitted via UART for external monitoring. This event-driven design ensures efficient operation, making FrostByte a practical solution for intelligent automotive systems.

WHEN ON

![144048994-df05f206-2faf-4938-8f25-c9408d269504](https://user-images.githubusercontent.com/94304445/144354137-1ee5c13f-9efd-4397-904d-c6557ec21c1f.gif)

WHEN OFF

![144052026-a2a471fd-1edf-4e68-9775-a8bd643d3230](https://user-images.githubusercontent.com/94304445/144354221-a19b1b82-b901-48d6-8816-e6bb0f784c57.png)

|Folder|Description|
|-------------|:---------------:|
|1_Requirements|	Documents detailing requirements and research|
|2_Design|	Documents specifying design details|
|3_Implementation|	All code and documentation|
|4_Test_plan|	Documents with test plans and procedures|
|5_Report|	Documentation of whole project|
|6_Images|	All the output images of this project|
