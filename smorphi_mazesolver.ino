#include <smorphi_single.h>

Smorphi_single my_robot;

void setup() {
  my_robot.BeginSmorphi_single();  // Initialize Smorphi robot
}

void loop() {
  // Get sensor status: 0 = obstacle, 1 = free
  int front = my_robot.module1_sensor_status(0); //Adjust front IR sensor port
  int left  = my_robot.module1_sensor_status(2); //Adjust left IR sensor port
  int right = my_robot.module1_sensor_status(4); //Adjust right IR sensor port

  // Simple maze logic
  if (front == 1 && right == 0 && left == 0) {           // Front clear
    my_robot.MoveForward(100);
  }
  else if (left == 1 && front == 0 && right == 0) {       // Front blocked, left clear
    my_robot.CenterPivotLeft(270);
    delay(200);          
    my_robot.MoveForward(80);     
  }
  else if (right == 1 && front == 0 && left == 0) {      // Front & left blocked, right clear
    my_robot.CenterPivotRight(90);
    delay(200);
    my_robot.MoveForward(80);
  }
  else {                       // All blocked, turn around
   my_robot.stopSmorphi_single();
  }
  
  delay(50);  // Small delay for stability
}
