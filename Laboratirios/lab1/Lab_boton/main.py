#!/usr/bin/env pybricks-micropython
from pybricks.hubs import EV3Brick
from pybricks.ev3devices import (Motor, TouchSensor, ColorSensor,
                                 InfraredSensor, UltrasonicSensor, GyroSensor)
from pybricks.parameters import Port, Stop, Direction, Button, Color
from pybricks.tools import wait, StopWatch, DataLog
from pybricks.robotics import DriveBase
from pybricks.media.ev3dev import SoundFile, ImageFile




# Create your objects here.
ev3 = EV3Brick()
boton= TouchSensor(Port.S1)
motor_b = Motor(Port.B)
motor_c = Motor(Port.C)

robot = DriveBase(motor_b, motor_c, wheel_diameter=55.5, axle_track=104)
# Write your program here.
ev3.speaker.beep()
while True:
    #El robot empieza a moverse a 200 milimetros por segundo
    robot.drive(200, 0)
    #Cuando el robot detecte algo empieza una nueva secuencia que si el sensor detecta algo menos a 150 milimetros
    while boton.pressed() == True:
        wait(10)
        # Retrocede 150 milimetros 
        robot.straight(-150)
        # Gira 180 grados 
        robot.turn(180)