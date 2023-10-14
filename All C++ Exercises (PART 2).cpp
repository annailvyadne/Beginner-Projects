#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>
using namespace std;

void mainMenu();
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

void mainMenu(){
	
	int num;
	cout << "PROGRAMS\n";
	cout << "[1] POSITION CODE OF EMPLOYEE\n";
	cout << "[2] STUDENT'S GRADE";
	cout << "[3] SALE'S TAX'\n";
	cout << "[4] STUDENT-GRADE AND LETTER GRADE\n";
	cout << "[5] EMPLOYEE SALARY\n";
	cout << "[6] INCOME TAX COMPUTATION\n";
	cout << "[7] TOLERANCE AND STATUS\n";
	cout << "[8] SOCIETY FUNCTION\n";
	cout << "[9] IMPORTED GOODS\n";
	cout << "[10] DATA VALUES\n";
	cout << "*******************************" << endl;
	cout << "Enter a number: ";
	cin >> num;
	
	switch(num){
		
		case 1: 
		
		choice1();
		
			break;
			
		case 2:
			
		choice2();
		
			break;
			
		case 3:
			
		choice3();
			
			break;
			
		case 4: 
		
		choice4();
		
			break;
			
		case 5:
			
		choice5();
		
			break;	
			
		case 6:
			
		choice6();
		
			break;
			
		case 7:
			
		choice7();
			
			break;
		
		case 8:
			
		choice8();
			
			break;
			
		case 9:
			
		choice9();
			
			break;
			
		case 10:
			
		choice10();
			
			break;
			
	} //end of switch case
}	//end of main menu function

void choice1(){
	
	int code;
	
do{
	cout << "\nEnter position code(integer): ";
	cin >> code;
	
		if(code == 1){
		
		cout << "Position Code: " << code << " " << "Word Code: Messenger"; 
		}
	
		else if(code == 2){
		
		cout << "Position Code: " << code << " " << "Word Code: Encoder"; 
		}
	
		else if(code == 3){
		
		cout << "Position Code: " << code << " " << "Word Code: Programmer"; 
		}
	
		else if(code == 4){
		
		cout << "Position Code: " << code << " " << "Word Code: Encoder";
		} 
	
		else if(code == 5){
		
		cout << "Position Code: " << code << " " << "Word Code: System Analyst";
		}
	
		else if(code == 6){
		
		cout << "Position Code: " << code << " " << "Word Code: Server Engineer";
		}
	
		else if(code == 7){
		
		cout << "Position Code: " << code << " " << "Word Code: Network Administrator";
		}
		
	}while(code < 1 || code > 7);
	
} // end of function

void choice2(){
	
	/*Write a program that will input a student’s grade(integer) and print the equivalent 
	letter grade based on the following conditions: */
	
	int grade;
	
 do{
	cout << "\nEnter numerical grade: ";
	cin >> grade;
	
	if(grade <=100 && grade >=90){
		
		cout << "Letter grade: A";
	}
	
	else if(grade <= 80 && grade >= 89){
		
		cout << "Letter grade: B";
	}
	
	else if(grade <= 70 && grade >= 79){
		
		cout << "Letter grade: C";
	}
	
	else if(grade <= 60 && grade >= 69){
		
		cout << "Letter grade: D";
	}
	
	else if(grade > 1 && grade <=60){
		
		cout << "Letter grade: F";
	}
	
	}while(grade == 0 || grade < 100);
	cout << "\nInvalid value. Please try again" << endl;
}

void choice3(){
	
	/*A sales tax estimator will be used to assist customers who struggle with mathematical calculations—customers 
	need to know in advance of purchases the cost of an item including sales tax. Build a program that will enable 
	inputting values into two variables: (1) product price and (2) quantity purchased. The sales tax rate is 5%. Compute 
	and display the net amount due (price times quantity), sales tax due, and total amount due for the sale on the screen.
Accumulate the total sales tax du
*/
	
	double productprice, netamtdue, salestaxdue, totalamtdue;
	int quantity;
	
	cout << "Enter product price: PHP ";
	cin >> productprice;
	
	cout << "\nEnter quantity: ";
	cin >> quantity;
	
	netamtdue = productprice * quantity;
	salestaxdue = productprice * 0.05;
	totalamtdue = productprice + 0.05;
	
	cout << "Net amount due: PHP " << netamtdue << endl;
	cout << "Sales tax due: PHP " << salestaxdue << endl;
	cout << "Total amount due: PHP " << totalamtdue << endl;
}

