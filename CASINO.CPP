#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>


void draw_line(int n,char ch);
void rules();

void main()
{
  int balanceamt,amt,no,dice;
  char playername[80],ch;
  clrscr();
  draw_line(80,'*');
  cout<<"\n\n\n\t\t\t\t  CASINO GAME\n\n\n\n";
  draw_line(80,'*');
  cout<<"\n\n\nEnter Your Name  :";
  gets(playername);
  cout<<"\n\n\nEnter Deposit amount to play game :";
  cin>>balanceamt;
  do
  {
    clrscr();
    rules();
    cout<<"\n\nYour current balance is Rs."<<balanceamt;
    do
    {
	cout<<"\n\n"<<playername<<" Enter money to bet:";
	cin>>amt;
	if(amt>balanceamt)
	   cout<<"\noops!!Your betting amount is more than your current balance!\n\nRe-enter data->\n ";
	else
	   break;
    }while(1);
    do
    {
	cout<<"\n\nEnter your lucky number to bet between 1 to 10 :";
	cin>>no;
	if(no<=0||no>10)
	   cout<<"\n\nPlease check the number!! it should be between 1 to 10\n\nRe-enter data\n ";
	else
	   break;
    }while(1);
  randomize();
  dice=random(10)+1;
  if(dice==no)
  {
    cout<<"\n\nGood Luck!! You won Rs."<<amt*10;
    balanceamt=balanceamt+amt*10;
  }
  else
  {
     cout<<"\n\nBad Luck this time !! You lose Rs."<<amt;
     balanceamt=balanceamt-amt;
  }
  cout<<"\n\nThe winning number was : "<<dice;

  cout<<"\n\n\t***"<<playername<<" You have Rs. "<<balanceamt<<"***"<<endl;
  cout<<"\n\n-->Do you want to play (y/n)? ";
  cin>>ch;
  }while(ch=='Y'|| ch=='y');
  clrscr();
  cout<<"\n\n\n";
  draw_line(80,'*');
  cout<<"\n\n\t\t\t*****THANKS FOR COMING TO CASINO*****\n\n\t\t\t*****YOUR FINAL AMOUNT IS Rs."<<balanceamt<<"*****\n\n";
  draw_line(80,'*');
  cout<<"\n\n\t\t\t\t\tgame developed by: G.BALAJI\n\n";
  draw_line(80,'*');
  getch();
}


void draw_line(int n,char ch)
{
for(int i=0;i<n;i++)
   cout<<ch;
}

void rules()
{
  clrscr();
  cout<<"\n\n";
  draw_line(80,'*');
  cout<<"\n\t\t\t*****RULES OF THE GAME*****\n";
  draw_line(80,'*');
  cout<<"\n\t-> Choose any number between 1 to 10\n\t-> If you win you will get 10 times of money you bet\n\t-> If you bet on wrong number you will lose your betting amount\n\n";
  draw_line(80,'*');
  cout<<endl;
}

