#include<stdio.h>
int main()
{							//ABCD
	int statusofMachine =2; //0010
	int CheckSwitchB = 4;	//0100
	int CheckSwitchC = 2;	//0010
	if((statusofMachine & CheckSwitchB ) !=0)
	{
		printf("Switch B is ON\n");
	}
	else
	{
		printf("switch B is not On\n");
	}
	if((statusofMachine & CheckSwitchC) !=0)
	{
		printf("Switch C is ON\n");
	}
	else
	{
		printf("Switch C is NOT ON\n");
	}
	return 0;
}
