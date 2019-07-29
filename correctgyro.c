#pragma config(Motor,  port1,           leftmotor,     tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port10,          rightmotor,    tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{

SensorType[in1] = sensorNone;
delay(1000);
SensorType[in1] = sensorGyro;
delay(1000);

clearTimer(T1);
while(time1(T1) < 10000){

motor[rightmotor] = 100;
motor[leftmotor] = 100;

	if (SensorValue[in1] > 10){
		motor[rightmotor] = 5;
		motor[leftmotor] = 127;
	}

	else if (SensorValue[in1] < -10){
		motor[leftmotor] = 5;
		motor[rightmotor] = 127;
	}
	
	else{
		motor[rightmotor] = 100;
		motor[leftmotor] = 100;
	}

}
}
