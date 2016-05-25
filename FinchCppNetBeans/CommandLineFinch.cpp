/*******************************************************
 * Command line Finch
 * Author: Tom Lauwers, BirdBrain Technologies
 * tlauwers@finchrobot.com
 * 
 * Simple program to access every Finch class function and ensure
 * that they're working correctly. 
********************************************************/
#include "./Finch/Finch.h"
#include <stdio.h>
#include <stdlib.h>

void printMenu()
{
    printf("Finch Test Menu: \n");
    printf("A - print accelerometer values\n");
    printf("o - print orientation state\n");
    printf("L - print light sensor values\n");
    printf("I - print IR sensor values\n");
    printf("T - print temperature\n");
    printf("S - print if Finch has been shaken\n");
    printf("t - print if Finch has been tapped\n");
    printf("B - turn on buzzer\n");
    printf("b - turn off buzzer\n");
    printf("M - turn on Motors\n");
    printf("X - motor stop\n");
    printf("O - set beak LED\n");
    printf("m - print menu\n");
    printf("Q - quit program\n");      
}

//int main(int argc, char* argv[])
//{
//    Finch myFinch;
//    double* accel = 0;
//    int* lightSense = 0;
//    int* obstacles = 0;
//    char option = 0;
//    char trash;
//    double temperature;
//    int leftSpeed, rightSpeed;
//    int rLED, gLED, bLED;
//    int frequency;    
//    int shaken, tapped;
// 
//    printMenu();
//    
//    while(option != 'Q') {
//        printf("Enter desired command: ");
//        scanf("%c",&option);
//        scanf("%c",&trash);
//        switch(option) {
//            case 'A':
//                accel = myFinch.getAccelerations();
//                printf("X: %f, Y: %f, Z: %f\n", accel[0],accel[1],accel[2]);
//                break;
//            case 'o':
//                printf("Level: %d\n", myFinch.isFinchLevel());
//                printf("Beak Up: %d\n", myFinch.isBeakUp());
//                printf("Beak Down: %d\n", myFinch.isBeakDown());
//                printf("Upside Down: %d\n", myFinch.isFinchUpsideDown());
//                printf("Left Wheel Down: %d\n", myFinch.isLeftWingDown());
//                printf("Right Wheel Down: %d\n", myFinch.isRightWingDown());
//                break;
//            case 'L':
//                lightSense = myFinch.getLightSensors();
//                printf("Left: %d, Right: %d\n", lightSense[0],lightSense[1]);
//                break; 
//            case 'I':
//                obstacles = myFinch.getObstacleSensors();
//                printf("Left: %d, Right: %d\n", obstacles[0],obstacles[1]);
//                break;  
//             case 'T':
//                temperature = myFinch.getTemperature();
//                printf("%f Celcius\n", temperature);
//                break;  
//            case 'S':
//                shaken = myFinch.wasShaken();
//                printf("Shaken state: %d\n", shaken);
//                break; 
//            case 't':
//                tapped = myFinch.wasTapped();
//                printf("Tapped state: %d\n", tapped);
//                break;                 
//            case 'B':
//                printf("Enter frequency in Hz: ");
//                scanf("%d", &frequency);
//                scanf("%c",&trash);
//                myFinch.noteOn(frequency);
//                break;
//            case 'b':
//                myFinch.noteOff();
//                break;
//            case 'M':
//                printf("Enter left wheel speed (-255 to 255): ");
//                scanf("%d", &leftSpeed);
//                printf("Enter right wheel speed (-255 to 255): ");
//                scanf("%d", &rightSpeed);
//                scanf("%c",&trash);
//                myFinch.setMotors(leftSpeed, rightSpeed);
//                break;
//            case 'X':
//                myFinch.setMotors(0,0);
//                break;
//            case 'O':
//                printf("Enter red color value (0-255): ");
//                scanf("%d", &rLED);
//                printf("Enter green color value (0-255): ");
//                scanf("%d", &gLED);                
//                printf("Enter blue color value (0-255): ");
//                scanf("%d", &bLED); 
//                scanf("%c",&trash);
//                myFinch.setLED(rLED,gLED,bLED);
//                break;
//            case 'c':
//                printf("%d \n", myFinch.counter());
//                break;
//            case 'm':
//                printMenu();
//                break;
//            default:
//                break;
//            }
//    }
//    return 0;
//}