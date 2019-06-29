#include <stdio.h>
#include <iostream>
#include <string>
#include<bits/stdc++.h> 


using namespace std;

struct Prices {
	
	string items[12] = { "Chicken with honey","Spaghetti","Beef Steak","Mushroom Chicken",
	"Fish Fillet","Sprite","Coca-Cola","7 Up","Mountain Jew","Ice Tea","Water","Mango Shake" };
	int choice;
	float price[12] = { 100,50,120,120,70,15,20,17,25,25,20,100};
	float total_item[12]={0,0,0,0,0,0,0,0,0,0,0};
	float qt[12]={0,0,0,0,0,0,0,0,0,0,0} ;
	float total_all;
	//for the quantity to remove an order.
	float minus[12]={0,0,0,0,0,0,0,0,0,0,0};
	
};


//prototypes
void STAR_POS();
void just_menu();
void menu(int c);
void displayLines();
int login();
void items();
Prices Total(Prices);




int main()
{
	Prices p11;
	p11.choice = 1;
	login();
	
	menu(p11.choice);

	return 0;
}





void displayLines()
{
	for (int x = 0; x < 100; x++)
		cout << "*";
	cout << endl;
}
void just_menu(){

	cout << "\t\t=================================================Welcome to Mad Hornets' Nest=====================================================" << endl;
	cout << "\t\t\t\t\t\t========================1. Add an order =============================" << endl;
	cout << "\t\t\t\t\t\t  ======================2. Remove an Order ========================  " << endl;
	cout << "\t\t\t\t\t\t     ===================3. End  the order and checkout =========  " << endl;
	cout << "\t\t\t\t\t\t         ===============4. Exit the program ================" << endl;
	cout << "\t\t\t\t\t\t\t\t What do you wanna do? > ";
	cout << endl;
	cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;

}








int login()

{
char user[50] ,pass[50] ,a[50] ,b[50];
char x[50] , y[50];

STAR_POS();
cout << "REGISTER YOUR ACCOUNT HERE \n\n\n";
cout << "Username: ";
cin >> user;
cout << "Password: ";
cin >> pass;

system("cls");

STAR_POS();
cout << "Please double check : \n\n\n";

cout << "Username >> " << strcpy (x,user) << endl;
cout << "Password >> " << strcpy (y,pass) << endl;

system("pause>0");
system("cls");


{
FILE *fp;
    fp=fopen("C:\\ORDER\\MEMBER.txt","w+"); 

     if(!fp)
  
    {
     cout << "Cannot open file.\n";
     system("pause");
     exit(1);
    }
      
  fputs("\nACCOUNT CARD (ADMIN)\n\n",fp);
  fputs("USERNAME>>",fp);
  fputs(strcpy (x,user),fp);
  fputc('\n',fp);
  fputs("PASSWORD>>",fp);
  fputs(strcpy (y,pass),fp);
  fclose(fp);
}
STAR_POS();
cout <<"\t\t\t\t PLEASE LOGIN BELOW ";
cout <<"(3 ATTEMPTS)\n\n\n";

for (int i = 1; i <= 3; ++i) {
cout <<"Username >> ";  
cin >> a;
cout <<"Password >> ";
cin >> b;

if (strcmp(user,a)==0 && strcmp(pass,b)==0) {

cout << "\n\n\nWELCOME TO YOUR SYSTEM"<<endl;
system("pause>0");
system("cls");
return 0;
} 
else
cout << "\nINVALID LOGIN\n\n";
}
        cout << "TOO MANY ATTEMPTS (ERROR)";
        exit(10);
        return 0;

}







