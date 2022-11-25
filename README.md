//Calculator
//Calculator with fundamental operations using C++ program

#include <iostream>
#include <cmath>
#include <algorithm>
#include <windows.h>
using namespace std;

int addition (int num1, int num2);
void subtraction (int num1, int num2);
void multiplication (int num1, int num2);
void division (int num1, int num2);

int main ()
{
	int choice;
	int retry;
	int num1;
	int num2;
	int sum;
	int diff;
	int prod;
	int quo;
	
	do {
		system("cls");
		
	cout<< "********** MAIN MENU **********"<<endl;
	cout<< "[1] ADDITION"<< endl;
	cout<< "[2] SUBTRACTION"<< endl;
	cout<< "[3] MULTIPLICATION"<< endl;
	cout<< "[4] DIVISION"<< endl;
	cout<< "[5] EXIT"<< endl;
	cout<< "**************************************"<< endl;
	cout<< "Enter your choice: "<< endl;
	cin>> choice;
	
	switch (choice){
		case 1: cout<< endl<< "GETTING THE SUM OF THE TWO NUMBERS"<< endl;
				cout<< "Enter a first number: ";
				cin>> num1;
				cout<< "Enter a second number: ";
				cin>> num2;
				
				addition(num1, num2);
			break;
		
		case 2: cout<< endl<< "GETTING THE DIFFERENCE OF THE TWO NUMBERS"<< endl;
				cout<< "Enter a first number: ";
				cin>> num1;
				cout<< "Enter a second number: ";
				cin>> num2;
				
				subtraction (num1, num2);
			break;
		
		case 3: cout<< endl<< "GETTING THE PRODUCT OF THE TWO NUMBERS"<< endl;
				cout<< "Enter a first number: ";
				cin>> num1;
				cout<< "Enter a second number: ";
				cin>> num2;
				
				multiplication (num1, num2);
			break;
		
		case 4: cout<< endl<< "GETTING THE QUOTIENT OF THE TWO NUMBERS"<< endl;
				cout<< "Enter a first number: ";
				cin>> num1;
				cout<< "Enter a second number: ";
				cin>> num2;
				
				division (num1, num2);
			break;
		
		case 5:
			cout<< endl<< "THANK YOU FOR USING THIS PROGRAM"<< endl;
			continue;
		default: 
			break;
		}
	cout<< "Return to Main Menu? [5/1]: ";
	cin>> choice;
	}while(choice==5);
	cout<< "Thank you for using this program";
	return 0;
}

int addition (int num1, int num2){
	int sum;
	sum=num1 + num2;
	cout<< "The sum of the two numbers is: "<< sum<<endl;
	
	return sum;
}
void subtraction (int num1, int num2){
	int diff;
	diff=num1-num2;
	cout<< "The difference of the two numbers is: "<< diff<< endl;
}
void multiplication (int num1, int num2){
	int prod;
	prod=num1*num2;
	cout<< "The product of the two numbers is: "<< prod<< endl;
}
void division (int num1, int num2){
	int quo;
	quo=num1/num2;
	cout<< "The quotient of the two numbers is: "<< quo<< endl;
}
