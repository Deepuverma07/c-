#include<fstream.h>
#include<string.h>
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<process.h>
fstream file,file1,file2;
int x1,c1;
void music()
{
for(int j=120;j<200;j++)
{
 sound(j*20);
 delay(3);
}
nosound();
}

void RAILWAYdisplay()
{
textcolor(BLACK);
textbackground(GREEN);
int i=0;
do{
if(i==79)
i=0;
delay(70);
clrscr();
/*gotoxy(i,5);
cout<<"                        \\ \\                ";
gotoxy(i,6);
cout<<"                           \\ \\  \\ \\      ";
gotoxy(i,7);
cout<<"                              \\ \\  \\ \\   ";
gotoxy(i,8);
cout<<"                                      \\ \\  ";*/
gotoxy(i,9);
cout<<"       ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»";
gotoxy(i,10);
cout<<"       º        DEEPAK RAILWAY SERVICE           ºÍ»";
gotoxy(i,11);
cout<<"       ÌÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¹Í¼";
gotoxy(i,12);
cout<<"       º  ÉÍÍÍ»   ÉÍÍÍ»   ÉÍÍÍ»   ÉÍÍÍ»     º";
gotoxy(i,13);
cout<<"      /º  ÈÍÍÍ¼   ÈÍÍÍ¼   ÈÍÍÍ¼   ÈÍÍÍ¼     ºÍ»";
gotoxy(i,14);
cout<<"     º º   - - - - - - - - - - - - - - - -  º º";
gotoxy(i,15);
cout<<"      \\º                                    ºÍ¼ ";
gotoxy(i,16);
cout<<"       º    DEEPAK TRANSPORT      º";
gotoxy(i,17);
cout<<"       ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼";
gotoxy(i,18);
cout<<"           \\____/               \\____/    ";
gotoxy(i,19);
cout<<"-------------------------------------------------------";
gotoxy(i,20);
cout<<"-------------------------------------------------------";
sound(i*65);
i++;
}while(!kbhit());
nosound();
for(int j=1000;j>200;j-=50)
{
 sound(j);
 delay(100);
}
nosound();

}
void line()
{
for(int g=0;g<79;g++)
{cout<<"Í";delay(10);}
music();
}
class customer
{
   protected :
   char name[20];
   char address[50];
   long int phone;
   public:
   int seat_no1;
   int code1;
   void input();
   void out();
   void canc1();
   }c;
class RAILWAYes
{
   protected:
   char route[20];
   int RAILWAY_no;
   char opt[10];
   int fair;
   char cust_opt[10];
   public:
   int seat_no;
   int code;
   void inp1();
   void output();
   void out1();
   void canc2();

}b;
class reservation : public customer,public RAILWAYes
{
    public:
    void reserv();
    void ticket();
    void all();
    void display1();
    void inp2();
    void canci();
    void searchrc();
}r;
void reservation ::display1()
{  clrscr();
   line();
   cout<<"\n\t\t==**==**== WELCOME TO DEEPAK TRAVELS ==**==**==\n\n";
   line();
   cout<<"\n\t\t CODE     ROUTE                   RAILWAY_NO       FAIR";
   cout<<"\n\t\t  1    KOTA TO JAIPUR [KTJ]        1000         100";
   cout<<"\n\t\t  2    KOTA TO DELHI  [KTD]        2000         250";
   cout<<"\n\t\t  3    KOTA TO NOIDA  [KTN]        3000         480";
   cout<<"\n\t\t  4    KOTA TO BANGLORE [KTB]      4000         800";
   cout<<"\n\t\t  5    KOTA TO GURGOAN [KTG]       5000         200\n";
   line();   line();
}
void reservation ::inp2()
{           back3:
		cout<<"\n\nENTER THE SEAT NO.BETWEEN 1 TO 40 ¯¯¯ ";
		cin>>x1;
		if(x1<1||x1>40)
		{cout<<"\n WRONG ENTRY";
		goto back3;
		}
		back1:
		cout<<"\nENTER THE ROUTE CODE BETWEEN 1 TO 5  ¯¯¯ " ;
		cin>>c1;
		if(c1<1||c1>5)
		{cout<<"\n WRONG ENTRY";
		goto back1;
		}

}

