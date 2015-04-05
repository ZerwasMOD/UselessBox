#ifndef USELESSBOX_H
#define USELESSBOX_H

#include <Arduino.h>
#include <Servo.h>


class USELESSBOX{

    public: 
        USELESSBOX();
        ~USELESSBOX();
        void initialise(int pinSwitchServo, int pinLidServo, int _pinSwitch);
        void initLidServo(int close, int open);
        void initSwitchServo(int in, int out);
        void standby();
        void run();
    
    private: 
        int positionDeckelZu;
        int positionDeckelAuf;
        int positionArmAusgefahren;
        int postionArmWeg;  
        int sequence;

        void fakeSwitching();
  
    protected:
        Servo servoSchalter;
        Servo servoDeckel;
        
        
        int buttonState;
        int pinSwitch;

        void initialDelay();
        void simpleMove();
        void slowMove();
        void zittern(int repetitions, int lidHeight);
        void fakeOpenLid();
        void sweepArm(String direction, int closedPosition, int openedPosition, Servo servoObject);

};

#endif