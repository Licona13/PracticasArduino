En esta práctica se utilizara la placa de arduino para simular el funcionamiento de un semáforo.
Las luces del semáforo se van a representar con leds.

## Material que se va a utilizar:
1. Placa Arduino
2. Protoboard
3. 3 leds(verde, rojo y amarillo)
4. 3 resistencias
5. 4 jumpers macho-macho

## Diagrama de conexión

![Conexion semaforo](https://github.com/user-attachments/assets/7a59f4db-c458-421e-b9ce-e9fdc5f39174)

Conecta el LED rojo al pin digital 2 
Conecta el LED amarillo al pin digital 4 
Conecta el LED verde al pin digital 7 
Conecta las patas negativas de los LEDs a GND usando las resistencias.

## Funcionamiento:
LED verde:  se encenderá durante 4 segundos para simular el pase de vehículos. Luego, se apagará.
LED amarillo: Al apagarse el LED verde, el LED amarillo se encenderá durante 2 segundos como advertencia. Después, parpadeará 3 veces para indicar que el semáforo cambiará.
LED rojo: el LED rojo se encenderá durante 6 segundos para simular que el paso está prohibido. Luego, se apagará y el ciclo comenzará de nuevo.
