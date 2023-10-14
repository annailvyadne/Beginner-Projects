#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;
void choice1();
void choice2();
void choice3();
void choice4();
void choice5();
void choice6();
void choice7();
void choice8();
void choice9();
void choice10();
void mainMenu();

int main(){
	void mainMenu();
	
	cout << "Welcome to Basic C++ Program Compilation [PART 1]" << endl;
	cout << "NOTE: The following programs are just basic C++ exercises without application of Object-Oriented Programs (OOP) and Classes (Advanced feature of C++)" << endl;
	mainMenu();
	return 0;
}

void mainMenu(){
	
	int num;
	
	cout << "PROGRAMS\n";
	cout << "[1] LENGTH OF THE SQUARE\n";
	cout << "[2] AMOUNT OF MONEY AND TENDERED PURCHASE\n";
	cout << "[3] CALCULATE DEPTH\n";
	cout << "[4] EXAM SCORES\n";
	cout << "[5] TWO INTEGERS\n";
	cout << "[6] LENGTH IN FEET AND INCHES IN FOOT\n";
	cout << "[7] WEIGHT IN POUNDS AND OUNCES\n";
	cout << "[8] TAX PAYABLE AND NET SALARY\n";
	cout << "[9] POLLUTION READINGS\n";
	cout << "[10] ZERO, FIRST, OR SECOND\n";
	cout << "*******************************\n";
	cout << "Enter number: ";
	cin >> num;
	
	switch(num){
		case 1: 
		
			choice1();	//function for choice 1
			
			break;
		
		case 2:
			
			choice2();		//function for choice 2
			
			break;
			
		case 3: 
		
			choice3();		//function for choice 3
		
			break;
			
		case 4: 
		
			choice4();		//function for choice 4
		
			break;
			
		case 5: 
		
			choice5();		//function for choice 5
			
			break;
			
		case 6: 
		
			choice6();		//function for choice 6
			
			break;
			
		case 7: 
		
			choice7();		//function for choice 7
			
			break;
			
		case 8: 
		
			choice8();		//function for choice 8
			
			break;
			
		case 9: 
		
			choice9();		//function for choice 9
			
			break;
			
		case 10: 
		
			choice10();		//function for choice 10
			
			break;
			
	}	//end of switch case
	
}//end of mainmenu

void choice1(){
	
	int length;
	double perimeter;
	
	/* "Write a program that allows the user to enter the length of a square and which uses this number to 
	calculate and display the area of the square.*/
	cout << "Enter the length of a square: ";
	cin >> length;
	
	perimeter = length * 4;
	
	cout << "Perimeter: " << perimeter;
}

void choice2(){
	
	/* Write a program that accepts an amount of money from the user and represents the
amount tendered for purchase. Also, allow the user to enter the cost of the item being
purchased. The program should calculate the change due and print this amount. The
following could be used as sample output from your program:
*/
	double tenderedamt;
	double cost;
	double changeamt;
	
	cout << "Enter the amount tendered: ";
	cin >> tenderedamt;
	cout << "\nEnter the cost of the item: ";
	cin >> cost;
	
	changeamt = tenderedamt - cost;
	
	cout << "\nThe change due is: " << changeamt;
}

void choice3(){
	
	/*Write a program that can be used to calculate the depth (in meters) of a vertical mine
shaft when the time is given for a pebble to fall down the shaft.
*/
	
	int time;
	double g;
	double D;
	
	cout << "Enter amount of time: ";
	cin >> time;
	
	D = 0.5 * 9.8 * time * time;
	
	cout << "Depth in meters: " << D << "m";
}

void choice4(){
	
	/* A class has four exams in one term. Write a program that reads in a student’s four exam 
	scores, as integers and outputs the student’s average. */
	
	int score1, score2, score3, score4;
	double average;
	int sum;
	
	cout << "Enter first exam score: ";
	cin >> score1;
	cout << "\nEnter second exam score: ";
	cin >> score2;
	cout << "\nEnter third exam score: ";
	cin >> score3;
	cout << "\nEnter fourth exam score: ";
	cin >> score4;
	
	sum = score1 + score2 + score3 + score4;
	average = sum / 4;
	
	cout << "Avergae: " << average;

}

void choice5(){
	
	/* Write a program that reads two integers into variables X and Y. Extract and 
	display the integer quotient and the remainder of X divided Y. */
	
	int x, y;
	double rem, quotient;
	
	cout << "Enter integer for variable x: ";
	cin >> x;
	
	cout << "\nEnter integer for variable y: ";
	cin >> y;
	
	quotient = x * y;
	rem = x % y;
	
	cout << "Quotient: " << quotient << endl;
	cout << "Remainder: " << rem << endl;
}

