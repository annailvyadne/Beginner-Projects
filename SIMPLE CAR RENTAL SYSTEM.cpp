/*	Lianne Francheska S. Deldacan
	Bachelor of Science in Information Technology
	Mapua University - Makati
	Car Rental System
	
*/

#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int login();
void rentcar();

int main(){
	
	login();	
}

struct mycar {
		
		string brand;
	}rentalcar1, rentalcar2, rentalcar3, rentalcar4, rentalcar5, rentalcar6, rentalcar7, rentalcar8, rentalcar9, rentalcar10;
	
void rentcar(){
	
	
	rentalcar1.brand = "Toyota";
	rentalcar2.brand = "BMW";
	rentalcar3.brand = "Hyundai";
	rentalcar4.brand = "Ford";
	rentalcar5.brand = "Mercedes";
	rentalcar6.brand = "Nissan";
	rentalcar7.brand = "Porsche";
	rentalcar8.brand = "Suzuki";
	rentalcar9.brand = "VOlvo";
	rentalcar10.brand = "Tesla";
	string name;
	int choice;
	int accountNumber;
	int IDnumber;
	double cash;
	int decide;

jump:
	system("CLS");	
	cout << "\t\t	****** WELCOME TO CAR RENTAL ******" << endl;
	cout << "\t\t	ENTER 1 - " << rentalcar1.brand << "\n";
	cout << "\t\t	ENTER 2 - " << rentalcar2.brand << "\n";
	cout << "\t\t	ENTER 3 - " << rentalcar3.brand << "\n";
	cout << "\t\t	ENTER 4 - " << rentalcar4.brand << "\n";
	cout << "\t\t	ENTER 5 - " << rentalcar5.brand << "\n";
	cout << "\t\t	ENTER 6 - " << rentalcar6.brand << "\n";
	cout << "\t\t	ENTER 7 - " << rentalcar7.brand << "\n";
	cout << "\t\t	ENTER 8 - " << rentalcar8.brand << "\n";
	cout << "\t\t	ENTER 9 - " << rentalcar9.brand << "\n";
	cout << "\t\t	ENTER 10 - " << rentalcar10.brand << "\n";
	cout << "\t\t	************************************" << endl;
	cout << "SELECT A CHOICE: ";
	cin >> choice;
	
	if(choice == 1){
		
		system("CLS");
		cout << "\t\t	-----------------------------" << endl;
		cout << "\t\t	   YOU HAVE SELECTED TOYOTA   " << endl;
		cout << "\t\t	-----------------------------" << endl;
		
		cout << "\t\t	Model: 2016MD\n";
		cout << "\t\t	Color: Red\n";
		cout << "\t\t	Max speed: 100km/h\n";
		cout << "\t\t	Price: PHP 100\n";
		cout << "\t\t	Date: 2010\n"; 
		
		cout << "\t\t	Do you want to rent this car? [1] yes [2] no [3] exit: ";
		cin >> decide;
		
		if(decide == 1){
			
				system("CLS");
				cout << "Please provide the following details for identification\n";
	
				cout << "Name: ";
				cin >> ws;
				getline(cin,name);
	
				cout << "\nAccount Number: ";
				cin >> accountNumber;
	
				cout << "\nID Number: ";
				cin >> IDnumber;
	
				cout << "\nCash: ";
				cin >> cash;
	
				if(cash >= 100){
					cout << "You rent a car successfully!" << endl;
					
					system("PAUSE");
					system("CLS");
					cout << "\nCustomer Account Details Confirmation: " << endl;
					cout << "\nCar Brand: Toyota";
					cout << "\nName: " << name;
					cout << "\nAccount Number: " << accountNumber;
					cout << "\nID Number: " << IDnumber;
					cout << "\nYou paid PHP " << cash << " today. Thank you for your service!";
				}
	
				else if(cash < 100){
					cout << "Cash is insufficient, you cannot avail the car";
					system("PAUSE");
				}
			}
		
		else if(decide == 2){
			
			goto jump;
			
		}
		
		else if(decide == 3){
			cout << "Thank you for using the program...";
		}
			
	}
	
	else if(choice == 2){
		
		system("CLS");
		cout << "\t\t	-----------------------------" << endl;
		cout << "\t\t	    YOU HAVE SELECTED BMW      " << endl;
		cout << "\t\t	-----------------------------" << endl;
		
		cout << "\t\t	Model: 2018AS\n";
		cout << "\t\t	Color: black\n";
		cout << "\t\t	Max speed: 150 Km/h\n";
		cout << "\t\t	Price: PHP 200\n";
		cout << "\t\t	Date: 2012\n"; 
		
		cout << "\t\t	Do you want to rent this car? [1] yes [2] no [3] exit: ";
		cin >> decide;
		
		if(decide == 1){
			
				system("CLS");
				cout << "Please provide the following details for identification\n";
	
				cout << "Name: ";
				cin >> ws;
				getline(cin,name);
	
				cout << "\nAccount Number: ";
				cin >> accountNumber;
	
				cout << "\nID Number: ";
				cin >> IDnumber;
	
				cout << "\nCash: ";
				cin >> cash;
	
				if(cash >= 200){
		
					cout << "You rent a car successfully!" << endl;
					system("PAUSE");
					system("CLS");
					
					cout << "\nCustomer Account Details Confirmation: " << endl;
					cout << "\nCar brand: BMW";
					cout << "\nName: " << name;
					cout << "\nAccount Number: " << accountNumber;
					cout << "\nID Number: " << IDnumber;
					cout << "\nYou paid PHP " << cash << " today. Thank you for your service!";
				}
	
				else if(cash < 200){
					cout << "Cash is insufficient, you cannot avail the car";
					system("PAUSE");
				}
		}
		
		else if(decide == 2){
			
			goto jump;
			
		}
		
		else if(decide == 3){
			cout << "Thank you for using the program...";
		}
	}
	
	else if(choice == 3){
		
		system("CLS");
		cout << "\t\t	-----------------------------" << endl;
		cout << "\t\t	  YOU HAVE SELECTED HYUNDAI  " << endl;
		cout << "\t\t	-----------------------------" << endl;
		
		cout << "\t\t	Model: 2018DS\n";
		cout << "\t\t	Color: yellow\n";
		cout << "\t\t	Max speed: 150 Km/h\n";
		cout << "\t\t	Price: PHP 300\n";
		cout << "\t\t	Date: 2013\n"; 
		
		cout << "\t\t	Do you want to rent this car? [1]yes [2]no [3]exit: ";
		cin >> decide;
		
		if(decide == 1){
			
				system("CLS");
				cin >> ws;
				cout << "Please provide the following details for identification\n";
	
				cout << "Name: ";
				getline(cin,name);
	
				cout << "\nAccount Number: ";
				cin >> accountNumber;
	
				cout << "\nID Number: ";
				cin >> IDnumber;
	
				cout << "\nCash: ";
				cin >> cash;
	
				if(cash >= 300){
		
				cout << "You rent a car successfully!" << endl;
				system("PAUSE");
				system("CLS");
				
				cout << "\nCustomer Account Details Confirmation: " << endl;
				cout << "\nCar brand: Hyundai";
				cout << "\nName: " << name;
				cout << "\nAccount Number: " << accountNumber;
				cout << "\nID Number: " << IDnumber;
				cout << "\nYou paid PHP " << cash << " today. Thank you for your service!";
				}
				}
	
				else if(cash < 300){
					cout << "Cash is insufficient, you cannot avail the car";
					system("PAUSE");
				}
		
		
		else if(decide == 2){
			
			goto jump;
			
		}
		
		else if(decide == 3){
			cout << "Thank you for using the program...";
	}
	
}
	else if(choice == 4){
		
		system("CLS");
		cout << "\t\t	-----------------------------" << endl;
		cout << "\t\t	    YOU HAVE SELECTED FORD 	 " << endl;
		cout << "\t\t	-----------------------------" << endl;
		
		cout << "\t\t	Model: 2017LA\n";
		cout << "\t\t	Color: Blue\n";
		cout << "\t\t	Max speed: 170 Km/h\n";
		cout << "\t\t	Price: PHP 400\n";
		cout << "\t\t	Date: 2014\n"; 
		
		cout << "\t\t	Do you want to rent this car? [1] yes \ [2] no \ [3] exit: ";
		cin >> decide;
		
		if(decide == 1){
			
			system("CLS");
			cout << "Please provide the following details for identification\n";
	
				cout << "Name: ";
				cin >> ws;
				getline(cin,name);
	
				cout << "\nAccount Number: ";
				cin >> accountNumber;
	
				cout << "\nID Number: ";
				cin >> IDnumber;
	
				cout << "\nCash: ";
				cin >> cash;
	
				if(cash >= 400){
		
				cout << "You rent a car successfully!" << endl;
				
				system("PAUSE");
				system("CLS");
				
				cout << "\nCustomer Account Details Confirmation: " << endl;
				cout << "\nCar brand: Ford";
				cout << "\nName: " << name;
				cout << "\nAccount Number: " << accountNumber;
				cout << "\nID Number: " << IDnumber;
				cout << "\nYou paid PHP " << cash << " today. Thank you for your service!";
				
					}
				}
	
				else if(cash < 400){
					cout << "Cash is insufficient, you cannot avail the car";
					system("PAUSE");
				}
		
		else if(decide == 2){
			
			goto jump;
			
		}
		
		else if(decide == 3){
			cout << "Thank you for using the program...";
		}
	
	
	else if(choice == 5){
		
		system("CLS");
		cout << "\t\t	-----------------------------" << endl;
		cout << "\t\t	 YOU HAVE SELECTED MERCEDES " << endl;
		cout << "\t\t	-----------------------------" << endl;
		
		cout << "\t\t	Model: 2018OW\n";
		cout << "\t\t	Color: Silver\n";
		cout << "\t\t	Max speed: 180 Km/h\n";
		cout << "\t\t	Price: PHP 500\n";
		cout << "\t\t	Date: 2015\n"; 
		
		cout << "Do you want to rent this car? [1] yes \ [2] no \ [3] exit: ";
		cin >> decide;
		
		if(decide == 1){
			
			system("CLS");
			cout << "Please provide the following details for identification\n";
	
				cout << "Name: ";
				cin >> ws;
				getline(cin,name);
	
				cout << "\nAccount Number: ";
				cin >> accountNumber;
	
				cout << "\nID Number: ";
				cin >> IDnumber;
	
				cout << "\nCash: ";
				cin >> cash;
	
				if(cash >= 500){
		
				cout << "You rent a car successfully!" << endl;
				
				system("PAUSE");
				system("CLS");
				
				cout << "\nCustomer Account Details Confirmation: " << endl;
				cout << "\nCar brand: Mercedes";
				cout << "\nName: " << name;
				cout << "\nAccount Number: " << accountNumber;
				cout << "\nID Number: " << IDnumber;
				cout << "\nYou paid PHP " << cash << " today. Thank you for your service!";
					}
				}
	
				else if(cash < 500){
					cout << "Cash is insufficient, you cannot avail the car";
					system("PAUSE");
				}
		}
		
		else if(decide == 2){
			
			goto jump;
			
		}
		
		else if(decide == 3){
			cout << "Thank you for using the program...";
		}
		
	}
	
	else if(choice == 6){
		
		system("CLS");
		cout << "\t\t	-----------------------------" << endl;
		cout << "\t\t	   YOU HAVE SELECTED NISSAN   " << endl;
		cout << "\t\t   -----------------------------" << endl;
		
		cout << "\t\t	Model: 2005Ps\n";
		cout << "\t\t	Color: Silver\n";
		cout << "\t\t	Max speed: 190 Km/h\n";
		cout << "\t\t	Price: PHP 600\n";
		cout << "\t\t	Date: 2016\n"; 
		
		cout << "\t\t	Do you want to rent this car? [1] yes \ [2] no \ [3] exit: ";
		cin >> decide;
		
		if(decide == 1){
			
			system("CLS");
			cout << "Please provide the following details for identification\n";
	
				cout << "Name: ";
				cin >> ws;
				getline(cin,name);
	
				cout << "\nAccount Number: ";
				cin >> accountNumber;
	
				cout << "\nID Number: ";
				cin >> IDnumber;
	
				cout << "\nCash: ";
				cin >> cash;
	
				if(cash >= 600){
		
				cout << "You rent a car successfully!" << endl;
				
				system("PAUSE");
				system("CLS");
				
				cout << "\nCustomer Account Details Confirmation: " << endl;
				cout << "\nCar brand: Nissan";
				cout << "\nName: " << name;
				cout << "\nAccount Number: " << accountNumber;
				cout << "\nID Number: " << IDnumber;
				cout << "\nYou paid PHP " << cash << " today. Thank you for your service!";
					}
				}
	
				else if(cash < 600){
					cout << "Cash is insufficient, you cannot avail the car";
					system("PAUSE");
				}
		
		}else if(decide == 2){
			
			goto jump;
			
		}
		
		else if(decide == 3){
			cout << "Thank you for using the program...";
		}
		
	else if(choice == 7){
		
		system("CLS");
		cout << "\t\t	-----------------------------" << endl;
		cout << "\t\t	  YOU HAVE SELECTED PORSCHE  " << endl;
		cout << "\t\t	-----------------------------" << endl;
		
		cout << "\t\t	Model: 2008PW\n";
		cout << "\t\t	Color: Black\n";
		cout << "\t\t	Max speed: 200 Km/h\n";
		cout << "\t\t	Price: PHP 700\n";
		cout << "\t\t	Date: 2017\n"; 
		
		cout << "\t\t	Do you want to rent this car? [1] yes \ [2] no \ [3] exit: ";
		cin >> decide;
		
		if(decide == 1){
			
			system("CLS");
			cout << "Please provide the following details for identification\n";
	
				cout << "Name: ";
				cin >> ws;
				getline(cin,name);
	
				cout << "\nAccount Number: ";
				cin >> accountNumber;
	
				cout << "\nID Number: ";
				cin >> IDnumber;
	
				cout << "\nCash: ";
				cin >> cash;
	
				if(cash >= 700){
		
				cout << "You rent a car successfully!" << endl;
				
				system("PAUSE");
				system("CLS");
				
				cout << "\nCustomer Account Details Confirmation: " << endl;
				cout << "\nCar brand: Porsche";
				cout << "\nName: " << name;
				cout << "\nAccount Number: " << accountNumber;
				cout << "\nID Number: " << IDnumber;
				cout << "\nYou paid PHP " << cash << " today. Thank you for your service!";
					}
				}
	
				else if(cash < 700){
					cout << "Cash is insufficient, you cannot avail the car";
					system("PAUSE");
				}
		}
		
		else if(decide == 2){
			
			goto jump;
			
		}
		
		else if(decide == 3){
			cout << "Thank you for using the program...";
		}
	
	else if(choice == 8){
		
		system("CLS");
		cout << "\t\t	-----------------------------" << endl;
		cout << "\t\t	   YOU HAVE SELECTED SUZUKI   " << endl;
		cout << "\t\t	-----------------------------" << endl;
		
		cout << "\t\t	Model: 2010QW\n";
		cout << "\t\t	Color: Black\n";
		cout << "\t\t	Max speed: 210 Km/h\n";
		cout << "\t\t	Price: PHP 800\n";
		cout << "\t\t	Date: 2018\n"; 
		
		cout << "Do you want to rent this car? [1] yes \ [2] no \ [3] exit: ";
		cin >> decide;
		
		if(decide == 1){
			
			system("CLS");
			cout << "Please provide the following details for identification\n";
	
				cout << "Name: ";
				cin >> ws;
				getline(cin,name);
	
				cout << "\nAccount Number: ";
				cin >> accountNumber;
	
				cout << "\nID Number: ";
				cin >> IDnumber;
	
				cout << "Cash: ";
				cin >> cash;
	
				if(cash >= 800){
		
				cout << "You rent a car successfully!" << endl;
				
				system("PAUSE");
				system("CLS");
				
				cout << "\nCustomer Account Details Confirmation: " << endl;
				cout << "\nCar brand: Suzuki";
				cout << "\nName: " << name;
				cout << "\nAccount Number: " << accountNumber;
				cout << "\nID Number: " << IDnumber;
				cout << "\nYou paid PHP " << cash << " today. Thank you for your service!";
					}
				}
	
				else if(cash < 800){
					cout << "Cash is insufficient, you cannot avail the car";
					system("PAUSE");
				}
		
		else if(decide == 2){
			
			goto jump;
			
		}
		
		else if(decide == 3){
			cout << "Thank you for using the program...";
		}
		
	
	}
	else if(choice == 9){
		
		system("CLS");
		cout << "\t\t	-----------------------------" << endl;
		cout << "\t\t      YOU HAVE SELECTED VOLVO    " << endl;
		cout << "\t\t   -----------------------------" << endl;
		
		cout << "\t\t	Model: 2016SA\n";
		cout << "\t\t	Color: White\n";
		cout << "\t\t	Max speed: 220 Km/h\n";
		cout << "\t\t	Price: PHP 900\n";
		cout << "\t\t	Date: 2019\n"; 
		
		cout << "\t\t	Do you want to rent this car? [1] yes \ [2] no \ [3] exit: ";
		cin >> decide;
		
		if(decide == 1){
			
			system("CLS");
			cout << "Please provide the following details for identification\n";
	
				cout << "Name: ";
				cin >> ws;
				getline(cin,name);
	
				cout << "\nAccount Number: ";
				cin >> accountNumber;
	
				cout << "\nID Number: ";
				cin >> IDnumber;
	
				cout << "\nCash: ";
				cin >> cash;
	
				if(cash >= 900){
		
				cout << "You rent a car successfully!" << endl;
				
				system("PAUSE");
				system("CLS");
				
				cout << "\nCustomer Account Details Confirmation: " << endl;
				cout << "\nCar brand: Volvo";
				cout << "\nName: " << name;
				cout << "\nAccount Number: " << accountNumber;
				cout << "\nID Number: " << IDnumber;
				cout << "\nYou paid PHP " << cash << " today. Thank you for your service!";
					}
				}
	
				else if(cash < 900){
					cout << "Cash is insufficient, you cannot avail the car";
					system("PAUSE");
				}
		
		else if(decide == 2){
			
			goto jump;
			
		}
		
		else if(decide == 3){
			cout << "Thank you for using the program...";
		}
	}
	
	else if(choice == 10){
		
		system("CLS");
		cout << "\t\t	-----------------------------" << endl;
		cout << "\t\t	   YOU HAVE SELECTED VOLVO    " << endl;
		cout << "\t\t	-----------------------------" << endl;
		
		cout << "\t\t	Model: 2017FA\n";
		cout << "\t\t	Color: Black\n";
		cout << "\t\t	Max speed: 230 Km/h\n";
		cout << "\t\t	Price: PHP 1000\n";
		cout << "\t\t	Date: 2020\n"; 
		
		cout << "\t\t	Do you want to rent this car? [1] yes \ [2] no \ [3] exit: ";
		cin >> decide;
		
		if(decide == 1){
			
			system("CLS");
			cout << "Please provide the following details for identification\n";
	
				cout << "Name: ";
				cin >> ws;
				getline(cin,name);
	
				cout << "\nAccount Number: ";
				cin >> accountNumber;
	
				cout << "\nID Number: ";
				cin >> IDnumber;
	
				cout << "\nCash: ";
				cin >> cash;
	
				if(cash >= 1000){
		
				cout << "You rent a car successfully!" << endl;
				
				system("PAUSE");
				system("CLS");
				
				cout << "\nCustomer Account Details Confirmation: " << endl;
				cout << "\nCar brand: Tesla";
				cout << "\nName: " << name;
				cout << "\nAccount Number: " << accountNumber;
				cout << "\nID Number: " << IDnumber;
				cout << "\nYou paid PHP " << cash << " today. Thank you for your service!";
					}
				}
	
				else if(cash < 1000){
					cout << "Cash is insufficient, you cannot avail the car";
					system("PAUSE");
				}
		}
		
		else if(decide == 2){
			
			goto jump;
			
		}
		
		else if(decide == 3){
			cout << "Thank you for using the program...";
		}
	}


int login(){

   string pass ="";
   char ch;
   cout <<"\n\n\n\n\n\n\n\t\t\t\t\t  Simple Car Rental System Login";
   cout << "\n\n\n\n\n\n\n\t\t\t\t\t\tEnter Password: ";
   ch = _getch();
   while(ch != 13){//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "pass"){
      cout << "\n\n\n\n\t\t\t\t\t  Access Granted! Welcome To Our System \n\n";
      system("PAUSE");
      system("CLS");
      rentcar();
      
   }else{
      cout << "\n\n\n\n\t\t\t\t\tAccess Aborted...Please Try Again!!\n";
      system("PAUSE");
      system("CLS");
      login();
   }
}

