
#include<iostream.h>
#include<conio.h>
void linestar();
void correct();
void wrong();
int marks;
void main()
{
int i;
clrscr();
linestar();
cout<<"\n   ******  ";
cout<<"\n  ******** ";
cout<<"\n  **    **     **     **    ";
cout<<"\n  **           **     **    ";
cout<<"\n  **         ****** ******   ";
cout<<"\n  **         ****** ******   ";
cout<<"\n  **    **     **     **    ";
cout<<"\n  ********     **     **    ";
cout<<"\n   ******        \n";
cout<<"\n\t\t\t   ******   **   **  ******  ******* ";
cout<<"\n\t\t\t  ********  **   **  ******  ******* ";
cout<<"\n\t\t\t  **    **  **   **    **        **  ";
cout<<"\n\t\t\t  **    **  **   **    **       **   ";
cout<<"\n\t\t\t  **    **  **   **    **      **    ";
cout<<"\n\t\t\t  **  * **  **   **    **     **     ";
cout<<"\n\t\t\t  **   ***  **   **    **    **      ";
cout<<"\n\t\t\t  ********   *****   ****** *******  ";
cout<<"\n\t\t\t   ***** *   *****   ****** *******\n";
cout<<"\n\tEnter your name\t";
char name[10];
cin>>name;
cout<<"\n\t HI! "<<name<<" Press any digit to play";
cin>>i;
clrscr();
linestar();
cout<<"\n\n\t Here is your First Question";
cout<<"\n\n\t 1.Which of them is a UNARY operator";
cout<<"\n\t 1.* \t 2.++ \n \t 3.+ \t 4./";
cout<<"\n\n\t Enter your choice";
cin>>i;
marks=0;
if(i==2)
{
correct();
cout<<"\n\t press1 to play next Question and 2 to exit";
cin>>i;
if(i==1)
goto new1;
else
goto end;
}
else
{
wrong();
cout<<"\n\tpress 1 to play next Question and 2 to exit";
cin>>i;
if(i==1)
goto new1;
else
goto end;
}
new1:clrscr();
linestar();
cout<<"\n\n\t Here is your second question";
cout<<"\n\n\t 2.Who is the father of c++?";
cout<<"\n\t 1.Dennis Ritchi \n\t 2.Bjarne Stroustrup \n\t 3.Rick Mascitti \n\t 4.Simula Cornell";
cout<<"\n\n\t Enter your choice";
cin>>i;
if(i==2)
{
correct();
cout<<" \n\tpress 1 to play next Question and 2 to exit";
cin>>i;
if(i==1)
goto new2;
else
goto end;
}
else
{
wrong();
cout<<" \n\tpress 1 to play next Question and 2 to exit";
cin>>i;
if(i==1)
goto new2;
else
goto end;
}
new2:clrscr();
linestar();
cout<<"\n\n\t Here is your Third question";
cout<<"\n\n\t 3.Precision of double data type variable is";
cout<<"\n\t 1.7 digits \n\t 2.15 digits \n\t 3.19 digits \n\t 4.5 digits";
cout<<"\n\n\tEnter your choice ";
cin>>i;
if(i==2)
{
correct();
cout<<" \n\tpress 1 to play next Question and 2 to exit";
cin>>i;
if(i==1)
goto new3;
else
goto end;
}
else
{
wrong();
cout<<" \n\tpress 1 to play next Question and 2 to exit";
cin>>i;
if(i==1)
goto new3;
else
goto end;
}
new3:clrscr();
linestar();
cout<<"\n\n\t Here is your Fourth Question";
cout<<"\n\n\t 4.If the test condition is true then it returns";
cout<<"\n\t 1.0 value \t\t 2.non-zero value \n\t 3.negative value \t 4.none of the above";
cout<<"\n\n\tEnter your choice ";
cin>>i;
if(i==2)
{
correct();
cout<<" \n\tpress 1 to play next Question and 2 to exit";
cin>>i;
if(i==1)
goto new4;
else
goto end;
}
else
{
wrong();
cout<<" \n\tpress 1 to play next Question and 2 to exit";
cin>>i;
if(i==1)
goto new4;
else
goto end;
}
new4:clrscr();
linestar();
cout<<"\n\n\t Here is your Fifth Question";
cout<<"\n\n\t 5.Which can be passed as an argument to a function? ";
cout<<"\n\t 1.constant \t\t 2.expression \n\t 3.another function \t 4.all of above";
cout<<"\n\n\tEnter your choice ";
cin>>i;
if(i==4)
{
correct();
cout<<" \n\tpress 1 to play next Question and 2 to exit";
cin>>i;
if(i==1)
goto new5;
else
goto end;
}
else
{
wrong();
cout<<" \n\tpress 1 to play next Question and 2 to exit";
cin>>i;
if(i==1)
goto new5;
else
goto end;
}
new5:clrscr();
linestar();
cout<<"\n\n\t Here is your sixth Question";
cout<<"\n\n\t 6.What is the scale factor of double data type? ";
cout<<"\n\t 1.1 \t\t\t\t 2.2 \n\t 3.4 \t\t\t\t 4.8";
cout<<"\n\n\tEnter your choice ";
cin>>i;
if(i==4)
{
correct();
cout<<" \n\tpress 1 to play next Question and 2 to exit";
cin>>i;
if(i==1)
goto new6;
else
goto end;
}
else
{
wrong();
cout<<" \n\tpress 1 to play next Question and 2 to exit";
cin>>i;
if(i==1)
goto new6;
else
goto end;
}
new6:clrscr();
linestar();
cout<<"\n\n\t Here is your seventh Question";
cout<<"\n\n\t 7.The class istream has member function  ";
cout<<"\n\t 1.get() \t 2.write() \n\t 3.put() \t 4.none of the above";
cout<<"\n\n\tEnter your choice ";
cin>>i;
if(i==1)
{
correct();
cout<<" \n\tpress 1 to play next Question and 2 to exit";
cin>>i;
if(i==1)
goto new7;
else
goto end;
}
else
{
wrong();
cout<<" \n\tpress 1 to play next Question and 2 to exit";
cin>>i;
if(i==1)
goto new7;
else
goto end;
}
new7:clrscr();
linestar();
cout<<"\n\n\t Here is your eighth Question";
cout<<"\n\n\t 8.The class iostream is derived from ";
cout<<"\n\t 1.istream \t\t 2.ostream \n\t 3.all of the above \t 4.none of the above";
cout<<"\n\n\tEnter your choice ";
cin>>i;
if(i==3)
{
correct();
cout<<" \n\tpress 1 to play next Question and 2 to exit";
cin>>i;
if(i==1)
goto new8;
else
goto end;
}
else
{
wrong();
cout<<" \n\tpress 1 to play next Question and 2 to exit";
cin>>i;
if(i==1)
goto new8;
else
goto end;
}
new8:clrscr();
linestar();
cout<<"\n\n\t Here is your nineth Question";
cout<<"\n\n\t 9.The class ostream has member funcion ";
cout<<"\n\t 1.get() \t2.read() \n\t 3.put() \t4.none of the above";
cout<<"\n\n\tEnter your choice ";
cin>>i;
if(i==3)
{
correct();
cout<<" \n\tpress 1 to play next Question and 2 to exit";
cin>>i;
if(i==1)
goto new9;
else
goto end;
}
else
{
wrong();
cout<<"\n\tpress 1 to play next Question and 2 to exit";
cin>>i;
if(i==1)
goto new9;
else
goto end;
}
new9:clrscr();
linestar();
cout<<"\n\n\t Here is your tenth Question";
cout<<"\n\n\t 10.Function getline() is a member of class ";
cout<<"\n\t 1.ostream \t\t 2.istream \n\t 3.all of the above \t 4.none of the above";
cout<<"\n\n\tEnter your choice ";
cin>>i;
if(i==2)
{
correct();
cout<<" \n\tpress 1 to play next Question and 2 to exit";
cin>>i;
if(i==1)
goto new10;
else
goto end;
}
else
{
wrong();
cout<<" \n\tpress 1 to play next Question and 2 to exit";
cin>>i;
if(i==1)
goto new10;
else
goto end;
}
new10:clrscr();
linestar();
cout<<"\n\n\tHere is your eleventh Question";
cout<<"\n\n11. What is the mximum number of template arguments in a function template is ";
cout<<"\n\t 1.one \t\t 2.two \n\t 3.many \t 4.none of the above";
cout<<"\n\n\tEnter your choice ";
cin>>i;
if(i==3)
{
correct();
cout<<" \n\tpress 1 to play next Question and 2 to exit";
cin>>i;
if(i==1)
goto new11;
else
goto end;
}
else
{
wrong();
cout<<"\n\t press 1 to play next Question and 2 to exit";
cin>>i;
if(i==1)
goto new11;
else
goto end;
}
new11:clrscr();
linestar();
cout<<"\n\n\t Here is your twelveth Question";
cout<<"\n\n12.We can write data containing variables oftype to an object of class ofstream using ";
cout<<"\n\t 1.put() \t\t 2.seekg() \n\t 3.read() \t\t 4.write()";
cout<<"\n\n\tEnter your choice ";
cin>>i;
if(i==4)
{
correct();
cout<<" \n\tpress 1 to play next Question and 2 to exit";
cin>>i;
if(i==1)
goto new12;
else
goto end;
}
else
{
wrong();
cout<<"\n\t press 1 to play next Question and 2 to exit";
cin>>i;
if(i==1)
goto new12;
else
goto end;
}
new12:clrscr();
linestar();
cout<<"\n\n\t Here is your thirteenth Question";
cout<<"\n\n\t 13. A pure virtual function is a virtual function that  ";
cout<<"\n\t 1.has no body \t\t 2.return nothing \n\t 3.takes no arguments \t 4.all of the above";
cout<<"\n\n\tEnter your choice ";
cin>>i;
if(i==4)
{
correct();
cout<<" \n\tpress 1 to play next Question and 2 to exit";
cin>>i;
if(i==1)
goto new13;
else
goto end;
}
else
{
wrong();
cout<<" press 1 to play next Question and 2 to exit";
cin>>i;
if(i==1)
goto new13;
else
goto end;
}
new13:clrscr();
linestar();
cout<<"\n\n\t Here is your fourteenth Question";
cout<<"\n\n\t 14.Which of the following operators can be overloaded ";
cout<<"\n\t 1.# \t 2.sizeof\n\t 3.* \t 4.::";
cout<<"\n\n\tEnter your choice ";
cin>>i;
if(i==3)
{
correct();
cout<<" \n\tpress 1 to play next Question and 2 to exit";
cin>>i;
if(i==1)
goto new14;
else
goto end;
}
else
{
wrong();
cout<<" \n\n\tpress 1 to play next Question and 2 to exit";
cin>>i;
if(i==1)
goto new14;
else
goto end;
}
new14:clrscr();
linestar();
cout<<"\n\n\t Here is your fifteenth Question";
cout<<"\n\n\t 15.What is the main advantage of inheritance ";
cout<<"\n\t 1.data hiding \t\t 2.encapsulation \n\t 3.extensibility \t 4.reusability";
cout<<"\n\n\tEnter your choice ";
cin>>i;
if(i==4)
{
correct();
cout<<" \n\tpress 1 to play next Question and 2 to exit";
cin>>i;
if(i==1)
goto end;
else
goto end;
}
else
{
wrong();
cout<<"\n\t press 1 to play next Question and 2 to exit";
cin>>i;
if(i==1)
goto end;
else
goto end;
}
end:clrscr();
linestar();
if(marks>45)
{
cout<<"\n\n\tGood Score ";
cout<<"\n\n\tStudy More to Get Better result";
cout<<"\n\n\n\n";
for(i=1;i<80;i++)
cout<<"*";
cout<<"\n\t\t\tThank You For Particpating\n\n";
for(i=1;i<80;i++)
cout<<"*";
}
else
{
cout<<"\n\n\tIt is not a Good Score ";
cout<<"\n\n\tStudy More to Get Better result";
cout<<"\n\n\n\n";
for(i=1;i<80;i++)
cout<<"*";
cout<<"\n\t\t\tThank You For Particpating\n\n";
for(i=1;i<80;i++)
cout<<"*";

}

getch();
}
void linestar()
{
int j;
cout<<"\n";
for(j=1;j<=80;j++)
cout<<"\4";
cout<<"\t\t\t C++QUIZ by Abhay\n";
for(j=1;j<=80;j++)
cout<<"\4";
}
void correct()
{
cout<<"\n\t You have given a correct Answer";
marks= marks+4;
cout<<"\n\t Your total Score is "<<marks;
}
void wrong()
{
cout<<"\n\t You have given a wrong Answer";
marks= marks-1;
cout<<"\n\t Your total Score is "<<marks;
}
