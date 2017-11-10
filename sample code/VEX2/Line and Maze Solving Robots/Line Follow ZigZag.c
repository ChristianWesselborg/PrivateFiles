#pragma config(Sensor, in1,    lineTracker,         sensorLineFollower)
#pragma config(Motor,  port1,           leftMotor,     tmotorNormal, openLoop)
#pragma config(Motor,  port2,           rightMotor,    tmotorNormal, openLoop, reversed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
  while (true)
  {
    if (SensorValue[lineTracker] > 500)
    {
      motor[leftMotor]  = 35;
      motor[rightMotor] = 0;
    }
    else
    {
      motor[leftMotor]  = 0;
      motor[rightMotor] = 35;
    }
  }
}