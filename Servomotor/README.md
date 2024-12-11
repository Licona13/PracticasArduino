El servomotor es un motor controlado que permite posicionar su eje en un angulo especifico( de 0 a 180°) Este motor recibe pulsos desde la placa Arduino para actuar segun la lógica que se programó.


## Material que se va a utilizar:
1. Placa Arduino
2. Protoboard
3. Servomotor
4. Sensor ultrasónico
5. Cables jumpers

## Diagrama de conexión




## Funcionamiento:
Si la distancia es menor o igual a 10 cm, el servomotor gira a 120 grados.
Si la distancia es mayor a 10 cm, el servomotor regresa a 45 grados.
Materiales Necesarios
Arduino Uno o similar: Para ejecutar el código.
Sensor ultrasónico (HC-SR04): Para medir la distancia.
Trig: Pin para emitir la señal ultrasónica.
Echo: Pin para recibir el eco de la señal reflejada.
Servomotor: Para girar según las instrucciones del programa.
Resistencias: Si se necesita ajustar el voltaje para el sensor.
Protoboard y cables jumper: Para realizar las conexiones.
Funcionamiento General
1. Configuración Inicial
En el setup() se definen las configuraciones iniciales:

Pines del sensor ultrasónico:
trig (pin de salida): Envía pulsos ultrasónicos.
echo (pin de entrada): Recibe el eco de los pulsos reflejados.
Control del servomotor: Se asocia el servomotor al pin 4 mediante ioe.attach(4).
