## Material que se va a utilizar:
1. Placa Arduino
2. Protoboard
3. Cables jumpers 
4. Fotoresistencia
5. 1 Led
6. 2 resistencias
   
## Diagrama de conexión
![Conexion fotoresistencia](https://github.com/user-attachments/assets/75750263-078e-4ca5-a164-8456c10db1fa)

Sensor LDR:
Conecta una de los terminales de la fotoresistencia  a A5 y al pin positivo de la resistencia.
Conecta el otro terminal de la resistencia a GND.
Conecta el otro terminal del LDR a VCC.
LED:
Conecta el LED al pin digital 13 con una resistencia en serie.
La pata negativa del LED debe ir a GND.


## Funcionamiento:
La fotoresistencia detecta la luz ambiental y almacena el valor que recibe en la variable "valor", luego si el valor
que obtiene la fotoresistencia es menor al valor limite(100) el led se encenderá. Si el valor recibido por la fotoresistencia es mayor a 100, permanecera apagado
