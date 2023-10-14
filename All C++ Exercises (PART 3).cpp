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
void choice11();
void choice12();

////////////////////////////////////////////////
void choice1(){
	
	/*Write a C++ program to convert Celsius degrees to Fahrenheit. The program 
	should request the starting Celsius value, the number of conversions to be made, 
	and the increment between Celsius values. The display should have appropriate 
	headings and list the Celsius value and the corresponding 
	Fahrenheit value. Use the relationship that Fahrenheit = (9.0 / 5.0) * Celsius +32.0 */
	
    int numConversions;
    double startCelsius, increment;

    cout << "Enter the starting Celsius value: ";
    cin >> startCelsius;

    cout << "Enter the number of conversions to be made: ";
    cin >> numConversions;

    cout << "Enter the increment between Celsius values: ";
    cin >> increment;

    cout << endl << "Celsius" << setw(15) << "Fahrenheit" << endl;

    for (int i = 0; i < numConversions; i++) {
        double celsius = startCelsius + i * increment;
        double fahrenheit = (9.0 / 5.0) * celsius + 32.0;
        cout << setw(6) << fixed << setprecision(2) << celsius << setw(15) << fixed << setprecision(2) << fahrenheit << endl;
    }
}

//////////////////////////////////////

void choice2(){
	
	/*An old Arabian legend has it that a fabulously wealthy but unthinking 
	king agreed to give a beggar 1 cent and double the amount for 64 days. Using 
	this information, write,compile, and run a C++ program that displays how much the 
	king must pay the beggar each day. The output of your program should appear as follows:
	
	Day Amount Owed
	--- -----------
	1 	0.01
	2 	0.02
	3 	0.04
	4..
	5..
	6..	0.64 .
	*/

    double amount = 0.01; // The amount owed on day 1
    cout << "Day\tAmount Owed\n";
    cout << "---\t-----------\n";
    for (int day = 1; day <= 64; day++) {
        cout << day << fixed << setprecision(2) << amount << endl;
        amount *= 2; // Double the amount owed for the next day
    }
}

////////////////////////////////////////

void choice3(){
	
	/*Write, compile, and run a C++ program that converts gallons to liters. The program should 
	display gallons from 10 to 20 in 1-gallon increments and the corresponding liter equivalents. 
	Use the relationship that 1 gallon = 3.785 liters. */
	
    const double GALLON_TO_LITER = 3.785; // Conversion factor
    int gallons = 10; // Starting value for gallons
    while (gallons <= 20) {
        double liters = gallons * GALLON_TO_LITER;
        cout << setw(2) << gallons << " gallons = " << fixed << setprecision(2) << liters << " liters" << endl;
        gallons++; // Increment the number of gallons
    }
}

//////////////////////////////////////

void choice4(){
	
	/*Define an array with a maximum of 20 integer values and fill the array with numbers of your own choosing as 
	intializers. Then write, compile, and run a C++ program that reads the numbers in the array and places all zero and 
	positive numbers in an array named positive and all negative numbers in an array named negative. Finally, have your 
	program display the values in both the positive and negative arrays */
	
	int MAX_VALUES;
	int positive[MAX_VALUES], negative[MAX_VALUES]; // Declare the positive and negative arrays
    int values[MAX_VALUES] = {1, -2, 3, -4, 5, 0, 6, -7, 8, -9, 10, 11, -12, 13, -14, 15, 16, -17, 18, -19}; // Initialize the array
    int posCount = 0, negCount = 0; // Initialize counters for the positive and negative arrays
    for (int i = 0; i < MAX_VALUES; i++) {
        if (values[i] >= 0) {
            positive[posCount++] = values[i];
        } else {
            negative[negCount++] = values[i];
        }
    }
    // Display the positive array
    cout << "Positive values: ";
    for (int i = 0; i < posCount; i++) {
        cout << positive[i] << " ";
    }
    cout << endl;
    // Display the negative array
    cout << "Negative values: ";
    for (int i = 0; i < negCount; i++) {
        cout << negative[i] << " ";
    }
    cout << endl;
}

///////////////////////////////////////////////

