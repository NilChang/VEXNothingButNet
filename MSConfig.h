#pragma config(I2C_Usage, I2C1, i2cSensors)

#pragma config(Sensor, dgtl1,  LeftUpSwitch,    sensorTouch)
#pragma config(Sensor, dgtl2,  LeftDownSwitch,  sensorTouch)
#pragma config(Sensor, dgtl3,  RightUpSwitch,   sensorTouch)
#pragma config(Sensor, dgtl4,  RightDownSwitch, sensorTouch)
#pragma config(Sensor, dgtl8,  AutoLaunch, sensorTouch)
#pragma config(Sensor, dgtl6,  BallPosSwitch,   sensorTouch)
#pragma config(Sensor, dgtl11, ShootingEncoder,     sensorQuadEncoder)

#pragma config(Sensor, in1,    Gyro,            sensorGyro)
#pragma config(Sensor, in2,    PowerExpander,   sensorAnalog)

#pragma config(Sensor, I2C_1,  ChassisRightEncoder,  sensorQuadEncoderOnI2CPort,    , AutoAssign)
#pragma config(Sensor, I2C_2,  ChassisLeftEncoder,   sensorQuadEncoderOnI2CPort,    , AutoAssign)

#pragma config(Motor,  port1,   GettingBalls,       tmotorVex393_HBridge,         openLoop                                              )
#pragma config(Motor,  port2,   ChassisLeftBack,    tmotorVex393HighSpeed_MC29,   PIDControl,           driveLeft ,  encoderPort,I2C_2  )
#pragma config(Motor,  port3,   ChassisRightBack,   tmotorVex393HighSpeed_MC29,   PIDControl, reversed, driveRight,  encoderPort,I2C_1  )
#pragma config(Motor,  port4,   ChassisLeftFront,   tmotorVex393HighSpeed_MC29,   openLoop,             driveLeft                       )
#pragma config(Motor,  port5,   ChassisRightFront,  tmotorVex393HighSpeed_MC29,   openLoop,   reversed, driveRight                      )
#pragma config(Motor,  port6,   RisingLeft,         tmotorVex393_MC29,            openLoop,   reversed                                  )
#pragma config(Motor,  port7,   RisingRight,        tmotorVex393_MC29,            openLoop                                              )
#pragma config(Motor,  port8,   ShootingLeft,       tmotorVex393TurboSpeed_MC29,  openLoop)
#pragma config(Motor,  port9,   ShootingRight,      tmotorVex393TurboSpeed_MC29,  openLoop,   reversed )
#pragma config(Motor,  port10,  CarringBalls,       tmotorVex393_HBridge,         openLoop)