void choice6(){
	
	/*Write a program that reads in a length in feet and inches and then outputs the equivalent length in meters 
	and centimeters.  There are 0.3048 meters in a foot, 100 centimeters in a meter, and 12 inches in a foot */
	
	double length, inches, feet, meters, cm;
	
	cout << "Enter value length in feet: ";
	cin >> feet;
	
	cout << "\nEnter value length in inches: ";
	cin >> inches;
	
	meters =  0.3048 * feet; 
	
	cout << "Feet in meters: " << meters << "m" << endl;
}

void choice7(){
	
	/*Write a program that reads a weight in pounds and ounces and then outputs the equivalent weight in kilograms and grams.  
	There are 2.2046 pounds in a kilogram, 1000 grams in a kilogram and 16 ounces in a pound. */
 
Volume of a cylinder  = pi *r*r*h
Volume of a cone  = pi * r*r *(h/3)
Conversion of Fahrenheit to Celsius C = (f–32)/1.800   
	
const double POUNDS_TO_KILOGRAMS = 2.2046;
const double OUNCES_TO_GRAMS = 28.3495;

int main() {
    double pounds, ounces, kilograms, grams, total_ounces;

    // read in weight in pounds and ounces
    cout << "Enter weight in pounds: ";
    cin >> pounds;
    cout << "Enter weight in ounces: ";
    cin >> ounces;

    // convert pounds and ounces to total ounces
    total_ounces = pounds * 16 + ounces;

    // convert total ounces to kilograms and grams
    kilograms = total_ounces / POUNDS_TO_KILOGRAMS / 1000.0;
    grams = fmod(total_ounces / OUNCES_TO_GRAMS, 1000.0);

    // print out the equivalent weight in kilograms and grams
    cout << fixed << setprecision(2);
    cout << "Weight in kilograms: " << kilograms << endl;
    cout << "Weight in grams: " << grams << endl;

}

void choice8(){
	
/* Write a program that allows the users to enter employee salaries.   
Calculate and display the amount of tax payable on that salary and the net salary(after-tax).  
Use the simple tax rule. 

Salaries from P0 to P4000: no tax payable.
Salaries fromP4001 to P34999: tax at 30%
Salaries 35000 or above: tax at 48%
*/

    double salary, tax, net_salary;

    // read in employee salary
    cout << "Enter employee salary: ";
    cin >> salary;

    // calculate tax payable
    if (salary <= 4000) {
        tax = 0.0;
    } else if (salary <= 34999) {
        tax = 0.3 * (salary - 4000);
    } else {
        tax = 0.48 * (salary - 4000);
    }

    // calculate net salary
    net_salary = salary - tax;

    // print out tax payable and net salary
    cout << fixed << setprecision(2);
    cout << "Tax payable: " << tax << endl;
    cout << "Net salary: " << net_salary << endl;
}

void choice9(){
	
/* Write a program that allows the user to enter a number of pollution readings(integers).  
As each pollution reading is entered the program should test the reading and print one of the following messages :
o   Comfortable (for readings less than 30)
o   Moderate(for readings less from 30 to 60 inclusive)
o   Dangerous(for readings over 60)
The program should stop when the user enters any negative pollution reading.
*/

    int reading;

    while (true) {
        // read in pollution reading
        cout << "Enter pollution reading (or negative number to stop): ";
        cin >> reading;

        // check for negative reading
        if (reading < 0) {
            break;
        }

        // print message based on pollution reading
        if (reading < 30) {
            cout << "Comfortable" << endl;
        } else if (reading <= 60) {
            cout << "Moderate" << endl;
        } else {
            cout << "Dangerous" << endl;
        }
    }
}

void choice10(){
	
	/* Write a program in which the user can enter two numbers(integers).  
	If both numbers are zero then print the message “ Two zeros”.  If the numbers are not both zero, then print either “FIRST” or 
	“SECOND” depending on which number is bigger. If the numbers are the same(but not both zero) then print “EQUAL”. */
	
	int num1, num2;

    // read in two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num1 == 0 && num2 == 0) {
        // both numbers are zero
        cout << "Two zeros" << endl;
    } else if (num1 > num2) {
        // first number is bigger
        cout << "FIRST" << endl;
    } else if (num2 > num1) {
        // second number is bigger
        cout << "SECOND" << endl;
    } else {
        // numbers are equal
        cout << "EQUAL" << endl;
    }
}
