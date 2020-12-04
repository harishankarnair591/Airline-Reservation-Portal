//**************************************************************************| PROGRAM CODE |*****************************************************************************************

 #include<conio.h>
#include<stdio.h>
#include<process.h>
#include<fstream.h>
#include<graphics.h>
class fly
{
char board[20];
char dest[20];
double codeno;
char name[20];
int age;
char nation[20];
char email[50];
long long int mobno;
public:
fly()
{
mobno=0;
}
void flyenter()
{ textcolor(BLUE);
cout<<"\n\nFLIGHT DETAILS:-\n\n";
cout<<"\nBOARDING:\n";
cin>>board;
cout<<"\n";
cout<<"\nDESTINATION:\n";
cin>>dest;
cout<<"\n\n";
cout<<"PASSENGER DETAILS:-\n\n";
cout<<"Enter Passenger Name\n";
gets(name);
cout<<"\n";
cout<<"\nEnter Age\n";
cin>>age;
cout<<"\n";
cout<<"\nNationality\n";
gets(nation);
cout<<"\n";
cout<<"\nEnter Emailid\n";
cin>>email;
cout<<"\n";
cout<<"\nEnter Mobile Number\n";
cin>>mobno;
cout<<"\n";
cout<<"\nEnter a 4 Digit Code:";
cin>>codeno;
}
void flydisplay()
{                 textcolor(GREEN);
cout<<"\nBOARDING:\t"<<board;
cout<<"\n";
cout<<"\nDESTINATION:\t"<<dest;
cout<<"\n";
cout<<"\nNAME:\t"<<name;
cout<<"\n";
cout<<"\nAGE:\t"<<age;
cout<<"\n";
cout<<"\nNATIONALITY:\t"<<nation;
cout<<"\n";
cout<<"\nEMAIL:\t"<<email;
cout<<"\n";
cout<<"\nMOBILE NUMBER:\t"<<mobno;
}
double code()
{
return codeno;
} } f ;
void homepage()
{
cprintf("\n*************************AIRPORT AUTHORITY OF INDIA*****************************");
textcolor(GREEN);
cprintf("\n\n\n\n|||||||||||||||*WELCOME TO THE ONLINE FLIGHT RESERVATION SYSTEM*||||||||||||||||\n\n\n");
 textcolor(BLUE);
cout<<"\n  *                                                           ";
cout<<"\n    *                                                          ";
cout<<"\n      *                                                       ";
cout<<"\n        *  *  *  *               1. Travel & Holidays";
cout<<"\n       *  *                      2. Flight ticket booking";
cout<<"\n     *      *                    3. Ticket Details";
cout<<"\n    *         *  *               4. Cancellation Of Tickets ";
cout<<"\n            *                    5. Reschedule Your Journey   ";
cout<<"\n                                 6. EXIT      ";


}
void flybook()
{
cout<<"\n\n**************************************WELCOME***********************************\n\n";
cout<<"\n\n1.DOMESTIC";
cout<<"\n\n2.INTERNATIONAL";
cout<<"\n\n\n";
}
void travel()
{
cout<<"\n*******************WELCOME TO H&S TRAVEL AND HOLIDAYS ***********************\n\n";
cout<<"\nA.DOMESTIC TRIP:                                    B.INTERNATIONAL TRIP:";
cout<<"\n\n1.MUMBAI                                            1.DUBAI";
cout<<"\n\n2.CHENNAI                                           2.SYDNEY ";
cout<<"\n\n3.DELHI                                             3.N Y C   ";
cout<<"\n\n4.BANGALORE                                         4.LONDON";
cout<<"\n\n5.KOCHI                                             5.SINGAPORE";
}
void pay(double ff,int np)
{  long int card;
char cname[50];
int cvv;
double amt=0.0;
amt=ff*np;
cout<<"**********************WELCOME TO THE PAYMENT GATEWAY************************";
cout<<"\n\n\n****************************SBI SECURE PAYMENT******************************";
cout<<"\n\n\nTOTAL AMOUNT :\t"<<amt;
cout<<"\n\n\nENTER YOUR (16 DIGIT) CREDIT CARD/DEBIT CARD NO\n\n";
cin>>card;
cout<<"\n\nENTER YOUR CARDHOLDER NAME\n\n";
gets(cname);
cout<<"\n\nENTER C.V.V :\n";
cin>>cvv;
clrscr();
}
void main()
{
clrscr();

int a,g,k,np1,np2,np3,np4,np5,np6,np7,np8,np9,np10;
do
{
homepage();
cout<<"\n\n\n\nENTER YOUR CHOICE:\t";
cin>>a;
cout<<"\n\n";
clrscr();
ofstream fout;
ifstream fin;
switch(a)
{
 case 1: travel();
 char b;
 cout<<"\n\n\tENTER YOUR CHOICE:\t";
 cin>>b;
 cout<<"\n\n";
 switch(b)
 {
 case 'A':int c;
 cout<<"\n\n\nENTER YOUR DOMESTIC DESTINATION CHOICE:\t";
	cin>>c;
	cout<<"\n\n";
	clrscr();
	switch(c)
	{
	case 1:     textcolor(RED);
	{
	cout<<"\n\n\n*************************MUMBAI*****************************************\n";
	cout<<"\n\n   Total Fare =RS 21000/- (pp)" ;
	cout<<"\n\n*  Includes Air Ticket = 5500       " ;
	cout<<"\n\n*  Accomodation & Sight Seeing ";
	cout<<"\n\n Day 1: Visit to Siddhivinayak temple ,Mahalakshmi temple and Hajji ali.\n ";
	cout<<"\n\n Day 2: Visit to popular beaches";
	cout<<"\n\n Day 3: Shopping in the largest markets in India ";
	cout<<"\n\n******************************************************************************";

cout<<"\n\nPLEASE ENTER THE NUMBER OF TRAVELLERS :\t ";
cin>>np1; }
cout<<"\n\n";
clrscr();
	 pay(21000,np1);


	  textcolor(BLUE);
cprintf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTRANSACTION SUCCESSFULL\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n");



      break;
       case 2:cout<<"\n\n*********************************CHENNAI********************\n";
	cout<<"\n\n   Total Fare =RS 27000/- (pp)" ;
	cout<<"\n\n*  Includes Air Ticket = 6500        " ;
	cout<<"\n\n*  Accomodation & Sight Seeing ";
	cout<<"\n\n Day 1: Visit to Mahabalipuram Shore Temple , National zoo,.\n ";
	cout<<"\n\n Day 2: Visit to Marina beach ";
	cout<<"\n\n Day 3: Shopping in the largest markets in India ";
	cout<<"\n\n******************************************************************";

cout<<"\n\nPLEASE ENTER THE NUMBER OF TRAVELLERS :\t ";
cin>>np2;
cout<<"\n\n";
clrscr();
	 pay(27000,np2);


	  textcolor(GREEN);
cprintf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTRANSACTION SUCCESSFULL\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n");
       break;
       case 3:cout<<"\n\n*************************DELHI************************\n";
	cout<<"\n\n   Total Fare =RS 30000/- (pp)" ;
	cout<<"\n\n*  Includes Air Ticket = 7500        " ;
	cout<<"\n\n*  Accomodation & Sight Seeing ";
	cout<<"\n\n Day 1: Visit to LOTUS Temple ,THE TAJ MAHAL.\n ";
	cout<<"\n\n Day 2: Visit to QUTUB MINAR,RED FORT ,RASHTRAPATI BHAVAN\n";
	cout<<"\n\n Day 3: Shopping in the largest markets in India ";
	cout<<"\n\n*************************************************************";
	cout<<"\n\nPLEASE ENTER THE NUMBER OF TRAVELLERS :\t ";
cin>>np3;
cout<<"\n\n";
clrscr();
pay(30000,np3);
	  textcolor(GREEN);
cprintf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTRANSACTION SUCCESSFULL\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n");


	break;
	case 4:  cout<<"\n\n***************BANGALORE*****************************\n";
	cout<<"\n\n   Total Fare =RS 22000/- (pp)"   ;
	cout<<"\n\n*  Includes Air Ticket = 5500        " ;
	cout<<"\n\n*  Accomodation & Sight Seeing ";
	cout<<"\n\n Day 1: Visit to MAHALAKSHMI TEMPLE,THE TIPU SULTAN PALACE.\n ";
	cout<<"\n\n Day 2: Visit to VIDHAN SOUDHA,LALBAUG GARDENS\n";
	cout<<"\n\n Day 3: Shopping in the largest markets in India ";
	cout<<"\n\n*************************************************************";
	cout<<"\n\nPLEASE ENTER THE NUMBER OF TRAVELLERS :\t";
cin>>np4;
	     cout<<"\n\n";
	     clrscr();
	 pay(22000,np4);
	  textcolor(GREEN);
cprintf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTRANSACTION SUCCESSFULL\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n");


	break;
	case 5:cout<<"\n\n*****************************KOCHI***************************\n";
	cout<<"\n\n   Total Fare =RS 17000/- (pp)";
	cout<<"\n\n*  Includes Air Ticket = 3500        " ;
	cout<<"\n\n*  Accomodation & Sight Seeing ";
	cout<<"\n\n Day 1: Visit to MARINE DRIVE,LULU MALL\n ";
	cout<<"\n\n Day 2: Visit to THE HIGH COURT OF KERALA\n";
	cout<<"\n\n Day 3: Shopping in the largest markets in India ";
	cout<<"\n\n*************************************************************";
	cout<<"\n\nPLEASE ENTER THE NUMBER OF TRAVELLERS :\t";
cin>>np5;
	     cout<<"\n\n";
	     clrscr();
	 pay(17000,np5);
	  textcolor(GREEN);
cprintf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTRANSACTION SUCCESSFULL\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n");


	break;
	default: cout<<"INVALID INPUT";
	}
	break;
	case 'B':
	int d;
	cout<<"\n\nENTER YOUR INTERNATIONAL DESTINATION CHOICE:\t";
	cin>>d;
	clrscr();
	switch(d)
	{
       case 1:cout<<"*************************DUBAI**********************************";
	cout<<"\n\n   Total Fare =RS 65000/- (pp)"  ;
	cout<<"\n\n*  Includes Air Ticket = 12000       " ;
	cout<<"\n\n*  Accomodation & Sight Seeing ";
	cout<<"\n\n Day 1: Visit to BURJ KHALIFA,THE HOTEL ATLATIS,\n ";
	cout<<"\n\n Day 2: Visit to PALM ISLAND ,FERRARI WORLD \n";
	cout<<"\n\n Day 3: Shopping in the largest markets in DUBAI ";
	cout<<"\n\n*************************************************************";
	cout<<"\n\nPLEASE ENTER THE NUMBER OF TRAVELLERS :\t ";
cin>>np6;
cout<<"\n\n";
 clrscr();
	 pay(65000,np6);
	  textcolor(GREEN);
cprintf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTRANSACTION SUCCESSFULL\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n");


	break;
	case 2:
	cout<<"*********************************SYDNEY,AUSTRALIA********************";
	cout<<"\n\n   Total Fare =RS 129000/- (pp)";
	cout<<"\n\n*  Includes Air Ticket = 45500       " ;
	cout<<"\n\n*  Accomodation & Sight Seeing ";
	cout<<"\n\n Day 1: Visit to OPERA HOUSE\n ";
	cout<<"\n\n Day 2: Visit to THE HIGH AVENUE \n";
	cout<<"\n\n Day 3: Shopping in the largest markets IN AUSTRALIA\n";
	cout<<"\n\n*************************************************************";
	cout<<"\n\nPLEASE ENTER THE NUMBER OF TRAVELLERS :\t ";
cin>>np7;
	  cout<<"\n\n";
	  clrscr();
	 pay(129000,np7);

	  textcolor(GREEN);
cprintf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTRANSACTION SUCCESSFULL\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n");

	break;
	case 3:
	cout<<"**************************NEW YORK**************************";
	cout<<"\n\n   Total Fare =RS 295000/- (pp)" ;
	cout<<"\n\n*  Includes Air Ticket = 55000        " ;
	cout<<"\n\n*  Accomodation & Sight Seeing ";
	cout<<"\n\n Day 1: Visit to STATUE OF LIBERTY,WHITE HOUSE\n ";
	cout<<"\n\n Day 2: Visit to MADISON SQUARE,TRUMP TOWER\n";
	cout<<"\n\n Day 3: Shopping in the largest markets in USA ";
	cout<<"\n\n*************************************************************";
	cout<<"\n\nPLEASE ENTER THE NUMBER OF TRAVELLERS :\t ";
cin>>np8;
		cout<<"\n\n";
	  clrscr();
	 pay(295000,np8);

	  textcolor(GREEN);
cprintf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTRANSACTION SUCCESSFULL\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n");

	break;
	case 4:
	cout<<"************************LONDON********************************";
	cout<<"\n\n   Total Fare =RS 200000/- (pp)";
	cout<<"\n\n*  Includes Air Ticket = 40000       " ;
	cout<<"\n\n*  Accomodation & Sight Seeing ";
	cout<<"\n\n Day 1: Visit to QUEENS PALACE,WALK THE THAMES\n ";
	cout<<"\n\n Day 2: Visit to LONDON BRIDGE,BRITISH MUSEUM,HYDE PARK\n";
	cout<<"\n\n Day 3: Shopping in the largest markets in BRITAIN ";
	cout<<"\n\n*************************************************************";
	cout<<"\n\nPLEASE ENTER THE NUMBER OF TRAVELLERS :\t ";
cin>>np9;
	 cout<<"\n\n";
	  clrscr();
	 pay(200000,np9);

	  textcolor(GREEN);
cprintf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTRANSACTION SUCCESSFULL\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n");

	break;
	case 5:
	cout<<"**************************SINGAPORE**************************";
	cout<<"\n\n   Total Fare =RS 90000/- (pp)"   ;
	cout<<"\n\n*  Includes Air Ticket = 17500       " ;
	cout<<"\n\n*  Accomodation & Sight Seeing ";
	cout<<"\n\n Day 1: Visit to GARDENS BY THE BAY,SENTOSA\n ";
	cout<<"\n\n Day 2: Visit to ORCHARD ROAD,SINGAPORE BOTANICAL GARDENS\n";
	cout<<"\n\n Day 3: Shopping in the largest markets in SINGAPORE ";
	cout<<"\n\n*************************************************************";
	cout<<"\n\nPLEASE ENTER THE NUMBER OF TRAVELLERS :\t ";
cin>>np10;
	   cout<<"\n\n";
	  clrscr();
	 pay(90000,np10);

	  textcolor(GREEN);
cprintf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTRANSACTION SUCCESSFULL\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n");

	break;
	default:cout<<"\nINVALID INPUT";
	}
	break;
	default:cout<<"\nINVALID INPUT";
	}
	break;

	case 2: flybook();
	int e;
	cout<<"\nENTER YOUR CHOICE :\t";
	cin>>e;
	clrscr();
	switch(e)
	{
	case 1:cout<<"*************WELCOME TO DOMESTIC FLIGHT RESERVATION SYSTEM***************";

	fout.open("dom.dat",ios::out|ios::binary);
	cout<<"\n\nENTER NO. OF PASSENGERS\t";
	cin>>g;
	int i;
	for(i=1;i<=g;i++)
	{
	cout<<"\n\nPASSENGER "<<i<<"\n";
	f.flyenter();
	fout.write((char*)&f,sizeof(f));
	}
	clrscr();
	pay(1500,g);
	fout.close();



	  textcolor(GREEN);
cprintf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTRANSACTION SUCCESSFULL\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n");
	break;
	case 2:cout<<"*************WELCOME TO INTERNATIONAL FLIGHT RESERVATION SYSTEM***********";
	 fout.open("inter.dat",ios::out|ios::binary);

	cout<<"\n\nENTER NO. OF PASSENGERS\t";
	cin>>k;
	int ii;
	for(ii=1;ii<=k;ii++)
	{
	cout<<"\n\nPASSENGER "<<ii<<"\n";
	f.flyenter();
	fout.write((char*)&f,sizeof(f));
	}
	clrscr();
	pay(30000,k);
	fout.close();
		  textcolor(GREEN);
cprintf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTRANSACTION SUCCESSFULL\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n");

	break;

	default:cout<<"\nINVALID INPUT";
	}
	break;
	case 3:cout<<"\n********************************* TICKET DETAILS********************************";
	flybook();
	int q;
	cout<<"\nENTER YOUR CHOICE :\t";
	cin>>q;

	switch(q)
	{
	case 1:double s;
	cout<<"\nEnter Your 4 Digit Code:\t";
	cin>>s;
	clrscr();
	int xy=0;

	cout<<"\n*********************************DOMESTIC***************************************\n";
	fin.open("dom.dat",ios::in|ios::binary);
	while(fin.read((char*)&f,sizeof(f)))
	{
	if(f.code()==s)
	{
	f.flydisplay();
	xy=1;
	break;
	}
	}
	if(xy==0)
	cout<<"\nINVALID CODE";
	fin.close();
	getch();
	clrscr();

	break;
	case 2:double t;
	cout<<"\nEnter Your 4 Digit Code:\t";
	cin>>t;
	  clrscr();
	int yz=0;

	cout<<"\n*********************************INTERNATIONAL****************************\n";
	fin.open("inter.dat",ios::in|ios::binary);
	while(fin.read((char*)&f,sizeof(f)))
	{
	if(f.code()==t)
	{
	f.flydisplay();
	yz=1;
	break;
	}
	}
	if(yz==0)
	cout<<"\nINVALID CODE";
	fin.close();

	 getch();
	   clrscr();
	break;
	default:cout<<"\nINVALID INPUT\n";
	}
       break;
	case 4:flybook();
	int z;
	cout<<"\nENTER YOUR CHOICE:\t";
	cin>>z;
	switch(z)
	{
	case 1: int y,flag=0;
	cout<<"\n\nEnter Your 4 Digit Code:\t";
	cin>>y;

	clrscr();
	 fin.open("dom.dat",ios::in);
	fout.open("dom1.dat",ios::out|ios::binary);
	while(fin.read((char*)&f,sizeof(f)))
	{
	if(f.code()==y)
	{
	cout<<"*********************************CANCELLATION************************************";
	cout<<"\n\n\n";
	flag=1;
	f.flydisplay();
	char ch;
	cout<<"\n\n\nAre you sure you want to cancel(y/n)?"<<" ";
	cin>>ch;
	if(ch=='n'||ch=='N')
	fout.write((char*)&f,sizeof(f));
	}
	else
	{
	fout.write((char*)&f,sizeof(f));
	}
	}
	cout<<"\n\nYOUR RECORD HAS BEEN DELETED\n";
       getch();
	clrscr();
		if(flag==0)
	cout<<"\nRecord not found";
	fin.close();
	fout.close();
	remove("dom.dat");
	rename("dom1.dat","dom.dat");
	fin.open("dom.dat",ios::in|ios::binary);
	while(fin.read((char*)&f,sizeof(f)))
	{
	f.flydisplay();
	}
	fin.close();

	break;
	case 2:int x;
	cout<<"\nEnter Your 4 Digit Code:\t";
	cin>>x;

	clrscr();
	int fg=0;
	fin.open("inter.dat",ios::in);
	fout.open("inter1.dat",ios::out|ios::binary);
	while(fin.read((char*)&f,sizeof(f)))
	{
	if(f.code()==x)
	{
	cout<<"*********************************CANCELLATION************************************";
	cout<<"\n\n\n";
	fg=1;
	f.flydisplay();
	char ch;
	cout<<"\n\n\nAre you sure you want to cancel(y/n)?"<<" ";
	cin>>ch;
	if(ch=='n'||ch=='N')
	fout.write((char*)&f,sizeof(f));
	}
	else
	{
	fout.write((char*)&f,sizeof(f));
	}
	}
	cout<<"\n\nYOUR RECORD HAS BEEN DELETED\n";
       getch();
	clrscr();
	if(fg==0)
	cout<<"\nRecord not found";
	fin.close();
	fout.close();
	remove("inter.dat");
	rename("inter1.dat","inter.dat");
	fin.open("inter.dat",ios::in);
	while(fin.read((char*)&f,sizeof(f)))
	{
	f.flydisplay();
	}
	fin.close();

	break;
	default:cout<<"\nInvalid Input";
	}
	case 5:flybook();
	int w;
	 cout<<"\nENTER YOUR CHOICE:\t";
	 cin>>w;
	 switch(w)
	 {
	 case 1:
	  int v,fl=0;
	 fstream file("dom.dat",ios::binary|ios::in|ios::out);
	 cout<<"\nEnter Your 4 Digit Code:\t";
	 cin>>v;
	 clrscr();
	 while(file.read((char*)&f,sizeof(f)))
	 {
	 if(f.code()==v)
	 {
	 f.flyenter();
	 int pos=file.tellg();
	 file.seekg(pos-sizeof(f));
	 file.write((char*)&f,sizeof(f));
	 fl=1;
	 clrscr();
	 break;
	 }
	 }
	 if(fl==0)
	 cout<<"\nRecord not found";
	 file.seekg(0);
	 while(file.read((char*)&f,sizeof(f)))
	 {
		 cout<<"\n\******************YOUR NEW JOURNEY DETAILS********************\n";
		 f.flydisplay();
	 }
 file.close();
	   getch();
	    clrscr();
	 break;
	 case 2:
	 int u,fa=0;
 fstream abc("inter.dat",ios::binary|ios::in|ios::out);
	 cout<<"\nEnter Your 4 Digit Code:\t";
	 cin>>u;
	 clrscr();
	 while(abc.read((char*)&f,sizeof(f)))
	 {
	 if(f.code()==u)
	 {
	 f.flyenter();
	 int pos=abc.tellg();
	 abc.seekg(pos-sizeof(f),ios::beg);
	 abc.write((char*)&f,sizeof(f));
	 fa=1;
	 clrscr();
	 break;
	 }
	 }
	 if(fa==0)
	 cout<<"\nRecord not found";
	 abc.seekg(0);
	 while(abc.read((char*)&f,sizeof(f)))
	 {
	 cout<<"\n************************YOUR NEW JOURNEY DETAILS***********************\n";
	 f.flydisplay();
	 }
	 abc.close();
	 getch();
	 clrscr();

	 break;
	 default:cout<<"\nINVALID INPUT";
	 }
	 break;
	 case 6:exit(0);
	 break;
       default:cout<<"\nINVALID INPUT\n";
	}







cout<<"\n\n";
cout<<"             _/_/_/_/_/  _/                            _/            \n";
cout<<"                _/      _/_/_/      _/_/_/  _/_/_/    _/  _/         \n";
cout<<"               _/      _/    _/  _/    _/  _/    _/  _/_/            \n";
cout<<"              _/      _/    _/  _/    _/  _/    _/  _/  _/           \n";
cout<<"             _/      _/    _/    _/_/_/  _/    _/  _/    _/          \n";
cout<<"                                                                  \n";
cout<<"                                                                  \n";
cout<<"                                                                  \n";
cout<<"                 _/     _/                                       \n";
cout<<"                  _/  _/    _/_/    _/    _/                     \n";
cout<<"                    _/    _/    _/  _/    _/                     \n";
cout<<"                    _/    _/    _/  _/    _/                     \n";
cout<<"                   _/      _/_/      _/_/_/                     \n\n";
cout<<"\n";
cout<<"\t\t\t\tPRESS ENTER TO CONTINUE";
cout<<"\n";
cout<<"\n\n";

	 getch();
       }
       while(1);
	getch();
		}