void customer :: input()
{
	 cout<<"\nENTER THE CUSTOMER NAME ¯¯¯ ";
	 gets(name);
	 cout<<"\nCUSTUMER ADDRESS ¯¯¯ ";
	 gets(address);
	 cout<<"\nPHONE NO ¯¯¯ ";
	 cin>>phone;
	 seat_no1=x1;
	 code1=c1;

}
void customer :: out()
{
	cout<<"\n\t\tCUSTOMER NAME ¯¯¯ "<<name;
	cout<<"\n\t\tCUSTUMER ADDRESS ¯¯¯ "<<address;
	cout<<"\n\t\tPHONE NO ¯¯¯ "<<phone;
	cout<<"\n\t\tALLOTED SEAT NO. ¯¯¯"<<seat_no1;
 }

 void RAILWAYes :: inp1()

 {


	 int k[5]={100,250,480,800,200};
	 int y[5]={1000,2000,3000,4000,5000};

   cout<<"\nENTER ROUTE AS ABOVE MENTIONED :";
   gets(route);
   cout<<"\n\n \t\t   CUSTOMER_OPTION  ";
   cout<<"\n\n \t\t\t   WINDOWS SEATS [WS]";
   cout<<"\n\n \t\t\t   FRONT SEATS [FS]";
   cout<<"\n\n\t\tENTER CUSTOMER OPTION  ¯¯ ";
   gets(opt);

	 seat_no=x1;
	 code=c1;
	 RAILWAY_no=y[c1-1];
	 fair=k[c1-1];

   }
    void RAILWAYes :: output()
   { cout<<"\n\t\tRAILWAY NUMBER=== ¯¯¯ "<<RAILWAY_no;
     cout<<"\n\t\tROUTE CODE ===¯¯¯ "<<code;
     cout<<"\n\t\tROUTE == ¯¯¯ "<<route;
     cout<<"\n\t\tFAIR ==¯¯¯"<<fair;
     cout<<"\n\t\tOPTION== ¯¯¯ "<<opt;
    };

void reservation :: reserv()
{         char v;
	 do
	      {

		back:
		display1();
		cout<<"\n\n\t\t\t*** RESERVATION ***\n";
		line();
		inp2();
		file1.open("RAILWAY.txt",ios::in|ios::ate|ios::out|ios::binary);
		file1.seekg(0,ios::beg);
		int found=0;
		while(file1.read((char*)&b,sizeof(b)))
		     {
		       if(b.code==c1&&b.seat_no==x1)
			 {
			   found=1;
			   break;
			 }
		     }
	      if(found==1)
		{
		     cout<< "\n\t\t\tSEAT IS ALREADY ALLOTED, TRY AGAIN  ";
		     file1.close();
		     getch();
		     goto back;

	       }
	     else
	       {
		 file1.close();
		 file1.open("RAILWAY.txt",ios::in|ios::app);
		 b.inp1();
		 file1.write((char*)&b,sizeof(b));
		 file1.close();
		 file.open("customer.txt",ios::in|ios::app);
		 c.input();
		 file.write((char*)&c,sizeof(c));
		 file.close();
	       }
		  cout<<"\nDo you wish to reserve another ticket/?  Y/N  ¯¯ ";
		  cin>>v;
       }
       while(v=='y'||v=='Y');

}
void RAILWAYes :: out1()
{
  cout<<"\nROUTE CODE ¯¯¯ "<<code<<"\t\tSEAT NO ¯¯¯ "<<seat_no;
}
void reservation :: ticket()
{
       struct date d;
       getdate(&d);
       int  d1=d.da_day;
       int m1=d.da_mon;
       int y=d.da_year;
	display1();
	cout<<"\n\n";
	cout<<"\n\t\t\t\tRESERVED SEATS:";
	file1.open("RAILWAY.txt",ios::in|ios::out);
	file1.seekg(0,ios::beg);
	while(file1.read((char*)&b,sizeof(b)))
	{

	b.out1();


	}
	if(file1.eof())
	{
	file1.clear();
	}
	file1.close();
     cout<<"\n";
     line();
     cout<<"\n\t\t\t\t*** TICKET ***\n";
     line();
      inp2();
     clrscr();
     cout<<"\n\t\t\t\\*  HAPPY JOURNEY   */"<<"\t\t"<<d1<<"-"<<m1<<"-"<<y<<"\n";
      line();
      line();
	file1.open("RAILWAY.txt",ios::in|ios::out);
	file1.seekg(0,ios::beg);
	while(file1.read((char*)&b,sizeof(b)))
	{
	    if(b.seat_no==x1&&b.code==c1)
	    {
		 b.output();

		 break;
	    }
	}
	if(file1.eof())
	{
	     cout<<"\n\n\t\t\tCUSTOMER DOES NOT EXIST";
	     file1.clear();
	     file1.close();
	}
	else
	{
	file1.seekp(0,ios::beg);
	file1.close();
	file.open("customer.txt",ios::in|ios::out);
	file.seekg(0,ios::beg);
	while(file.read((char*)&c,sizeof(c)))
	{
			if(c.seat_no1==x1&&c.code1==c1)
			 {
			  c.out();
			  break;
			  }


	 }
	if(file.eof())
	    {
		 file.clear();
	    }
	file.close();
  }
	 cout<<"\n";
	line();
	line();
  }

  void reservation ::all()
{
	int y,x,i=0;
	clrscr();
	cout<<"\n\n\n--------------REQUIRED INFORMATION OF THE PASSENGER'S ARE AS FOLLOWS-------------\n\n";
	file.open("customer.txt",ios::in|ios::app);
	file1.open("RAILWAY.txt",ios::in|ios::app);
	file.seekg(0,ios::beg);
	file1.seekg(0,ios::beg);
	while(file.read((char*)&c,sizeof(c))&&file1.read((char*)&b,sizeof(b)))
	{
	      cout<<"\n\n";
	      c.out();
	      b.output();
	      i=1;
	}
	file.seekp(0,ios::beg);
	file.close();
	file1.seekp(0,ios::beg);
	file1.close();
	if(i!=1)
		cout<<"\n\n\t\t\tNO CUSTOMER INFORMATION IN THE LIST";
	cout<<"\n\n\n\n------------------------PRESS ANY KEY TO RETURN TO MENU-------------------------";
}
void customer ::canc1()
{       r.display1();
	cout<<"\n\n";
	cout<<"\n\t\t\t\tRESERVED SEATS:";
	file1.open("RAILWAY.txt",ios::in|ios::out);
	file1.seekg(0,ios::beg);
	while(file1.read((char*)&b,sizeof(b)))
	{  b.out1();}
	if(file1.eof())
	{
	file1.clear();
	}
	file1.close();
	customer m;
	cout<<"\n\n\t\t\t   *** CANCIL RESERVATION ***  \n ";
	   for(int i=0;i<72;i++ )
	   { cout<<"-";
	      delay(10);
	    }

	  r.inp2();
	file.open("customer.txt",ios::in|ios::ate|ios::out|ios::binary);
	file.seekg(0,ios::beg);
	while(file.read((char*)&m,sizeof(m)))
	{
	     if( m.code1==c1)
	     {
		  if(m.seat_no1!=x1)
		  {
		  file2.open("temp.txt",ios::in|ios::app);
		  file2.write((char*)&m,sizeof(m));
		  file2.close();
		  }

	     }
	     else if(m.code1!=c1)
	     {
		  file2.open("temp.txt",ios::in|ios::app);
		  file2.write((char*)&m,sizeof(m));
		  file2.close();

	     }


	}
	file.close();
	file2.close();
	remove("customer.txt");
	rename("temp.txt", "customer.txt");
	file2.close();
	file.close();
}