void choice4(){
	
	/*Write a program that will input the student’s grade(integer) and print the 
	equivalent letter grade based on the following conditions:
		Numerical Grade 		Letter Grade
		90 – 100 					A
		80 – 89 					B
		70 – 79 					C
		60 – 69 					D
		Below 60 F
	Also, print the remark “Passed” if the student’s grade &gt;= 60 otherwise “Failed”. 
	Count the number of students who got A, the number of students who got B, the number 
	of students who C, the number of students who got D, and the number of students who got 
	F. Also, count the number of students who passed and the number of students who failed. 
	Negative inputs will automatically end the program. Print them all on the screen.
*/

    int a_count = 0, b_count = 0, c_count = 0, d_count = 0, f_count = 0, pass_count = 0, fail_count = 0;
    int grade;

    while (true) {
        cout << "Enter student's grade (negative number to exit): ";
        cin >> grade;

        if (grade < 0) {
            break;
        }

        if (grade >= 90) {
            cout << "A";
            a_count++;
        } else if (grade >= 80) {
            cout << "B";
            b_count++;
        } else if (grade >= 70) {
            cout << "C";
            c_count++;
        } else if (grade >= 60) {
            cout << "D";
            d_count++;
        } else {
            cout << "F";
            f_count++;
        }

        if (grade >= 60) {
            cout << " (Passed)" << endl;
            pass_count++;
        } else {
            cout << " (Failed)" << endl;
            fail_count++;
        }
    }

    cout << endl;
    cout << "Number of A's: " << a_count << endl;
    cout << "Number of B's: " << b_count << endl;
    cout << "Number of C's: " << c_count << endl;
    cout << "Number of D's: " << d_count << endl;
    cout << "Number of F's: " << f_count << endl;
    cout << "Number of Passes: " << pass_count << endl;
    cout << "Number of Fails: " << fail_count << endl;
}

	
void choice5(){
	
/* Write a program that allows the user to compute for the salary of an employee for a month given the following conditions:
	
Position 			Paygrade A 		PayGrade B 		TaxRate
M-Messenger 		5,500 			6500 			5%
E-Encoder 			6,500 			7500 			6%
T-Technician 		7,500 			8500 			7%
P-programmer 		10,000 			10500 			8%
S-System Analyst 	12,500 			12,500 			9%

Regular working hours for one month is 160 hrs. Beyond 160 is paid 1.5 times of the regular wage rate.
Deductions are sss = 200, pag-ibig = 100. Withholding tax = gross * taxRate
Net = PaySalary – (sss+pagibig +withholdingTax).

Display also the actual employee’s name, company, department actual description of the position, hours worked, overtime pay, pay grade,
deductions, and net salary. The user can input and process data as he wants.
*/

int paygradeA, paygradeB, paygradeC;
string companyName, employeeName, deptName, position;
int positionNum;
double payRate, taxrate, sss = 200, pagibig = 100, overtimePay, grossSalary, withholdingTax, netSalary;
int hrswork;

cout << "Employee name: ";
getline(cin,employeeName);

cout << "\nCompany name: ";
getline(cin,companyName);

cout << "\nDepartment name: ";
getline(cin,deptName);

cout << "\nPosition: ";
cin >> position;

cout << "Hours worked: ";
cin >> hrswork;

switch(positionNum){
	
	case 'M':
		paygradeA = 5500;
		paygradeB = 6500;
		taxrate = 0.05;
		break;
		
	case 'E':
		paygradeA = 6500;
		paygradeB = 7500;
		taxrate = 0.06;
		break;
		
	case 'T':
		paygradeA = 7500;
		paygradeB = 8500;
		taxrate = 0.07;
		break;
		
	case 'P':
		paygradeA = 10000;
		paygradeB = 10500;
		taxrate = 0.08;
		break;
		
	case 'S':
		paygradeA = 12500;
		paygradeB = 12500;
		taxrate = 0.09;
		break;
		
	default:
        cout << "Invalid position entered. Program will now exit." << endl;
	}
	
	//Beyond 160 is paid 1.5 times of the regular wage rate
    if (hrswork > 160) {
        overtimePay = (hrswork - 160) * (payRate * 1.5);
        grossSalary = (160 * payRate) + overtimePay;
    } else {
        grossSalary = hrswork * payRate;
    }
    
    withholdingTax = grossSalary * taxrate;
    netSalary = grossSalary - (sss + pagibig + withholdingTax);
    
    cout << "\n--------------------------\n";
    cout << "Employee name: " << employeeName << endl;
    cout << "Compant name: " << companyName << endl;
    cout << "Department name: " << deptName << endl;
    cout << "Position: " << position << "(Paygrade A " << paygradeA << " )" << ""<< "(Paygrade B " << paygradeB << " )" << "(Paygrade C " << paygradeC << " )" << endl;
    cout << "Hours worked: " << hrswork << endl;
    cout << "Overtime pay: " << overtimePay << endl;
    cout << "SSS Deduction: " << sss << endl;
    cout << "Pag-IBIG Deduction: " << pagibig << endl;
    cout << "Withholding Tax: " << withholdingTax << endl;
    cout << "Net Salary: " << netSalary << endl;
    cout << "-----------------------------" << endl;
}


