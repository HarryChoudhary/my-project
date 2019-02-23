#include<iostream>
#include<cstring>
#include<fstream>
#include<list>
#include<cstdlib>
using namespace std;  
class Airline
{
protected:
 int num,k,p;
 char ch;
 char firstname[60];
 char lastname[60];
 char address[60];
 char c_loc[30];
 char dest[30];
 char reservation_no[60];
 int option;
  int business_seat;
 int  economic_seat;
  int time;
 int choose;

public:
 void get_information()
 {
  cout<<"\n\n        ::Please enter the required information for passenger number::"<<endl;
  cout<<"\n\n\nEnter the firstname of passenger: ";
 cin>>firstname;
   cout<<endl;
   cout<<"Enter the lastname of passenger: ";
   cin>>lastname;
   cout<<endl<<endl;
   cout<<"Enter address of passenger:  ";
   cin>>address;
   cout<<endl<<endl;
   cout<<"Enter the Resevation No. of Ticket"<<endl;
   cin>>reservation_no;
   cout<<endl;
   cout<<"Enter the current location of passenger(IN CAPITAL LETTERS ONLY):  ";
   cin>>c_loc;
   cout<<endl<<endl;
   cout<<"Enter the destination of passenger(IN CAPITAL LETTERS ONLY):  ";
   cin>>dest;
   cout<<endl<<endl;
 
 }
 void display_information()
 {
   cout<<"Your E-Ticket is :"<<endl;
   int t=1;
   int r=1;
  cout<<" **** AIRLINE TICKET ****"<<endl;
  cout<<"|Ticket No."<<t<<"                                Reference No."<<r<<"\t  "<<endl;
  cout<<"|_________________________________________________________________________"<<endl;
  cout<<"|Resevation No. :"<<reservation_no<<"                                     "<<endl;
  cout<<"|__________________________________________________________________________"<<endl;
  cout<<"|Passenger Information :                                                  "<<endl;
  cout<<"|Name :"<<lastname<<"/t"<<firstname<<"                                     "<<endl;
  cout<<"|                                                                         "<<endl;
  cout<<"|Address :"<<address<<"                                                   "<<endl;
  cout<<"|_________________________________________________________________________"<<endl;
  cout<<"|flight Information :                                                     "<<endl;
  cout<<"|_________________________________________________________________________"<<endl;
  cout<<"|Depart :"<<c_loc<<"                                                      "<<endl;
  cout<<"|Arrive :"<<dest<<"                                                       "<<endl;
  cout<<"|_________________________________________________________________________"<<endl;

  ofstream fout("E:\\E_ticket.txt");
        fout<<"                           AIRLINE TICKET                                 "<<endl<<
   "|Ticket No."<<t<<"                                Reference No."<<r<<"\t  "<<endl<<
      "|_________________________________________________________________________"<<endl<<
   "|Resevation No. :"<<reservation_no<<"                                     "<<endl<<
   "|__________________________________________________________________________"<<endl<<
      "|Passenger Information :                                                  "<<endl<<
      "|Name :"<<lastname<<"/t"<<firstname<<"                                     "<<endl<<
      "|                                                                         "<<endl<<
      "|Address :"<<address<<"                                                   "<<endl<<
      "|_________________________________________________________________________"<<endl<<
      "|_________________________________________________________________________"<<endl<<
      "|Depart :"<<c_loc<<"                                                      "<<endl<<
      "|Arrive :"<<dest<<"                                                       "<<endl<<
      "|_________________________________________________________________________"<<endl;

t=t+1;
r=r+1;

 }
  