void choice5(){
	
	/*Write, compile, and run a C++ program that uses an array declaration statement to initialize the following numbers in an 
	array named slopes: 17.24, 25.63, 5.94, 33.92, 3.71, 32.84, 35.93, 18.24, and 6.92. Your program should locate and display the 
	maximum and minimum values in the array.
*/
	double slopes[] = {17.24, 25.63, 5.94, 33.92, 3.71, 32.84, 35.93, 18.24, 6.92}; // Initialize the slopes array
    int size = sizeof(slopes)/sizeof(slopes[0]); // Determine the size of the array
    double max = slopes[0], min = slopes[0]; // Initialize variables for the maximum and minimum values
    for (int i = 1; i < size; i++) {
        if (slopes[i] > max) {
            max = slopes[i];
        }
        if (slopes[i] < min) {
            min = slopes[i];
        }
    }
    cout << "Maximum slope: " << max << endl; // Display the maximum value
    cout << "Minimum slope: " << min << endl; // Display the minimum value

}

///////////////////////////////////

void choice6(){
	
	/*Write, compile, and run a C++ program that reads a list of double-precision grades from the keyboard into an array
	 named grade. The grades are to be counted as they’re read, and entry is to be terminated when a negative value has been 
	 entered. After all grades have been input, your program should find and display the sum and average of the grades. The 
	 grades should then be listed with an asterisk (*) placed in front of each grade that’s below the average. 

	Display also each grade and its letter equivalent letter grade using the following scale:
	Greater than or equal to 90 = A
	Greater than or equal to 80 and less than 90 = B
	Greater than or equal to 70 and less than 80 = C
	Greater than or equal to 60 and less than 70 = D
	Less than 60 = F
	*/

    const int MAX_SIZE = 100;
    double grade[MAX_SIZE];
    int numGrades = 0;
    double sum = 0.0;
    double average;
    double letterGrade;

    // Read in grades
    cout << "Enter grades (negative value to terminate): ";
    cin >> grade[numGrades];
    while (grade[numGrades] >= 0 && numGrades < MAX_SIZE) {
        sum += grade[numGrades];
        numGrades++;
        cin >> grade[numGrades];
    }

    // Calculate average
    if (numGrades > 0) {
        average = sum / numGrades;

        // Display sum and average
        cout << "Sum: " << sum << endl;
        cout << "Average: " << average << endl;

        // Display grades with asterisks for below-average grades and their letter grade equivalent
        cout << "Grades: " << endl;
        for (int i = 0; i < numGrades; i++) {
            if (grade[i] < average) {
                cout << "*";
            }
            letterGrade = grade[i] >= 90 ? 'A' : grade[i] >= 80 ? 'B' : grade[i] >= 70 ? 'C' : grade[i] >= 60 ? 'D' : 'F';
            cout << grade[i] << " (" << letterGrade << ")" << endl;
        }
    } else {
        cout << "No grades entered." << endl;
    }
}

////////////////////////////////////////////
void choice7(){
	
	/*Write, compile, and run a C++ program to input the following values into an array 
	named prices: 10.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, and 17.59. After the 
	data has been entered, have your program display the values, its totals, and their average. Display it in the following form: 
	10.95 	16.32 	12.15
	8.22 	15.98 	26.22
	13.54 	6.45 	17.59
	Totals : 127.4
	Average : 14.56*/
	
	int ROWS, COLS;
	double prices[ROWS][COLS] = {
        		 {10.95, 16.32, 12.15},
        		 {8.22, 15.98, 26.22},
        		 {13.54, 6.45, 17.59}};
    
    double total = 0.0;
    double average;
    int count = 0;

    // Display prices in row-column format
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << prices[i][j] << "\t";
            total += prices[i][j];
            count++;
        }
        cout << endl;
    }

    // Calculate and display totals and average
    average = total / count;
    cout << "Totals: " << total << endl;
    cout << "Average: " << average << endl;
	
}

