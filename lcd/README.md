En esta práctica se utilizará una pantalla LCD I2C para mostrar un mensaje de bienvenida y un contador de segundos.

## Material que se va a utilizar:
1. Placa Arduino
2. Protoboard
3. Cables jumpers 
4. Pantalla LCD 1602 I2C

## Diagrama de conexión

![Conexion lcd](https://github.com/user-attachments/assets/e0c7145b-f1be-4188-a7ee-ed8ce4508b15)

Pantalla LCD I2C:
Conecta el pin SDA al pin A4
Conecta el pin SCL al pin A5

Conecta los pines VCC y GND a la alimentación del Arduino.

## Funcionamiento:
La pantalla LCD mostrará el mensaje "Hola Mundo" en la primera línea.

En la segunda línea de la pantalla LCD, se mostrará un contador que indica el tiempo transcurrido en segundos desde que el Arduino comenzó a ejecutarse.
El valor del contador se actualizará en tiempo real cada 100 ms.
