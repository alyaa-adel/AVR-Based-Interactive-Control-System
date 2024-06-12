# AVR-Based-Interactive-Control-System
In this project, we are developing an AVR-based interactive control system that integrates button inputs with LED outputs and a 7-segment display to create an engaging and functional user interface
 The primary objectives of this project include:

GPIO Configuration for Button Inputs: Two GPIO pins will be configured as input pins connected to buttons. These inputs will be used to trigger specific actions within the system, making it interactive and responsive to user input.

Activation of Internal Pull-Up Resistors: To ensure stable and reliable button inputs, the internal pull-up resistors of the input pins will be activated. This eliminates the need for external resistors and simplifies the hardware setup.

LED Output Configuration: An entire GPIO port will be designated as an output port, connected to LEDs. This allows for the creation of dynamic LED patterns that respond to user inputs, providing visual feedback and enhancing the user experience.

7-Segment Display Output Configuration: Another GPIO port will be configured as an output port to control a 7-segment display. This display will be used to show numerical data, making the system more informative and user-friendly.

Button-Triggered Actions:

When the first button is pressed, the system will rotate a single ON LED across the output port, creating an interesting visual pattern.
When the second button is pressed, the system will increment the number displayed on the 7-segment display, providing a clear and immediate numerical output.
By integrating these components and functionalities, the project aims to demonstrate the practical application of AVR microcontrollers in creating interactive and visually engaging control systems.
