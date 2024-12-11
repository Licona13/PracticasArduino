En esta práctica se implementará una secuencia de encendido y apagado de LEDs conectados a un Arduino, 
utilizando un ciclo repetitivo con efecto de ida y vuelta.

## Material que se va a utilizar:
1. Placa Arduino
2. Protoboard
3. Jumpers macho-macho 
4. 6 leds
5. 6 resistencias
## Diagrama de conexión
LEDs:

Conecta las patas positivas de los LEDs a los pines digitales 13, 12, 11, 10, 9 y 8.
Conecta una resistencia en serie con cada LED para limitar la corriente.
Conecta las patas negativas de los LEDs a GND, usa las resistencias para reducir la corriente y proteger los leds.



## Funcionamiento:

Los LEDs se encenderán y apagarán uno por uno, comenzando por el primer LED (pin digital 13) hasta el sexto LED (pin digital 8).
Cada LED permanecerá encendido por 500 milisegundos antes de apagarse y pasar al siguiente.

Al llegar al último LED (pin digital 8), la secuencia continuará de manera inversa, encendiendo los LEDs en orden descendente hasta regresar al primer LED.

La secuencia completa (ida y vuelta) se repetirá 3 veces gracias al ciclo for.
