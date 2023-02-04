
/*
* Programmer: DELDACAN, Lianne Francheska S.
* Date Created: 02/04/2023
* Program: BSIT
* Course / Section: CSS122L/AM4
* Purpose: This program will calculate the speed from distance over time.
(or copy and paste the given problem)
*/

#include <iostream>
#include <iomanip>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;
#include <conio.h>
#include <windows.h>
#include <fstream>

////////////////////////////////
// for displaying the date in mm-dd-yyyy format
struct datePurchase 
{
    int month;
    int day;
    int year;
};
// each column of the recorded shoe file
struct ShoeRec 
{
	//variable declaration
    string StockNumber;
    string ShoeType;
    string ShoeBrand;
    datePurchase DateBought;
    int shoeQuantity;
    double shoeCost;
    double TotalValue;
};
string sn;       // the stock number variable
int m, d, y, sq; // the month day and year as well as the shoe quantity
double sc;       // the shoecost

////////////////////////////////
//for entering the values of each field/member of the structure
void inputShoe(ShoeRec getshoe[]); 
//for computing the value of TotalValue
void compVal(ShoeRec tValue[]);
//size will be constant int 10 as stated in the pdf file to repeat    
const int size = 10;              
int i;
int main()
{
    ofstream dout;
    dout.open("shoeInventory.txt"); // for creating and using the shoe text file
    ShoeRec Shoe[size];
    inputShoe(Shoe);
    compVal(Shoe);
    
    // displays the categories in the file
    dout << "StockNumber" << setw(11);
    dout << "ShoeType" << setw(11);
    dout << "ShoeBrand" << setw(14);
    dout << "DatePurchase" << setw(16);
    dout << "ShoeQuantity" << setw(11);
    dout << "ShoeCost" << setw(12);
    dout << "TotalValue" << endl;
    
    for (i = 0; i < size; i++) // for loop in order to display the inputs in the file
    {
        dout << Shoe[i].StockNumber << setw(11);
        dout << Shoe[i].ShoeType << setw(10);
        dout << Shoe[i].ShoeBrand << setw(8);
        dout << Shoe[i].DateBought.month << "-";
        dout << Shoe[i].DateBought.day << "-";
        dout << Shoe[i].DateBought.year << setw(10);
        dout << Shoe[i].shoeQuantity << setw(16) << "Php";
        dout << fixed << setprecision(2) << Shoe[i].shoeCost << setw(6) << "Php";
        dout << fixed << setprecision(2) << Shoe[i].TotalValue << endl;
    }
}
//////////////////////////////////
void inputShoe(ShoeRec getshoe[])
{
    for (i = 0; i < size; i++) // repeats the process 10 times to get 10 records
    {
        system("cls");
        cout << "Enter " << 10 - i << " shoe records: " << endl;
        cout << "Product[" << i + 1 << "]" << endl;
        do
        {
            try	//try-catch method
            {
            	//asks the user to input stock number
                cout << "Enter stock number: ";	
                getline(cin, sn);
                /*if function sn.length is not equal to given 8, 
				it will throw the function*/
                if (sn.length() != 8)	
                    throw sn;	
                else
                //the value of sn is stored in getshoe[i].StockNumber
                    getshoe[i].StockNumber = sn;	
            }
            catch (string e)	//catching the string e
            {
                cout << e << " is invalid" << endl;
                cout << "Number should be 8 digits long" << endl;
            }
        } while (sn.length() != 8);
        
        // shoe type
        cout << "Enter shoe type: ";
        getline(cin, getshoe[i].ShoeType);
        
        // shoe brand
        cout << "Enter shoe brand: ";	//asks the user to prompt shoe brand
        getline(cin, getshoe[i].ShoeBrand);		
        // month
        do	//do-while loop
        {
            try	//try-catch method
            {
            	//asks the user to prompt month
                cout << "Enter month when bought: ";	
                cin >> m;
                if (m < 1 || m > 12)
                    throw m;	//if false, throw m
                else
                //if true, value of m is stored in getshoe[i].DateBought.month
                    getshoe[i].DateBought.month = m;	
            }
            catch (int e)	//if any other number is entered other than 1-12 
            {
                cout << e << " is invalid" << endl;
                cout << "Enter a proper date" << endl;
            }
            /*if m is less than 1 or greater than 12, 
			then it's true so it will loop to ask user 
			to try again until the value is valid*/
        } while (m < 1 || m > 12);	 
        // day
        do
        {
            try
            {
                cout << "Enter day when bought: ";	//asks the user to prompt day
                cin >> d;
                if (d < 1 || d > 31)
				//if result is false, then d is thrown	
                    throw d;	
                else
                //if true, the value of d is stored in getshoe[i].DateBought.day
                    getshoe[i].DateBought.day = d;	
            }
            catch (int e)
            {
                cout << e << " is invalid" << endl;	
                cout << "Enter a proper date" << endl;
            }
        } while (d < 1 || d > 31);	
        // year
        do
        {
            try
            {
            	//asks the user to prompt year
                cout << "Enter year when bought: ";		 
                cin >> y;
                //checks if year is within 2000 to 2021
                if (y < 2000 || y > 2021)	
                //if year is less than 2000 or greather than 2021, then throw y
                    throw y;	
                else
                /*else, if true, the value of y is stored 
				in getshoe[i].DateBought.year*/
                    getshoe[i].DateBought.year = y;	
            }
            catch (int e)
            {
            	//if any other number is entered other than 1-12
                cout << e << " is invalid" << endl;	 
                cout << "Select a year from 2000 to 2021" << endl;
            }
        } while (y < 2000 || y > 2021);	 
        // shoe quantity
        do
        {
            try
            {
            	//asks the user to enter number of shoe
                cout << "Enter shoe quantity: ";	
                cin >> sq;
                if (sq < 5 || sq > 50)	
                //if sq is less than 5 or greater than 50, then it's false, it will throw sq
                    throw sq;	
                else
                //if true, the value of sq is stored in getshoe[i].shoeQuantity
                    getshoe[i].shoeQuantity = sq; 
            }
            catch (int e)
            {
                cout << e << " is invalid" << endl;	 
                cout << "Select a quantity from 5 to 50" << endl;
            }
            //if true because sq is less than 5 or greater than 50, then it will loop
        } while (sq < 5 || sq > 50);	
        // shoe cost
        do
        {
            try
            {
                cout << "Enter shoe cost: ";	//asks the user to prompt shoe cost
                cin >> sc;
                if (sc < 0)	//if the input is less than 0
                    throw sc; //then throw sc because it's false
                else
                //or if it's true, the value of sc is stored in getshoe[i].shoeCost
                    getshoe[i].shoeCost = sc;	
            }
            catch (double e)
            {
                cout << e << " is invalid" << endl;	
                cout << "Shoe cost cannot be a negative" << endl;
            }
        } while (sc < 0);
        cin.ignore();
    }
}
//////////////////////////////////
void compVal(ShoeRec tValue[])
{
    for (i = 0; i < size; i++)	//for loop method
    {
    	/*to get the tValue[i].TotalValue, the tValue[i].shoeQuantity 
		is multiplied in tValue[i].shoeCost */
        tValue[i].TotalValue = (tValue[i].shoeQuantity) * (tValue[i].shoeCost);	
    }
}
