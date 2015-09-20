#include<stdio.h>
	int statusofMachine =6; //0110
	int CheckSwitchA = 8;	//1000
	int CheckSwitchB = 4;   //0100
	int CheckSwitchC = 2;	//0010
	int CheckSwitchD = 1;	//0001
int main()
{
	PrintStatus();
}
void PrintOnOff(char Name, int SwitchNum)
{
	if(statusofMachine | SwitchNum)
	{
		printf("%c:ON\n",Name);
	}
	else
	{
		printf("%c:OFF\n",Name);	
	}
}
void PrintStatus()
{
	printf("\nMachine Status:\n");
	PrintOnOff('A',CheckSwitchA);
	PrintOnOff('B',CheckSwitchB);
	PrintOnOff('C',CheckSwitchC);
	PrintOnOff('D',CheckSwitchD);
	printf("\n");
	
}
