#include <REG52.H>
#include "hwapi.h"

//INPUTS
sbit DRIVER=P0^0;
sbit BELT=P0^1;

sbit PASSENGER=P0^2;
sbit PASSENGER_BELT=P0^3;


//OUTPUTS

sbit ALARM_LED=P3^7;



int isDriverSitting(){

return DRIVER==0;
}
	int isPassengerSitting(){
	return PASSENGER==0;
	}

int isPassengerBeltOpen(){
return PASSENGER_BELT==1;
}
	 
int isBeltOpen(){
return BELT==1; 

}



 void setAlarmOn(){
 
 ALARM_LED=0;
 }
void setAlarmOff(){
ALARM_LED=1;
}

