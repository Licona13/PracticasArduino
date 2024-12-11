## Material que se va a utilizar:
1. Placa Arduino
2. Protoboard
3. Cables jumpers 
4. Sensor ultrasónico
5. 8 LEDS
6. Resistencias 
7. Pantalla lcd
   
## Diagrama de conexión
Sensor ultrasónico:

VCC a 5V del Arduino.
GND a GND del Arduino.
Trig a pin 10 del Arduino.
Echo a pin 11 del Arduino.
LEDs:

Conecta cada LED a los pines 3, 4, 5, 6, 7 y 8 del Arduino.
Conecta una resistencia (220 ohm) en serie con cada LED.
Los LEDs deben tener la pata negativa conectada a GND.
LCD I2C:

VCC a 5V del Arduino.
GND a GND del Arduino.
SDA a A4.
SCL a A5.


## Funcionamiento:

El sensor ultrasónico envía una señal de ultrasonido (pin trig) y mide el tiempo que tarda en regresar al pin eco.
Con este tiempo se calcula la distancia en centímetros mediante la fórmula distancia = duracion / 58.2.

La distancia medida se muestra en una pantalla LCD de 16x2 con la ayuda de la librería LiquidCrystal_I2C.

El código tiene 6 rangos de distancia, y en función de la distancia medida, se encienden diferentes combinaciones de LEDs:
Distancia ≤ 5 cm: Enciende todos los LEDS.
5 cm < Distancia ≤ 15 cm: Enciende leds3 a led7.
15 cm < Distancia ≤ 25 cm: Enciende leds3 a led6.
25 cm < Distancia ≤ 35 cm: Enciende leds3 a led5.
35 cm < Distancia ≤ 45 cm: Enciende leds3 y led4.
45 cm < Distancia ≤ 50 cm: Solo enciende led3.


Los LEDs se encienden durante 1 segundo después de cada medición de distancia y se apagan al finalizar ese tiempo.