////////////////////////////////////////////
void choice8(){
	
/* A well-regarded manufacturer of widgets has been losing 4% of its sales each year.
The company’s annual profit is 10% of sales. This year, the company has had $10 million in 
sales and a profit of $1 million. Determine the expected sales and profit for the next 10 
years. 
*/

	int years;
	double sales = 10000000.00;
	double profit = 1000000.00;
	double total_sales;
	double total_profit;
	
	
	cout << "SALES AND PROFIT PROJECTION" << endl;

	for(int years=0; years<10; years++){
		
		sales *= 0.96;
		profit = sales * 0.1;
		
		total_sales += sales;
		total_profit += profit;
		
		cout << "Years: " << years << ": Expected sales = PHP " << sales << ", expected profit = $" << profit << endl;
		cout << "Total: $ " << total_sales << "\t\t $ " << total_profit << endl;
	}
}

//////////////////////////////////////////////

void choice9(){
	
	/* Your professor has asked you to write a C++ program that determines grades for five
students at the end of the semester. For each student, identified by an integer number, 
four exam grades must be kept, and two final grade averages must be computed. The first 
grade average is simply the average of all four grades. The second-grade average is computed 
by weighting the four grades as follows: The first grade gets a weight of 0.2, the second grade 
gets a weight of 0.3, the third grade gets a weight of 0.3, and the fourth grade gets a weight of 
0.2. That is, the final grade is computed as follows: 0.2*grade1 + 0.3*grade2 + 0.3*grade3 
+0.2*grade4. Using this information, construct a 5-by-7 two-dimensional array, in which the 
first column is used for the student number, the next four columns for the grades, and the last 
two columns for the computed final grades. The program’s output should be a display of the data 
in the completed array. */

void main9(){
	const int NUM_STUDENTS = 5;
	const int NUM_GRADES = 4;
	const int NUM_COLUMNS = 7;
    double grades[NUM_STUDENTS][NUM_COLUMNS];
    
    // Input grades for each student
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << "Enter grades for student " << i+1 << ": ";
        for (int j = 0; j < NUM_GRADES; j++) {
            cin >> grades[i][j+1];
            grades[i][0] = i+1; // Set student number in first column
        }
        
        // Calculate average grades
        double avg1 = 0;
        double avg2 = 0;
        for (int j = 0; j < NUM_GRADES; j++) {
            avg1 += grades[i][j+1];
            switch(j) {
                case 0:
                    avg2 += grades[i][j+1] * 0.2;
                    break;
                case 1:
                case 2:
                    avg2 += grades[i][j+1] * 0.3;
                    break;
                case 3:
                    avg2 += grades[i][j+1] * 0.2;
                    break;
            }
        }
        avg1 /= NUM_GRADES;
        avg2 /= NUM_GRADES;
        grades[i][NUM_COLUMNS-2] = avg1;
        grades[i][NUM_COLUMNS-1] = avg2;
    }
    
    // Output grades table
    cout << endl << setw(6) << "Stud" << setw(6) << "G1" << setw(6) << "G2" 
         << setw(6) << "G3" << setw(6) << "G4" << setw(10) << "Avg1" 
         << setw(10) << "Avg2" << endl;
    for (int i = 0; i < NUM_STUDENTS; i++) {
        for (int j = 0; j < NUM_COLUMNS; j++) {
            cout << setw(6) << fixed << setprecision(2) << grades[i][j];
        }
        cout << endl;
    	}
	}
}

////////////////////////////////////////////
void choice10(){
	
/* The answers to a true-false test are as follows: T T F F T. Given a two-dimensional 
answer array, in which each row corresponds to the answers provided on one test, write a 
function that accepts the two-dimensional array and number of tests as parameters and returns 
a one-dimensional array containing the grades for each test. 
(Each question is worth 5 points so themaximum possible grade is 25.) */

const int NUM_QUESTIONS = 5;

// function to compute the grade for a single test
int computeGrade(bool answers[]) {
    int grade = 0;
    for (int i = 0; i < NUM_QUESTIONS; i++) {
        if (answers[i]) {
            grade += 5;
        }
    }
    return grade;
}

// function to compute the grades for all tests
void computeGrades(bool answers[][NUM_QUESTIONS], int numTests, int grades[]) {
    for (int i = 0; i < numTests; i++) {
        grades[i] = computeGrade(answers[i]);
    }
}

// function to display the grades for all tests
void displayGrades(int grades[], int numTests) {
    for (int i = 0; i < numTests; i++) {
        cout << "Test " << i+1 << ": " << grades[i] << endl;
    }
}
}

