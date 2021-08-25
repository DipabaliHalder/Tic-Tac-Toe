//tic-tac-toe
#include<iostream.h>
#include<conio.h>
int win(char a1[]);
void box(char a2[]);
void intro();
void intro()
{
   clrscr();
   char c1;
   do
   {
    char a[10]={'0','1','2','3','4','5','6','7','8','9'};
   int i,play=1,ch;
   char s;
   do
   {   box(a);
       play=(play%2)?1:2;
       cout<<"\n\n\t\t        PLAYER "<<play<<" enter a number: ";
       cin>>ch;
       s=(play==1)?'x':'o';
       if(ch==1 && a[1]=='1')
	    a[1]=s;
       else if(ch==2 && a[2]=='2')
	    a[2]=s;
       else if(ch==3 && a[3]=='3')
	    a[3]=s;
       else if(ch==4 && a[4]=='4')
	    a[4]=s;
       else if(ch==5 && a[5]=='5')
	    a[5]=s;
       else if(ch==6 && a[6]=='6')
	    a[6]=s;
       else if(ch==7 && a[7]=='7')
	    a[7]=s;
       else if(ch==8 && a[8]=='8')
	    a[8]=s;
       else if(ch==9 && a[9]=='9')
	    a[9]=s;

       else
	    {
	       cout<<"Invalid move ";
	       play--;
	    }
       i=win(a);
       play++;
       }while(i==-1);
   box(a);
   clrscr();
   if(i==1)
	  cout<<"\n\n\n\n\n\n\n\t\t\t       PLAYER "<<--play<<" WINS";
   else
	  cout<<"\n\n\n\n\n\n\t\t\t         DRAW GAME";
	  cout<<"\n\n\t\t\t         GAME OVER   \n\n";

   cout<<"\t\t WANT TO TRY AGAIN (PRESS 'Y'or 'y'): ";
   cin>>c1;
   }while(c1=='y' || c1=='Y');
   getch();
}
int win(char a1[])
{
   if(a1[1]==a1[2] && a1[2]==a1[3])
     return 1;
   else if(a1[4]==a1[5] && a1[5]==a1[6])
     return 1;
   else if(a1[7]==a1[8] && a1[8]==a1[9])
     return 1;
   else if(a1[1]==a1[4] && a1[4]==a1[7])
     return 1;
   else if(a1[2]==a1[5] && a1[5]==a1[8])
     return 1;
   else if(a1[3]==a1[6] && a1[6]==a1[9])
     return 1;
   else if(a1[1]==a1[5] && a1[5]==a1[9])
     return 1;
   else if(a1[3]==a1[5] && a1[5]==a1[7])
     return 1;
   else if(a1[1]!='1' && a1[2]!='2' && a1[3]!='3' && a1[4]!='4' &&  a1[5]!='5' &&  a1[6]!='6' && a1[7]!='7' && a1[8]!='8' && a1[9]!='9')
     return 0;
   else
      return (-1);
   }
void box(char a2[])
{  clrscr();
   cout<<"\n\n\n\t\t\t       TIC-TAC-TOE GAME\n";
   cout<<"\n\t\t\t   PLAYER 1-x   PLAYER 2-o ";
   cout<<"\n\n\t\t\t       -------------   ";
   cout<<"\n\t\t\t       | "<<a2[1]<<" | "<<a2[2]<<" | "<<a2[3]<<" | ";
   cout<<"\n\t\t\t       -------------   ";
   cout<<"\n\t\t\t       | "<<a2[4]<<" | "<<a2[5]<<" | "<<a2[6]<<" | ";
   cout<<"\n\t\t\t       -------------     ";
   cout<<"\n\t\t\t       | "<<a2[7]<<" | "<<a2[8]<<" | "<<a2[9]<<" | ";
   cout<<"\n\t\t\t       -------------     ";

}
void main()
{
    clrscr();
    char r;
    cout<<"\n\n\n\n\t\t\t   *** TIC-TAC-TOE GAME ***";
    cout<<"\n\t\t\t  --------------------------\n\n";
    cout<<"\n\t\t\t   MADE BY: DIPABALI HALDER\n";
    cout<<"\n\n\t\t\t Press 'y' to play the game: ";
    cin>>r;
    if(r=='y')
    {
       clrscr();
       int c1;
       cout<<"\n\n\n OPTIONS :\n\n\n";
       cout<<" (1)- RULES OF THE GAME\n\n";
       cout<<" (2)- PLAY THE GAME\n\n";
       cout<<" (3)- EXIT THE GAME\n\n";
       cout<<" ENTER YOUR CHOICE: ";
       cin>>c1;
       if(c1==1)
       {
	   clrscr();char t;
	   cout<<"\n\n\n\n\n\t\t\t  RULES FOR PLAYING THE GAME\n\n";
	   cout<<"\t\t------------------------------------------------\n\n";
	   cout<<"\t  The object of Tic Tac Toe is to get three in a row.\n";
	   cout<<"\t  The first player is known as x and the second is o.\n";
	   cout<<"\t  Players alternate placing Xs and Os on the game board until\n";
	   cout<<"\t   either oppent has three in a row or all nine squares are filled.\n";
	   cout<<"\n\t    --------------------------------------------------------";
	   cout<<"\n WANT TO PLAY NOW (Press 'y'to play the game): ";
	   cin>>t;
	   if(t=='y')
	   {intro();}
       }
       else if(c1==2)
	 { intro();}
       else if(c1==3)
	 {getch();}
    }
  getch();
}