void menu(int c) {
	
    ofstream write;
 write.open("order.dat");
if(!write)
{
	cout<<"file can not open"<<endl;
	exit (-1);
}
	write<<"ITEM\t\t\t\t\t\t\tPRICE"<<endl;
	Prices p11;
	just_menu();
	string data;
	int choicee=0;
	cout << "Choice: ";
	cin >> c;
	do {
		do {
			if (c > 4) {
				cout << "INVALID INPUT" << endl;
				cout << "Try again? 1 for yes and 0 for no \n";
				cin >> c;

				if (c == 0) {
					break;
				}
				else {

					system("cls");
						just_menu();
					cout << "Choice: ";
					cin >> c;

					break;
				}
			}
			else {
				switch (c) {
					//add an order
				case 1: 
					cout << "Which item would you like? \n";
						items();
					cout << "Choice: ";
					cin >> p11.choice;
					if(p11.choice == 1)
						{
						cout << "How many would you like?\n";
						cout << "Choice: ";
						cin >> p11.qt[0];
				//		order.open("order.txt", ios::out | ios::in );
						write<<p11.items[0]<<"\t\t\t\t\t"<<p11.price[0]<<"\tqt: "<<p11.qt[0]<<endl;
			
						}
						else if (p11.choice == 2) {
				
						cout << "How many would you like?\n";
						cout << "Choice: ";
						cin >> p11.qt[1];
						write<<p11.items[1]<<"\t\t\t\t\t\t\t"<<p11.price[1]<<"\tqt: "<<p11.qt[1]<<endl;
						}
						else if (p11.choice == 3) {
					
						cout << "How many would you like?\n";
						cout << "Choice: ";
						cin >> p11.qt[2];
						write<<p11.items[2]<<"\t\t\t\t\t\t\t"<<p11.price[2]<<"\tqt: "<<p11.qt[2]<<endl;
						}
						else if (p11.choice == 4) {
					
						cout << "How many would you like?\n";
						cout << "Choice: ";
						cin >> p11.qt[3];
						write<<p11.items[3]<<"\t\t\t\t\t"<<p11.price[3]<<"\tqt: "<<p11.qt[3]<<endl;
						}
						else if (p11.choice == 5) {
					
						cout << "How many would you like?\n";
						cout << "Choice: ";
						cin >> p11.qt[4];
						write<<p11.items[4]<<"\t\t\t\t\t\t\t"<<p11.price[4]<<"\tqt: "<<p11.qt[4]<<endl;
						}
						else if (p11.choice == 6) {
				
						cout << "How many would you like?\n";
						cout << "Choice: ";
						cin >> p11.qt[5];
						write<<p11.items[5]<<"\t\t\t\t\t\t\t\t"<<p11.price[5]<<"\tqt: "<<p11.qt[5]<<endl;
						}
						else if (p11.choice == 7) {
					
						cout << "How many would you like?\n";
						cout << "Choice: ";
						cin >> p11.qt[6];
						write<<p11.items[6]<<"\t\t\t\t\t\t\t"<<p11.price[6]<<"\tqt: "<<p11.qt[6]<<endl;
						}
						else if (p11.choice == 8) {
					
						cout << "How many would you like?\n";
						cout << "Choice: ";
						cin >> p11.qt[7];
						write<<p11.items[7]<<"\t\t\t\t\t\t\t\t"<<p11.price[7]<<"\tqt: "<<p11.qt[7]<<endl;
						}
						else if (p11.choice == 9) {
					
						cout << "How many would you like?\n";
						cout << "Choice: ";
						cin >> p11.qt[8];
						write<<p11.items[8]<<"\t\t\t\t\t\t"<<p11.price[8]<<"\tqt: "<<p11.qt[8]<<endl;
						}
						else if (p11.choice == 10) {
					
						cout << "How many would you like?\n";
						cout << "Choice: ";
						cin >> p11.qt[9];
						write<<p11.items[9]<<"\t\t\t\t\t\t\t\t"<<p11.price[9]<<"\tqt: "<<p11.qt[9]<<endl;
						}
						else if (p11.choice == 11) {
					
						cout << "How many would you like?\n";
						cout << "Choice: ";
						cin >> p11.qt[10];
						write<<p11.items[10]<<"\t\t\t\t\t\t\t\t"<<p11.price[10]<<"\tqt: "<<p11.qt[10]<<endl;
						}
						else if (p11.choice == 12) {
					
						cout << "How many would you like?\n";
						cout << "Choice: ";
						cin >> p11.qt[11];
						write<<p11.items[11]<<"\t\t\t\t\t\t\t"<<p11.price[11]<<"\tqt: "<<p11.qt[11]<<endl;
						}
						else {
							cout<<"INVALID INPUT";
								}
							
					system("cls");
					just_menu();
					cout<<"\t\t\t\tOrder added successfully.\n";
					cout << "\t\t\tWhat would you like to do\n";
					cout << "Choice: ";
					cin >> c;



					break;
					//remove an order
				case 2:
					cout << "which item would you like to remove: " << endl;
					items();
					cout<<"Choice: ";
					cin >> p11.choice;

						if (p11.choice == 1)
						{
							cout << "How many would you like to remove?\n";
							cout << "Choice: ";
							cin >> p11.minus[0];
							p11.qt[0]-=p11.minus[0];
							write<<p11.qt[0];
						}
						else if (p11.choice == 2) {
						
							cout << "How many would you like to remove?\n";
							cout << "Choice: ";
							cin >> p11.minus[1];
							p11.qt[1]-=p11.minus[1];
						}
						else if (p11.choice == 3) {
						
							cout << "How many would you like to remove?\n";
							cout << "Choice: ";
								cin >> p11.minus[2];
							p11.qt[2]-=p11.minus[2];
						}
						else if (p11.choice == 4) {
						
							cout << "How many would you like to remove?\n";
							cout << "Choice: ";
								cin >> p11.minus[3];
							p11.qt[3]-=p11.minus[3];
						}
						else if (p11.choice == 5) {
						
							cout << "How many would you like to remove?\n";
							cout << "Choice: ";
							cin >> p11.minus[4];
							p11.qt[4]-=p11.minus[4];
						}
						else if (p11.choice == 6) {
						
							cout << "How many would you like to remove?\n";
							cout << "Choice: ";
						cin >> p11.minus[5];
							p11.qt[5]-=p11.minus[5];
						}
						else if (p11.choice == 7) {
					
							cout << "How many would you like to remove?\n";
							cout << "Choice: ";
							cin >> p11.minus[6];
							p11.qt[6]-=p11.minus[6];
						}
						else if (p11.choice == 8) {
					
							cin >> p11.minus[7];
							p11.qt[7]-=p11.minus[7];
						}
						else if (p11.choice == 9) {
						
							cout << "How many would you like to remove?\n";
							cout << "Choice: ";
							cin >> p11.minus[8];
							p11.qt[8]-=p11.minus[8];
						}
						else if (p11.choice == 10) {
						
							cout << "How many would you like to remove?\n";
							cout << "Choice: ";
							cin >> p11.minus[9];
							p11.qt[9]-=p11.minus[9];
						}
						else if (p11.choice == 11) {
					
							cout << "How many would you like to remove?\n";
							cout << "Choice: ";
							cin >> p11.minus[10];
							p11.qt[10]-=p11.minus[10];
						}
						else if (p11.choice == 12) {
						
							cout << "How many would you like to remove?\n";
							cout << "Choice: ";
							cin >> p11.minus[11];
							p11.qt[11]-=p11.minus[11];
						}
						else {
							cout<<"INVALID INPUT";
								}
						
							system("cls");
							just_menu();
							cout<<"\t\t\tOrder removed successfully.\n";	
							cout << "\t\t\tWhat would you like to do now\n";
							cout << "Choice: ";
							cin >> c;
						
					break;
					//done calculate the price and print
				case 3:
					for (int i = 0; i <12; i++){
						p11.total_item[i] = p11.price[i] * p11.qt[i];
						p11.total_all +=p11.total_item[i];
					}
					system("cls");
						displayLines();
							displayLines();
							
					cout<<"\t\t\t\tThe total price is "<<p11.total_all<<endl;
						displayLines();
							displayLines();
					system("pause");
					system("cls");
					// to initialize all the quantity back to 0 so that it wont double.
					for(int i = 0; i <12; i++){
						p11.qt[i]=0;
					}
					just_menu();
					cout << "\t\t\tEnd the program or would you still like to add something ?" << endl;
					cout<<"1 for adding an additional order, 2 for a new order and 3 for ending the program."<<endl;
					cout << "Choice: ";
					cin>>choicee;
					//for the choicee double ee might cause confusion;	
					
					if(choicee==1){
					system("cls");
					cout<<"ADDING ADDITIONAL ORDERS\n";
					just_menu();
					cout << "Choice: ";
					cin >> c;
					
					}else if (choicee==2){
						for(int i = 0; i <12; i++){
						p11.qt[i]=0;
						p11.total_all=0;
						p11.total_item[i]=0;
						}	
						system("cls");
						just_menu();
						cout << "Choice: ";
						cin>>c;
						
					}else if(choicee==3) {
						//ENDS THE ORDER SAVES THE TEXT FILE
						write<<"\t\t\t\t\t\t\t\t\t\t\tTotal: "<<p11.total_all<<endl;
						write.close();
					 	cout<<"The program will now exit.\n";
					 	exit(10);
					 	
					}else{
						write.close();
						cout<<"What you have entered is invalid.\n";
					 	cout<<"Now the program will exit \n";
					 	exit(10);
					}
					
					break;
					//exit
				case 4: 
					write.close();
					cout<<"The program will now exit.\n";
					exit(10);
					c = 0;
				
					break;

				default:
					cout << "INPUT IS INVALID" << endl;
					c = 0;
					break;
				}//switch
			}//else
		} while (c != 0);//do pangalawa check
	} while (c != 0);//do una
	 	write.close();

}//void menu


