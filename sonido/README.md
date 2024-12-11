En esta práctica se implementa un detector de ruido con un sensor  y un conjunto de leds. 
Los leds sirven para representar visualmente la intensidad de sonido que detecta el sensor.

## Material que se va a utilizar:
1. Placa Arduino
2. Protoboard
3. Cables jumpers 
4. 6 leds
5. 6 resistencias
6. Sensor sonido
 
## Diagrama de conexión
![conexion circuito sonido](https://github.com/user-attachments/assets/f37e37f8-0d90-4834-9eb1-82781acd8e1c)



## Funcionamiento:
El sensor detecta las frecuencias de sonido y prende los leds de acuerdo a la intensidad de la frecuencia recibida
si no detecta un ruido todos los leds permanecen apagados,a medida que el nivel de ruido aumenta, van encendiendo mas leds, 
cuando se alcanza el nivel maximo de ruido encienden todos los leds
