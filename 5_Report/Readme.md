
## Introduction
The heat control system is basically used to control the temperature of a car seat. When a user or driver of the car gets seated on a car, the button sensor gets activated. After that, the user gets access to turn on the heater. The temperature sensor keeps monitoring the temperature and sends the analog value to the microcontroller. The microcontroller processes the analog input of the temperature sensor and outputs a temperature value through serial communication. All the activities of the control system are done on a microcontroller called Atmega328.
In the places where snow falls or temperature is less,that is around zero degree centigrade, people feel comfort if the car seats are warm while travelling.
In this project Microcontroller ATMega 328 is used to control seat temperature.
Program is designed like Heater starts operation only if person is sitting on seat and heater switch is closed.
When both above conditions are true Temperature sensor starts sensing tempraure of seat.
If seat temperature is more than 25 deg centigrade,there will be no supply to heater because seat is warm enough.
If temperature is less than 25 deg PWM output drives the heater driver circuit.
PWM output and temperature values are inversely proportional i,e lesser the temperature more value of PWM signal will drive the heater.
For different range of temperature values different PWM value signal is generated.
When temperature rises above 25 deg,PWM signal will be 0(low).
All this opeartion is automatic and also temperature range is transmitted to serial output.

## Functionality
When the two switches are closed, the first LED glows indicating the actuation of the system and the heater.
Next the analog input from the temperature sensor is received and digitized.
The digitized temperature input is visualized using Pulse Width Modulation.
The corresponding temperature values based on the digitized temperature input is transmitted by the UART protocol. Here the data is displayed on the serial monitor.

## SWOT Analysis

### Strength
Cost Advantage.
It can prevent from fire accidents
### Threats
Advanced featured fire alram systems are already in the market.
Decreasing Market Demand

## 4W's and 1H

### Why
To reduce the fire accidents in House and Industries.
It can be used at one place.
### Where 
This can be used in our Houses.
We can use it in the Banks, Industies, Shopping Malls etc.
### Who
Can be used as a reference for advanced Fire alarm systems.
### When
When fire accidents is going to occur these alarm systems can be used.
This project is used to prevent people from fire accidents.
### How
It sense the fire and gives an alarm sound as an output.
It will be helpful in preventing fire accidents in any places.

## Detail Requirements

### High Level Requirements
| ID   |       Description           |  Status |
|-------------|:------------------:|---------------:|
| HLR_1 |  Microcontroller  | Implemented |
| HLR_2 |  Buzzer | Implemented |
| HLR_3 |  Resistor | Implemented |
| HLR_4 |  Capacitor  | Implemented |
| HLR_5 |  Button  | Implemented |
| HLR_6 |  AVR-ISP PROGRAMMER | Implemented |

### Low Level Requirements
| ID   |       Description           |  Status |
|-------------|:------------------:|---------------:|
| LLR_1 | ATmega328P   | Implemented |
| LLR_2 | Servo motor(sg90)  | Implemented |
| LLR_3 | 10KΩ resistor  | Implemented |
| LLR_4 | 1KΩ resistor   | Implemented |
| LLR_5 | 220Ω resistor | Implemented |
| LLR_6 | 100nF capacitor  | Implemented |
| LLR_7 | AVR-ISP PROGRAMMER  | Implemented |
| LLR_8 | Buzzer | Implemented |
| LLR_9 | Button | Implemented |