void items(){
	
	cout << "ITEM\t\t\t\t\t\tPRICE\n";
	displayLines();
	cout << "'1'  Chicken with honey\t\t\t\t100 \n";
	cout << "'2'  Spaghetti\t\t\t\t\t50 \n";
	cout << "'3'  Beef Steak\t\t\t\t\t120\n";
	cout << "'4'  Mushroom Chicken\t\t\t\t120 \n";
	cout << "'5'  Fish Fillett\t\t\t\t70 \n";
	displayLines();
	//drinks
	cout << "'6'  Sprite\t\t\t\t\t15\n";
	cout << "'7'  Coca-Cola\t\t\t\t\t20\n";
	cout << "'8'  7 Up\t\t\t\t\t17\n";
	cout << "'9'  Mountain dew\t\t\t\t25 \n";
	cout << "'10' Ice Tea\t\t\t\t\t25 \n";
	cout << "'11' Water\t\t\t\t\t20 \n";
	cout << "'12' Mango Shake\t\t\t\t100 \n";
}

void STAR_POS(){
	cout<< "\t\t\t\t\t\t============       ============           ============" << endl;
	cout << "\t\t\t\t\t\t============       ============           ============" << endl;
	cout << "\t\t\t\t\t\t===      ===       ===      ===           ===         " << endl;
	cout << "\t\t\t\t\t\t===      ===       ===      ===           ===         " << endl;
	cout << "\t\t\t\t\t\t===      ===       ===      ===           ===         " << endl;
	cout << "\t\t\t\t\t\t===      ===       ===      ===           ===         " << endl;
	cout << "\t\t\t\t\t\t============       ===      ===           ============" << endl;
	cout << "\t\t\t\t\t\t============       ===      ===           ============" << endl;
	cout << "\t\t\t\t\t\t===                ===      ===                    ===" << endl;
	cout << "\t\t\t\t\t\t===                ===      ===                    ===" << endl;
	cout << "\t\t\t\t\t\t===                ===      ===                    ===" << endl;
	cout << "\t\t\t\t\t\t===          ===   ===      ===  ===               ===  ===" << endl;
	cout << "\t\t\t\t\t\t===         =====  ============ =====     ============ =====" << endl;
	cout << "\t\t\t\t\t\t===          ===   ============  ===      ============  ===" << endl;
	cout << endl;
	
}

