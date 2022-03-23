#ifndef LINO_BASE_CONFIG_H
#define LINO_BASE_CONFIG_H

//uncomment the base you're building
#define LINO_BASE DIFFERENTIAL_DRIVE // 2WD and Tracked robot w/ 2 motors
//sacchin

//uncomment the motor driver you're using
#define USE_L298_DRIVER
// #define USE_BTS7960_DRIVER
// #define USE_ESC

//uncomment the IMU you're using
//#define USE_MPU6050_IMU
#define USE_MPU9250_IMU

#define DEBUG 1

#define K_P 1.7 // P constant
#define K_I 0.05 // I constant
#define K_D 0.4 // D constant

//define your robot' specs here
#define MAX_RPM 350               // motor's maximum RPM
#define COUNTS_PER_REV 1025       // wheel encoder's no of ticks per rev
#define WHEEL_DIAMETER 0.1       // wheel's diameter in meters
#define PWM_BITS 8                // PWM Resolution of the microcontroller
#define LR_WHEELS_DISTANCE 0.20  // distance between left and right wheels
#define FR_WHEELS_DISTANCE 0.30   // distance between front and rear wheels. Ignore this if you're on 2WD/ACKERMANN
#define MAX_STEERING_ANGLE 0.415  // max steering angle. This only applies to Ackermann steering

//=================BIGGER ROBOT SPEC (BTS7960)=============================
// #define K_P 0.1  // P constant
// #define K_I 0.9   // I constant
// #define K_D 0.5   // D constant

// define your robot' specs here
//#define MAX_RPM 438               // motor's maximum RPM
//#define COUNTS_PER_REV 380      // wheel encoder's no of ticks per rev
//#define WHEEL_DIAMETER 0.10      // wheel's diameter in meters
//#define PWM_BITS 8               // PWM Resolution of the microcontroller
//#define LR_WHEELS_DISTANCE 0.30  // distance between left and right wheels
//#define FR_WHEELS_DISTANCE 0.38  // distance between front and back wheels. Ignore this if you're on 2WD/ACKERMANN
//================= END OF BIGGER ROBOT SPEC =============================

/*
ROBOT ORIENTATION
         FRONT
    MOTOR1  MOTOR2  (2WD/ACKERMANN)
    MOTOR3  MOTOR4  (4WD/MECANUM)
         BACK
*/

/// ENCODER PINS
#define MOTOR1_ENCODER_A 15
#define MOTOR1_ENCODER_B 14

#define MOTOR2_ENCODER_A 9
#define MOTOR2_ENCODER_B 10

#define MOTOR3_ENCODER_A 9
#define MOTOR3_ENCODER_B 10

#define MOTOR4_ENCODER_A 15
#define MOTOR4_ENCODER_B 14

//MOTOR PINS
 #define MOTOR_DRIVER L298

 #define MOTOR1_PWM 5
 #define MOTOR1_IN_A 6
 #define MOTOR1_IN_B 8

 #define MOTOR2_PWM 17
 #define MOTOR2_IN_A 21
 #define MOTOR2_IN_B 1

 #define MOTOR3_PWM 4
 #define MOTOR3_IN_A 2
 #define MOTOR3_IN_B 3

 #define MOTOR4_PWM 22
 #define MOTOR4_IN_A 23
 #define MOTOR4_IN_B 0

 #define PWM_MAX pow(2, PWM_BITS) - 1
 #define PWM_MIN -PWM_MAX


#define STEERING_PIN 7

#endif
