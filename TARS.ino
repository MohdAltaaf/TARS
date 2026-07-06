#include <Servo.h>
#include <Adafruit_ILI9341.h>
#include <Adafruit_GFX.h>
Servo legLeft, legRight;

void setup() {
  legLeft.attach(5);
  legRight.attach(6);
  // TODO: init IMU, init display, init HC-05 serial
}

//Setting servos 90 degree to be at vertical eqlm position, forward being 180 and backwards being 0

void loop() {
  // TODO: If IMU.tilt> thresholdTilt -> Idle()
  
  // TODO: BluetoothInput() ->GetMovementCommands -> fwdStep()/bcwdStep()/rightStep()/leftStep()/Idle()

  // TODO:  Display()

}
void fwdStep() {
  //TODO: Set Both servos angle to be 180 (fast)
  //TODO: Set Both servos angle to be 0(slow)
}
void bcwdStep() {
  //TODO: Set Both servos angle to be 0 (fast)
  //TODO: Set Both servos angle to be 180(slow)
}
void rightStep() {
  //TODO: Set Right Servos angle to be 180(fast)
  //TODO: Set Left Servos angle to be 0(fast)
  //TODO: Set Right servos angle to be 0(slow)
  //TODO: Set Left Servos angle to be 180(slow)
}
void leftStep() {
  //TODO: Set Left Servos angle to be 180(fast)
  //TODO: Set Right Servos angle to be 0(fast)
  //TODO: Set Left servos angle to be 0(slow)
  //TODO: Set Right Servos angle to be 180(slow)
}
void Idle(){
  //TODO: Set Both Servos angles to be 90
}
void BluetoothInput(){
  //Recieve and interpret bluetooth input
}
void Display(){
  // TODO: Display current Tilt , Humor settings , etc.
  //not being used to the full potential as of now but in v2 with more functionality would be very useful.
}