void choice6(){
	
	/*Schedule X – Single Taxpayers
Over But not over Of the amt. over
P20,000 P22,000 P5,230 + 38% P20,000
P22,000 P26,000 P5,990 + 40% P22,000
P26,000 P32,000 P7,590 + 45% P26,000
P32,000 P38,000 P10,290 + 50% P32,000
P38,000 P44,000 P13,290 + 55% P38,000
A program may be written to compute the income tax for a single taxpayer if 
her or taxable (X) is given. A number of decision-branching blocks may be used in 
the program to determine the appropriate tax formula used in the computations of the 
income tax.
*/

int x;
double incometax;

cout << "Enter amount of X: ";
cin >> x;

	if(x >= 20000 && x < 22000){
		incometax = x-(5230+(0.38));
			cout << "Taxable income salary: " << x << endl;
			cout << "Income tax: " << incometax << endl;
	}
	
	else if(x >= 2200 && x < 26000){
		incometax = x-(5990+(0.40));
			cout << "Taxable income salary: " << x << endl;
			cout << "Income tax: " << incometax << endl;
	}
	
	else if(x >= 26000 && x < 32000){
		incometax = x-(7590+(0.45));
			cout << "Taxable income salary: " << x << endl;
			cout << "Income tax: " << incometax << endl;
	}
	
	else if(x >= 32000 && x < 38000){
		incometax = x-(10290+(0.50));
			cout << "Taxable income salary: " << x << endl;
			cout << "Income tax: " << incometax << endl;
	}
	
	else if(x >= 38000 && x < 44000){
		incometax = x-(13290+(0.55));
			cout << "Taxable income salary: " << x << endl;
			cout << "Income tax: " << incometax << endl;
	}
}

void choice7(){
	
	/* create an application program that accepts a component’s tolerance 
	readingand determine the specification that should assigned to it. Accumulate 
	tolerance of each specification status. Display 
	specification status, tolerance and the accumulated tolerance of each specification status. */
	
	double tolerance, spacetol = 0, militarytol = 0, commercialtol = 0, toytol = 0; //counter 
	
	// loop until the user wants to stop entering data
	while(true){
		// prompt the user for the tolerance reading
		cout << "Enter tolerance reading: ";
		if(!(cin >> tolerance)){
			break; //exit loop if non-numeric input is entered
		}
	
	string spec; //string specification
	if(tolerance < 0.1){
		spec = "Space exoloration";
		spacetol += tolerance; //accumulate value of space 
	}
	
	else if(tolerance >= 0.1 && tolerance <1){
		spec = "Military grade";
		militarytol += tolerance; //accumulate value of military
	}
	
	else if(tolerance >= 1 && tolerance < 10){
		spec = "Commercial grade";
		commercialtol += tolerance; //accumulate value of commercial
	} 
	
	else {
		spec = "Toy grade";
		toytol += tolerance;	//accumulate value of toy
	}
		cout << "Specification status: " << spec << endl;
        cout << "Tolerance: " << tolerance << endl;
        cout << "Accumulated tolerance:" << endl;
        cout << "Space exploration: " << spacetol << endl;
        cout << "Military grade: " << militarytol << endl;
        cout << "Commercial grade: " << commercialtol << endl;
        cout << "Toy grade: " << toytol << endl;
		
	}
}

