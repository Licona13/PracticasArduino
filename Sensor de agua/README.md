El sensor de agua como su nombre lo indica detecta la presencia o ausencia de agua y puede medir sus propiedades
como el nivel , la calidad o el flujo.

## Material que se va a utilizar:
1. Sensor de agua
2. Arduino
3. Cables Jumpers
4. Protoboard
5. 3 Leds
6. 3 Resistencias
 
## Diagrama de conexión
![SensorDeAgua diagrama](https://github.com/user-attachments/assets/2c539ddc-cca4-4a5a-a1c7-cd915ddb15f8)




## Funcionamiento:
Se lee el valor que recibe el sensor desde el pin A5 y dependiendo de el rango de valores obtenido, encendera uno de los tres leds:
LED verde: Si el valor está entre 450 y 550.
LED amarillo: Si el valor está entre 551 y 650.
LED rojo: Si el valor está entre 651 y 700.
Apagado por Defecto:
Si el valor no corresponde a ningún rango definido, todos los LEDs permanecerán apagados.
