En esta práctica se medirá la distancia de un objeto utilizando un sensor ultrasónico, y se mostrará el valor en la pantalla LCD. 
Además, se encenderá un LED cuando el objeto esté dentro de una distancia menor o igual a 20 cm.

## Material que se va a utilizar:
1. Placa Arduino
2. Protoboard
3. Cables jumpers
4. Sensor ultrasónico
5. Pantalla LCD
6. Led
7. Resistencia
   
## Diagrama de conexión
Trig: se conecta al Pin digital 10
Echo: se conecta al Pin digital 9
VCC y GND se conectan a 5v y a Gnd respectivamente en el Arduino
Pantalla LCD: se conectan los pines SDA y SCL (uno a A4 y otro a A5) y los pines Vcc y Gnd a la alimentacion.
Led: el Led se conecta al pin 3 en el arduino y la pata negativa al GND


## Funcionamiento:
El sensor ultrasónico enviará un pulso desde el pin trig y recibirá la respuesta en el pin eco.
Luego la distancia se calculará dividiendo el tiempo de respuesta entre 58.2 para obtener el resultado en centímetros.
Los valores calculados de la distancia se mostrarán en la pantalla LCD y si la distancia medida es menor o igual a 20 cm, el LED se encenderá,
si la distancia medida es mayor a 20cm el led permanecerá apagado.