 void get_time()
 {
  cout<<"ENTER TIME U WANT TO TRAVEL"<<endl;
  cin>>time;
  cout<<"\n";
  cout<<"ENTER UR CHOICE OF  TIME="<<endl;
  cout<<"1)-AM";
  cout<<"2)-PM";
  cin>>choose;

 }
 void show_time()
 {
 	if(choose==1)
 	{
	 
    cout<<"|                                                                         "<<endl;
    cout<<"|flight time is= "<<time<<"AM"<<"                                                       "<<endl;
    cout<<"|_________________________________________________________________________"<<endl;
    ofstream fout;
    fout.open("E:\\E_ticket.txt",ios::app);
   fout<<"|                                                                         "<<endl<<
             "|flight time is= "<<time<<"                                                        "<<endl<<
                         "|_________________________________________________________________________"<<endl;
       fout.close();
   }
   if(choose==2)
   {
   	  cout<<"|                                                                         "<<endl;
    cout<<"|flight time is= "<<time<<"PM"<<"                                                       "<<endl;
    cout<<"|_________________________________________________________________________"<<endl;
   
    ofstream fout;
    fout.open("E:\\E_ticket.txt",ios::app);
   fout<<"|                                                                         "<<endl<<
             "|flight time is= "<<time<<"                                                        "<<endl<<
                         "|_________________________________________________________________________"<<endl;
       fout.close();
   }
  }
 void get_airline_information()
 {
  k=0;
  p=0; 
  cout<<"Enter Name of Airline you want to travel"<<endl<<endl;
  cout<<"1)JETLINES"<<endl;
  cout<<"2)AIR INDIA"<<endl;
  cout<<"3)AMERICAN AIRLINES"<<endl;
  cout<<"4)AIR ASIA"<<endl;
  cout<<"enter your choice"<<endl;;
  cin>>option;
  switch(option)
  {
  case 1:
   if (option==1)
    cout<<"\n\n\n                                WELCOME TO JETLINES"<<endl;
   break;
  case 2:
   if(option==2)
    cout<<"\n\n\n                                WELCOME TO AIR INDIA"<<endl;
   break;
  case 3:
   if(option==3)
    cout<<"\n\n\n                                WELCOME TO AMERICAN AIRLINES"<<endl;
   break;
  case 4:
   if(option==4)
    cout<<"\n\n\n                                WELCOME TO AIR ASIA"<<endl;
   break;
   case 5:
   	cout<<"SORRY NOT AVALAIBLE AIRLINE";

   }


} 
 };
 class airbooking:public Airline

 {
 private:

  char f;

  int menu_choice;

  char a;

 public:


void getdata()
{
	
m:
   cout<<"\n\n\n\n\n\n";
   cout<<"*************************************"<<endl;
   cout<<"*        AIRWAYS RESERVATION        *"<<endl;
   cout<<"*************************************"<<endl;
   cout<<"\n\n\n\n";
   cout<<"*************************************"<<endl;
   cout<<"*             MAIN MENU             *"<<endl;
   cout<<"*        ENTER YOUR CHOICE          *"<<endl;
   cout<<"*   PRESS 1 FOR LOCAL BOOKING       *"<<endl;
   cout<<"*       NOW ENTER YOUR CHOICE:      *"<<endl;
   cout<<"*************************************"<<endl;

   cin>>menu_choice;

  system("cls");

   Airline a;
   char back;


   switch(menu_choice)

   {

   case 1:


    a.get_information();
    a.get_airline_information();
    a.get_time();
    a.display_information();
    a.show_time();
    cout<<"\n";
     cout<<"\n";
      cout<<"\n";
       cout<<"\n";
        cout<<"\n";
        
    
  
    break;

    

    

}
}
};
 int main()
 {
 	airbooking a1,m1;
 	Airline a;
 	a1.getdata();
 
  char ch;
  int row[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
  int row1[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
  int row2[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
  int row3[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
  list<int> li (row,row+14);
  list<int> li1 (row1,row1+14);
  list<int> li2 (row2,row2+14);
  list<int> li3 (row3,row3+14);
 
n:
  int row4[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
  list<int>lis (row1,row1+14);
  int i=0,n,seat;
  int j=14;

  char c;
 
  cout<<"\n";
  cout<<"displaying seats"<<endl;
while(i<4)
{
  for (list<int>::iterator iter=lis.begin(); iter != lis.end(); ++iter)
{ 
 if(i==0||i==1||i==2||i==3)
{

  cout << "   " << *iter<<"A"<<"\t";
  cout << "   " << *iter<<"B"<<"\t";
  cout << "   " << *iter<<"C"<<"\t";
  cout << "   " << *iter<<"D"<<endl;
cout<<"  -------------------------------\n";
}
}
i=i+4;
}
cout<<"  ---------------------------------------------------\n";

  ofstream fout("E:\\E_ticket.txt",ios::app);
cout<<"\nENTER SEAT NUMBER YOU WANT TO BOOK (for eg. A1 or ) :";
cin>>c>>seat;
fout<<"SEAT NUMBER : "<<c<<"-"<<seat<<endl;
cout<<"___________________________________________________________________________________"<<endl;
 cout<<"                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
fout.close();
cout<<"\n";
cout<<"booked seat is=";
if(c=='A'||c=='B'||c=='C'||c=='D')
{
	cout<<c<<seat<<endl<<endl;
	cout<<"THANK YOU FOR BOOKING SEAT"<<endl;
	cout<<endl;
}
if(j>=0)
{
list<int>::iterator iter;
if(c=='A')
{
cout<<"\nAVAILABLE SEATS ARE : \n";
li.remove(seat);
for(iter=li.begin();iter!=li.end();iter++)
cout<<" "<<*iter<<"A";
cout<<"\n";
for(iter=li1.begin();iter!=li1.end();iter++)
cout<<" "<<*iter<<"B";
cout<<"\n";
for(iter=li2.begin();iter!=li2.end();iter++)
cout<<" "<<*iter<<"C";
cout<<"\n";
for(iter=li3.begin();iter!=li3.end();iter++)
cout<<" "<<*iter<<"D";
cout<<"\n";
}
else if(c=='B')
{
cout<<"\nAVAILABLE SEATS ARE : \n";
li1.remove(seat);
for(iter=li.begin();iter!=li.end();iter++)
cout<<" "<<*iter<<"A";
cout<<"\n";
for(iter=li1.begin();iter!=li1.end();iter++)
cout<<" "<<*iter<<"B";
cout<<"\n";
for(iter=li2.begin();iter!=li2.end();iter++)
cout<<" "<<*iter<<"C";
cout<<"\n";
for(iter=li3.begin();iter!=li3.end();iter++)
cout<<" "<<*iter<<"D";
cout<<"\n";
}
else if(c=='C')
{
cout<<"\nAVAILABLE SEATS ARE : \n";
li2.remove(seat);
for(iter=li.begin();iter!=li.end();iter++)
cout<<" "<<*iter<<"A";
cout<<"\n";
for(iter=li1.begin();iter!=li1.end();iter++)
cout<<" "<<*iter<<"B";
cout<<"\n";
for(iter=li2.begin();iter!=li2.end();iter++)
cout<<" "<<*iter<<"C";
cout<<"\n";
for(iter=li3.begin();iter!=li3.end();iter++)
cout<<" "<<*iter<<"D";
cout<<"\n";
}
else if(c=='D')
{
cout<<"\nAVAILABLE SEATS ARE : \n";
li3.remove(seat);
for(iter=li.begin();iter!=li.end();iter++)
cout<<" "<<*iter<<"A";
cout<<"\n";
for(iter=li1.begin();iter!=li1.end();iter++)
cout<<" "<<*iter<<"B";
cout<<"\n";
for(iter=li2.begin();iter!=li2.end();iter++)
cout<<" "<<*iter<<"C";
cout<<"\n";
for(iter=li3.begin();iter!=li3.end();iter++)
cout<<" "<<*iter<<"D";
cout<<"\n";
}
}
j--;
cout<<endl;


cout<<"\n Whether you wish to continue (y/n) :"<<endl;
cin>>ch;
if(ch=='y')
goto n;
else 
{
cout<<endl;
cout<<"THANK YOU FOR BOOKING"<<endl;
cout<<"press b for MAIN MENU";
cin>>ch;
if(ch=='b')
{
	a1.getdata();
}
else 
exit(1);
}

return 0;
}