void RAILWAYes ::canc2()
{
	RAILWAYes b1;
	file1.open("RAILWAY.txt",ios::in|ios::ate|ios::out|ios::binary);
	file1.seekg(0,ios::beg);
	while(file1.read((char*)&b1,sizeof(b1)))
	{
	       if( b1.code==c1)
	     {
		  if(b1.seat_no!=x1)
		  {
		  file2.open("temp.txt",ios::in|ios::app);
		  file2.write((char*)&b1,sizeof(b1));
		  file2.close();
		  }

	     }
	     else if(b1.code!=c1)
	     {
		  file2.open("temp.txt",ios::in|ios::app);
		  file2.write((char*)&b1,sizeof(b1));
		  file2.close();

	     }

      }
	remove("RAILWAY.txt");
	rename("temp.txt","RAILWAY.txt");
	file1.close();
	file2.close();
}

void reservation::canci()
{     c.canc1();
      b.canc2();
      cout<<"\n\n\n\nRESERVATION OF  SEAT NUMBER  "<<x1<<" OF ROUTE CODE "<<c1<<"  HAS BEEN CANCILED";

}

void reservation :: searchrc()
{  display1();
   cout<<"\n\n ENTER THE ROUTE CODE TO WHICH SEARCH IS DONE :";
   cin>>c1;
       file.open("customer.txt",ios::in|ios::out);
	file.seekg(0,ios::beg);
	while(file.read((char*)&c,sizeof(c)))
	{
	    if(c.code1==c1)
	    {     c.out();
		  cout<<"\n";
	    }
	}
       file.close();

}


 void main()
  {
	clrscr();
	RAILWAYdisplay();
    remove("customer.txt");

       	remove("RAILWAY.txt");
	int g;
      textcolor(CYAN);
      textbackground(BLUE);


	do
	{
	      clrscr();
	      line();
	      cout<<"\n\n==**==**==**==**==**            MAIN  MENU                **==**==**==**==**==\n\n";
	      line();
	      cout<<"\n\n\t\t\t1. RESERVATION";
	      cout<<"\n\n\t\t\t2. CANCELATION";
	      cout<<"\n\n\t\t\t3. PASSENGER'S LIST";
	      cout<<"\n\n\t\t\t4. TICKET";
	      cout<<"\n\n\t\t\t5. SEARCH";
	      cout<<"\n\n\t\t\t6. DISPLAY RAILWAY";
	      cout<<"\n\n\t\t\t7. EXIT\n\n";
	      line();
	      cout<<"\n\n\n\t\t  ENTER YOUR CHOICE  ¯¯¯ ";

	      cin>>g;

	      switch(g)
	      {
		  case 1 :  r.reserv();
			    break;
		  case 2 :  r.canci();
			    break;
		  case 3 :  r.all();
			    break;
		  case 4 :  r.ticket();
			    break;
		  case 5 : r.searchrc();
			   break;
		  case 6 : RAILWAYdisplay();
			   break;
		  case 7 :  clrscr();
			    cout<<"\n\n\n\n\n\n\n\n";
			    line();
			    cout<<"\t\t\t\t THANKS & VISIT AGAIN \n";
			cout<<"\t\t\t\t Project byDEEPAK\n";
			    line();
			    exit(0);break;
		  default : cout<<"SORRY,TRY AGAIN";
break;
	   }
	   getch();
	}
	while(g!=7);

}  