void main10() {
    // input answers for each test
    bool answers[3][NUM_QUESTIONS] = {{true, true, false, false, true},
                                       {false, false, true, true, true},
                                       {true, false, false, true, true}};
    int numTests = 3;
    int grades[numTests];

    // compute and display the grades for each test
    computeGrades(answers, numTests, grades);
    displayGrades(grades, numTests);
}

//////////////////////////////////////////////
void choice11(){
	
	/* Create a two-dimensional list of integer part numbers and quantities of each part 
	in stock, and write a function that displays data in the array in decreasing part number. 
	No more than 100 different parts are being tracked. Test your program with the following 
	data. Use balloon sort. */
	
	const int MAX_PARTS = 100;

void display_inventory(int parts[][2], int num_parts) {
    // sort the array in descending order of part number using bubble sort
    for (int i = 0; i < num_parts - 1; i++) {
        for (int j = 0; j < num_parts - i - 1; j++) {
            if (parts[j][0] < parts[j + 1][0]) {
                swap(parts[j][0], parts[j + 1][0]);
                swap(parts[j][1], parts[j + 1][1]);
            }
        }
    }
    
    // display the sorted array
    cout << "Part Number   Quantity" << endl;
    for (int i = 0; i < num_parts; i++) {
        cout << setw(7) << parts[i][0] << setw(15) << parts[i][1] << endl;
    }
}

void main11() {
    int inventory[MAX_PARTS][2] = {
        {2020, 500},
        {1001, 62},
        {949, 85},
        {1050, 33},
        {867, 125},
        {346, 125},
        {1025, 105},
        {454, 79},
        {1500, 350},
        {150, 80}
    };
    
    display_inventory(inventory, 10);
}

//////////////////////////////////////////
void choice12(){
	
	/*Write a function named rightTriangle() that accepts the lengths of two sides
of a right triangle as the arguments a and b. The subroutine should determine and 
return the hypotenuse, c, of the triangle. (Hint: Use Pythagoras’ theorem, c2 = a2 + b2.) 
The main() function should call rightTriangle() correctly and display the value the function 
returns.
*/

// Function to calculate the hypotenuse of a right triangle
double rightTriangle(double a, double b) {
    double c = sqrt(a * a + b * b);
    return c;
}

void main12() {
    double a, b;
    
    // Read in the two sides of the right triangle
    cout << "Enter the lengths of the two sides of the right triangle:" << endl;
    cin >> a >> b;
    
    // Call the rightTriangle function to calculate the hypotenuse
    double c = rightTriangle(a, b);
    
    // Output the result
    cout << "The hypotenuse of the triangle is: " << c << endl;
}

void mainMenu(){
	
	int choice;
	
	cout << "PROGRAMS\n";
	cout << "[1] Celsius to Farenheit Conversion\n";
	cout << "[2] Beggar\n";
	cout << "[3] Gallons to Liter\n";
	cout << "[4] Array\n";
	cout << "[5] Array declaration statement\n";
	cout << "[6] List of double-precision grades in array\n";
	cout << "[7] Array prices\n";
	cout << "[8] Sales of Manufacture\n";
	cout << "[9] Student's Grades with a twist\n";
	cout << "[10] True or False\n";
	cout << "[11] 2-D Stock\n";
	cout << "[12] Triangle\n";
	
	cout << "Select your choice: ";
	cin >> choice;
	
	switch(choice){
		
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
			
		case 11:
			
			choice11();
			
			break;
		
		case 12:
			
			choice12();
			
			break;
	}
}

int main(){
	
	cout << "Welcome to Basic C++ Program Compilation [PART 3]" << endl;
	cout << "NOTE: The following programs are just basic C++ exercises without application of Object-Oriented Programs (OOP) and Classes (Advanced feature of C++)" << endl;

	mainMenu();
	return 0;
}