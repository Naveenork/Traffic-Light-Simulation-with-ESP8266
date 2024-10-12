# Traffic-Light-Simulation-with-ESP8266
This project simulates a traffic light using an Arduino. It controls three LEDs: red, yellow, and green, representing the different states of a traffic light. The LEDs are turned on and off sequentially with a delay between each state.
Components


1 x Arduino board (e.g., Arduino Uno)
1 x Red LED (connected to pin D2)
1 x Yellow LED (connected to pin D3)
1 x Green LED (connected to pin D4)
3 x 220Ω resistors (one for each LED)
Breadboard and jumper wires


Circuit Diagram
Connect the red LED anode (long leg) to pin D2 through a 220Ω resistor, and the cathode (short leg) to GND.
Connect the yellow LED anode (long leg) to pin D3 through a 220Ω resistor, and the cathode (short leg) to GND.
Connect the green LED anode (long leg) to pin D4 through a 220Ω resistor, and the cathode (short leg) to GND.
Code Explanation




int gl = D4;  // Green LED is connected to digital pin D4
int yl = D3;  // Yellow LED is connected to digital pin D3
int rl = D2;  // Red LED is connected to digital pin D2

int digitalwrite = 100;  // Delay time in milliseconds between each LED state

void setup() {
  // Initialize the LED pins as outputs
  pinMode(gl, OUTPUT);
  pinMode(yl, OUTPUT);
  pinMode(rl, OUTPUT);
}

void loop() {
  // Turn on the red LED and wait for the specified delay time
  digitalWrite(rl, HIGH);
  delay(digitalwrite);
  digitalWrite(rl, LOW);
  delay(digitalwrite);

  // Turn on the yellow LED and wait for the specified delay time
  digitalWrite(yl, HIGH);
  delay(digitalwrite);
  digitalWrite(yl, LOW);
  delay(digitalwrite);

  // Turn on the green LED and wait for the specified delay time
  digitalWrite(gl, HIGH);
  delay(digitalwrite);
  digitalWrite(gl, LOW);
  delay(digitalwrite);
}



How to Use
Copy the code into the Arduino IDE.
Upload the code to your Arduino board.
Connect the LEDs and resistors as described in the circuit diagram.
The LEDs will light up sequentially, simulating a traffic light.
Customization
To adjust the time each LED stays on, change the value of digitalwrite to your desired delay in milliseconds.
For example, setting digitalwrite = 1000 will keep each LED on for 1 second before switching to the next.


License
This project is open-source and available for personal and educational use.
