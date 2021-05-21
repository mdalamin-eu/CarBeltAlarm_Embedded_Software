#pragma NOEXTEND
#include "hwapi.h"


void main(){
while(1)
	
if((isDriverSitting()&&isBeltOpen()) || (isPassengerSitting()&&isPassengerBeltOpen())){
setAlarmOn();
}
else
{
setAlarmOff();

}


}