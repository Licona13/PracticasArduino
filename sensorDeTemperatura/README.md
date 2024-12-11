En esta práctica se utilizará un sensor DHT11 para medir la temperatura y la humedad ambiental,
y se encenderá un LED si la temperatura es igual o supera los 28 °C.

## Material que se va a utilizar:
1. Placa Arduino
2. Protoboard
3. Cables jumpers 
4. Sensor DHT11
5. 1 LED
6. 1 Resistencia

## Diagrama de conexión
![Conexion sensor de temperatura](https://github.com/user-attachments/assets/de1804c6-0517-4624-8706-3f40ed6d8828)

Sensor DHT11:
Conecta el pin de señal del sensor al pin digital 2 del Arduino.
Conecta el pin VCC del sensor a 5V y el pin GND a GND en el Arduino.
LED:
Conecta el LED al pin digital 3 con una resistencia en serie.
La pata negativa del LED debe ir a GND.

## Funcionamiento:
Medición de temperatura y humedad:

El sensor DHT11 lee los datos de temperatura y humedad.
Estos valores se mostrarán en el monitor serie, con un intervalo de 500 ms.

Si la temperatura es igual o superior a 28 °C, el LED conectado al pin digital 3 se encenderá.
Si la temperatura es inferior a este valor, el LED permanecerá apagado.
