#include <iostream>
#include <iomanip>
#include <windows.h>
#include <cctype>
using namespace std;

void mainmenu();

void phptousd(){
	
	char ans;
	double phpamt;
	const double amt = 0.017;
	
	cout << "CAUTION: The currency is based on 11th February 2023, 11:49 UTC" << endl;
	cout << "ENTER AMOUNT IN PESO: PHP ";
	cin >> phpamt;
	
	double usdamt = phpamt * amt;
	
	cout << "PHP to USD: PHP " << phpamt << " = " << "$" << usdamt;
	
	cout << "\nDo you want to continue? [Y/N]: ";
	cin >> ans;
	
	if(ans == 'Y'){
		mainmenu();
	}
	else if(ans == 'N'){
		exit(0);
	}
}

/////////////////////////

void phptojpy(){
	
	char ans;
	double phpamt;
	const double amt = 2.4126;
	
	cout << "CAUTION: The currency is based on 2rd February 2023, Friday" << endl;
	cout << "ENTER AMOUNT IN PESO: PHP ";
	cin >> phpamt;
	
	double jpyamt = phpamt * amt;
	
	cout << "PHP to JPY: PHP " << phpamt << " = " << "JPY " << jpyamt;
	
	cout << "\nDo you want to continue? [Y/N]: ";
	cin >> ans;
	
	if(ans == 'y'){
		mainmenu();
	}
	else if(ans == 'n'){
		exit(0);
	}
}

//////////////////////

void phptocnh(){
	
	char ans;
	double phpamt;
	const double amt = 0.125;
	
	cout << "CAUTION: The currency is based on 11th February 2023, 05:41 UTC" << endl;
	cout << "ENTER AMOUNT IN PESO: PHP ";
	cin >> phpamt;
	
	double cnhamt = phpamt * amt;
	
	cout << "PHP to CNH: PHP " << phpamt << " = " << "CNH " << cnhamt;
	
	cout << "\nDo you want to continue? [Y/N]: ";
	cin >> ans;
	
	if(ans == 'y'){
		mainmenu();
	}
	else if(ans == 'n'){
		exit(0);
	}
}

/////////////////////

void phptoeuro(){
	
	char ans;
	double phpamt;
	const double amt = 0.017175;
	
	cout << "CAUTION: The currency is based on the 11th February 2023, 05:29 UTC" << endl;
	cout << "ENTER AMOUNT IN PESO: PHP ";
	cin >> phpamt;
	
	double euroamt = phpamt * amt;
	
	cout << "PHP to EURO: PHP " << phpamt << " = " << "EURO " << euroamt;
	
	cout << "\nDo you want to continue? [Y/N]: ";
	cin >> ans;
	
	if(ans == 'y'){
		mainmenu();
	}
	else if(ans == 'n'){
		exit(0);
	}
}

///////////////////

void phptoaed(){
	
	char ans;
	double phpamt;
	const double amt = 0.067;
	
	cout << "CAUTION: The currency is based on the 11th February 2023, 08:19 UTC" << endl;
	cout << "ENTER AMOUNT IN PESO: PHP ";
	cin >> phpamt;
	
	double aedamt = phpamt * amt;
	
	cout << "PHP to AED: PHP " << phpamt << " = " << "AED " << aedamt;
	
	cout << "\nDo you want to continue? [Y/N]: ";
	cin >> ans;
	
	if(ans == 'y'){
		mainmenu();
	}
	else if(ans == 'n'){
		exit(0);
	}
}

////////////////

void exitprogram(){
	
	cout << "Thank you for using the program...";
}


void mainmenu(){
	
	int choice;
	
	cout << " ****** WELCOME TO CURRENCY CONVERTER ***** " << endl;
	cout << "	[1] - USD (US DOLLAR)\n";
	cout << "	[2] - JPY (JAPANESE YEN)\n";
	cout << "	[3] - CNH (CHINESE RENMINBI)\n";
	cout << "	[4] - EURO (EURO)\n";
	cout << "	[5] - AED (UNITED ARAB EMIRATES DIRHAM)\n";
	cout << "	[6] - EXIT PROGRAM\n";
	cout << "***********************************************" << endl;
	cout << "CHOICE: ";
	cin >> choice;
	
	switch(choice){
		
		case 1:
			phptousd();
			
			break;
			
		case 2:
			phptojpy();
			
			break;
			
		case 3:
			phptocnh();
			
			break;
			
		case 4:
			phptoeuro();
			
			break;
			
		case 5:
			phptoaed();
			
			break;
			
		case 6:
			exitprogram();
			
			break;
	}
}

int main(){
	mainmenu();
	
	return 0;
}