

## Material que se va a utilizar:
1. Placa Arduino
2. Protoboard
3. Cables jumpers 
4. Sensor de humedad
5. led
6. 2 resistencias
7. Chicharra (Buzzer)
   
## Diagrama de conexión
![Conexion chicharra](https://github.com/user-attachments/assets/c5ef85d8-cc8b-4a67-a9c2-cf2fec3c9c2a)



## Funcionamiento:
Estado del sensor de humedad:

Estado bajo (LOW): Indica que el sensor detecta humedad. El LED se enciende y el buzzer permanece apagado.
Estado alto (HIGH): Indica ausencia de humedad. El LED se apaga y el buzzer emite un tono de advertencia.

Si el sensor detecta humedad, solo se enciende el LED como indicador de estado normal.
Si no detecta humedad, se activa el buzzer como alerta sonora, mientras que el LED se apaga.
