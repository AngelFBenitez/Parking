#include<stdio.h>

//Declare user defined function parkingCharge() that will receive two values. First is of char type to determine the type of vehicle. Second is of int type to get the number of hours spent by vehicle in parking lot.
//Function prototype

int parkingCharge(char,int);

//main function of program
int main()
{
	// declaration of variables
char type ;
int hours, amt;

// prompt & input of the vehicle type
printf("Enter type of vehicle (c for car, b for bus, and t for truck):\t");
scanf("%c", &type);

// prompt & input for time spent in parking lot
printf("Enter hours spent by vehicle in parking lot: \t");
scanf("%d", &hours);
amt = parkingCharge (type, hours);
printf("Total parking charge is \t$%d", amt);
return 0;
}
 
 
 // function that calculates money owed
int parkingCharge (char t, int h)
{

// loop
 switch(t)
 {
 //for car
 case('c'):
 case('C'):
 return 2*h;
 break;
 
 //for Bus 
 case('b'):
 case('B'):
 return 3*h;
 break;
 
 //for Truck
 case('t'):
 case('T'):
 return 4*h;
 break;
 
 //if no case matches
 default:
 printf("Error--Invalid input\n");
 return 0;
 }
}



