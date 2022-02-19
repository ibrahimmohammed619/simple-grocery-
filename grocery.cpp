#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std ;

//simple grocery system

void perpiad_method(){
	// this for is products price and amount of money ;
	int n = 4;
	int price[n] = {150 , 200 , 50 , 70};
	cout << "HI SIR WHICH TYPE YOU WONT TO PAY SIR  ?" << "\n";
	int pay ;
	cout << "1 - Credit Card " << "\n"; 
	cout << "2 - Cash "  << "\n";
	cout << "Enter >> " ;
	int num;
	cin  >> num;
	switch(num){
		case 1:	
		int amount ;
		cout << "ENTER THE AMOUNT OF PRODUCTS : ";
		cin >> amount ;
		cout << "pay method >> ";
		cin  >> pay ; 
		if (pay == 1){
			cout << "WE WILL PULL FROM YOUR ACCOUNT" << "\n";
			cout << "PRODUCTS TYPE : COCKCOLA " <<"\n";
			cout << "THE PULL MONRY IS : " << amount * price[0] << "$";
			cout << "THANKS SIR !" << "\n" ;
		}
		else if(pay == 2){
			cout << "YOU HAVE TO PAY : " << amount * price[0] << "$";		
		}
		break ;
		case 2 :
		cout << "ENTER THE AMOUNT OF PRODUCTS : ";
		cin  >> amount ;
		cout << "pay method >> ";
		cin  >> pay ; 
		if (pay == 1){
			cout << "WE WILL PULL FROM YOUR ACCOUNT \n";
			cout << "PRODUCTS TYPE : BISCUIT " <<"\n";
			cout << "YOUR BILLING IT THE MONRY  : " << amount * price[1] << "$";
			cout << "THANKS SIR !" << "\n" ;
		}
		else if(pay == 2){
			cout << "YOU HAVE TO PAY : " << amount * price[1] << "$";		
		}
		break ;
		case 3:	
		cout << "ENTER THE AMOUNT OF PRODUCTS : ";
		cin >> amount ;
		cout << "pay method >> ";
		cin  >> pay ; 
		if (pay == 1){
			cout << "WE WILL PULL FROM YOUR ACCOUNT \n";
			cout << "PRODUCTS TYPE : SWEET " <<"\n";
			cout << "THE PULL MONRY IS : " << amount * price[2] << "$";
			cout << "THANKS SIR !" << "\n";
		}
		else if(pay == 2){
			cout << "YOU HAVE TO PAY : " << amount * price[2] <<"$";		
		}
		break ;
		case 4:
		cout << "ENTER THE AMOUNT OF PRODUCTS : ";
		cin >> amount ;
		cout << "pay method >> ";
		cin  >> pay ; 
		if (pay == 1){
			cout << "WE WILL PULL FROM YOUR ACCOUNT" << "\n";
			cout << "PRODUCTS TYPE : SWEET " << "\n";
			cout << "THE PULL MONRY IS : " << amount * price[2] << "$" << "\n";
			cout << "THANKS SIR !\n" ;
		}
		else if(pay == 2){
			cout << "YOU HAVE TO PAY : " << amount * price[2] << "$";		
		}
		break ;
		default :
			cout << "UNKNOWN COMMAND ";
			break;
			//goto start;	
		}
}


void insert_products(){
	int n = 4;
	string products[n] = {"COCKCOLA" , "BISCUIT" , "SWEET" , "CACKE"};
	// enter the price of the products list
	string price[n] = {"150" , "200" , "50" , "70"};
	
	cout << "\n\n" ; 
	//string first_products = products[0] + " = " + price[0];
	
	//cout << "FIRST PRODUCTS IS : " << first_products ;
	int num  = 0 ;
	cout << "ENTER THE SELECTION NUMBER :" ;
	cin  >> num ;
	switch(num){
		case 1 :
		getch();
		perpiad_method();
		break;
		getch();
		case 2 :
		getch();
		perpiad_method();
		break;
		case 3 :
		getch();
		perpiad_method();
		break;
		case 4 :
		getch();
		perpiad_method();
		break;		
		default :
			getch();
			cout << "UNKNOW COMMAND " ;
			break;
			
	  
}
}
void display_products(){
	cout << "\n\n";
	cout << " ********************** MENU *******************" << "\n\n";
	cout << "1 - COCKCOLA " << "\n" ;
	cout << "2 - BISCUIT "  << "\n" ;
	cout << "3 - SWEET "    << "\n" ;
	cout << "4 - CACKE "    << "\n" ;
	cout << "++++++++ ++++++++ +++++++ +++++++\n" ;
	cout << "5 - QUIT OUT OF IS SYSTEM \n" ;
	getch(); 
	cout << "\n\n";
}


main(){
	// show hello msg in screen and start the program
	cout << "\n**************************************************\n";
	cout << "		HELLO IN GROCERY SYSTEM !		" ;
	display_products();
	insert_products();
	cout << "\n\n" ;
}
