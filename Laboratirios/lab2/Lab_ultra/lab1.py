#!/usr/bin/env pybricks-micropython
from pybricks.hubs import EV3Brick
from pybricks.ev3devices import Motor, UltrasonicSensor
from pybricks.parameters import Port
from pybricks.tools import wait
from pybricks.robotics import DriveBase

# Initialize the EV3 Brick.
ev3 = EV3Brick()

#Declaramos el puerto 4 como entrada del ultrasonido
Ultra = UltrasonicSensor(Port.S4)

#Declaramos los puertos del motor 
motor_b = Motor(Port.B)
motor_c = Motor(Port.C)

# DriveBase es lo que se usa para usar los motores simultaneamente
# Wheel_diameter es la altura del motor a partir del suelo 
# axle_track es la dirección y la velocidad que actuara el motor 
robot = DriveBase(motor_b, motor_c, wheel_diameter=55.5, axle_track=104)

# Play a sound to tell us when we are ready to start moving
ev3.speaker.beep()

#Ponemos un bucle infinito con true
while True:
    #El robot empieza a moverse a 200 milimetros por segundo
    robot.drive(200, 0)
    #Cuando el robot detecte algo empieza una nueva secuencia que si el sensor detecta algo menos a 150 milimetros
    while Ultra.distance() > 150:
        wait(10)
    # Retrocede 150 milimetros 
    robot.straight(-150)
    # Gira 180 grados 
    robot.turn(180)