void choice8(){
	
	/* A number 1, 2, 3 and 4 represent people types at a local school function; 1 
	represents an infant, 2 represents a child, 3 represents a teenager, and 4 
	represents an adult. Your program should count the number of each 1, 2, 3, and 4 
	and display a list of how many infants, children, teenagers, and adults were at the school 
	function. Display also the average of people at the school. No other integer value should 
	be accepted as valid input, and data entry should stop when a negative value is entered. */
	
	int infantcount = 0, childcount = 0, teenagercount = 0, adultcount = 0, totalcount = 0;
	int input;
	
	cout << "Input 1-4 (1 represents infant, 2 represents child, 3 represents teenager, and 4 represents adult): ";
	cin >> input;
	
	while (input >= 0){
		// check input and increment corresponding counter
		switch(input) {
			
			case 1: 
				infantcount++;
				break;
			
			case 2:
				childcount++;
				break;
			
			case 3:
				teenagercount++;
				break;
				
			case 4:
				adultcount++;
				break;
				
			default:
				cout << "Invalid input. Please enter 1,2,3 or 4.";
				break;
		}
		// prompt user for input again
        cout << "Enter a number 1, 2, 3, or 4 representing the person type (-1 to exit): ";
        cin >> input;
	}
	
	// calculate total number of people and average number of people
    totalcount = infantcount + childcount + teenagercount + adultcount; //total amount of school function's sum
    double avgCount = static_cast<double>(totalcount) / 4.0; //average of sum
    
     // display results
    cout << "Infants: " << infantcount << endl;
    cout << "Children: " << childcount << endl;
    cout << "Teenagers: " << teenagercount << endl;
    cout << "Adults: " << adultcount << endl;
    cout << "Total people: " << totalcount << endl;
    cout << "Average number of people: " << avgCount << endl;
}

void choice9(){
/*Assume that imported goods from foreign countries are classified into four categories for the purpose of levying customs duties. The duty rate for each category is
as follows:
Class No. Class of Goods Value of goods in %
1 foods and beverages 10%
2 clothing and footwear 15%
3 heavy machinery 17.5
4 luxury item 40%

Make a program to compute the appropriate customs duty for a shipment of imported
goods if the value and classification of goods are given as data(letting variable K represents its class number and 
V is the value of goods).The program must check for the class number of goods before the proper custom duty can be computed. 
The formula for customs duty is the value of goods in percent multiplied by the value of goods. Display on the screen the class number, 
value of goods, value of goods in percent, customs duty, the summation of all customs duty, and their average. You are warned to trap your 
program and input data as long as you want.
*/

    // initialize variables
    int k;
    double v, duty, total_duty = 0.0;
    int count = 0;

    // input loop
    while (true) {
        // prompt for input
        cout << "Enter class number (1-4) and value of goods (or enter 0 to exit): ";
        cin >> k;
        if (k == 0) {
            break;
        }
        cin >> v;

        // compute duty
        switch (k) {
            case 1:
                duty = 0.1 * v;
                break;
            case 2:
                duty = 0.15 * v;
                break;
            case 3:
                duty = 0.175 * v;
                break;
            case 4:
                duty = 0.4 * v;
                break;
            default:
                cout << "Invalid class number. Try again." << endl;
                continue;
        }

        // output results
        cout << fixed << setprecision(2);
        cout << "Class number: " << k << endl;
        cout << "Value of goods: " << v << endl;
        cout << "Value of goods in percent: " << duty/v*100 << "%" << endl;
        cout << "Customs duty: " << duty << endl;

        // update total duty and count
        total_duty += duty;
        count++;

        // prompt for more input
        cout << endl;
    }

    // output total and average duty
    if (count > 0) {
        double avg_duty = total_duty / count;
        cout << fixed << setprecision(2);
        cout << "Total customs duty: " << total_duty << endl;
        cout << "Average customs duty: " << avg_duty << endl;
    } else {
        cout << "No customs duties were computed." << endl;
    }
}

void choice10(){
	
	/*Please type in the total number of data values to be averaged: In response to 
	this prompt, the program should accept a user-entered number, and then use it
	to control the number of times the while loop is executed. So if the user enters 6 in 
	response to the prompt, the program should request an input of six numbers and display 
	the average of the next six numbers entered.
	*/
    int numValues;
    double sum = 0.0;

    cout << "Please enter the total number of data values to be averaged: ";
    cin >> numValues;

    int i = 0;
    while (i < numValues) {
        double value;
        cout << "Enter value " << i+1 << ": ";
        cin >> value;
        sum += value;
        i++;
    }

    double average = sum / numValues;
    cout << "The average is: " << average << endl;
}

int main(){
	
	cout << "Welcome to Basic C++ Program Compilation [PART 2]" << endl;
	cout << "NOTE: The following programs are just basic C++ exercises without application of Object-Oriented Programs (OOP) and Classes (Advanced feature of C++)" << endl;
	
	mainMenu();
	return 0;
}

