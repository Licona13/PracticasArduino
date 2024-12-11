En esta practica se controlara el encendido de leds en diferentes direcciones: arriba, abajo, izquierda y derecha, utilizando un Joystick. 
Ademas los leds tambien encenderan cuando el joystick esté entre dos direcciones 

## Material que se va a utilizar:
1. Arduino 
2. Joystick analógico
3. 4 LEDs
4. resistencias
5. 6 jumpers macho-macho
6. 4 jumpers hembra-macho
7. Protoboard

## Diagrama de conexión
![Joystick diagrama](https://github.com/user-attachments/assets/e070aa07-6c5d-405b-81be-fa97c6153395)

## Código: 
**'joystick.ino'**


## Funcionamiento:
Moviendo el joystick hacia los lados: Cuando se apunta el joystick hacia alguno de los leds este led enciende.
Joystick apuntando en un punto intermedio: Encienden los dos leds cercanos a donde se apunta.
Joystick estatico: Si no se mueve el joystick ningún led debería encender.

