#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
using namespace std;
char name[20];
int cusID;
static int bill;
class icecream
{
public:
icecream()
{
    cout<<"\t"<<"---------------------------Welcome to *Lovely Icecreams * ------------------------"<<endl;
	cout<<"Enter the NAME and the Customer ID : ";
	cin>>name>>cusID;
	}
void menu_list()
{
    char c;
    int f,n;
    int s1,s2,s3;
    int n1,n2,n3;
    cout<<"\t"<<"Choose n :- If you are New customer to LI"<<endl;
    cout<<"\t"<<"Choose f :- If you are Frequent customer to LI"<<endl;
    cout<<"Enter your choice : ";
    cin>>c;
    switch(c)
    {
    case 'f':
    cout<<"\t"<<"Here you go!! :- "<<endl;
    cout<<"\t\t\t"<<"1:Mostly Ordered"<<endl;
    cout<<"\t\t\t"<<"2:New introductions"<<endl;
    cout<<"\t\t\t"<<"3:Offers of the day"<<endl;
    cout<<"Enter your choice : ";
    cin>>f;
    switch(f)
    {
    case 1:
    cout<<"\t\t\t\t"<<"!!!  Your choice is Mostly ordered !!!"<<endl;
    cout<<"   1:Butterscotch Ribbon   "<<endl;
    cout<<"   2:Chocolate chip        "<<endl;
    cout<<"   3:Rainbow Sherbet       "<<endl;
    cout<<"Enter your choice : ";
    cin>>s1;
    switch(s1)
      {
    case 1:
    bill=bill+210;
    cout<<"Butterscotch Ribbon :"<<"\t"<<"Rs.210"<<endl;
    break;
    case 2:
    bill=bill+240;
    cout<<"Chocolate chip :"<<"\t"<<"Rs.240"<<endl;
    break;
    case 3:
    bill=bill+260;
    cout<<"Rainbow Sherbet:"<<"\t"<<"Rs.260"<<endl;
	} 
    break;						
  }


    case 2:
    cout<<"\t\t\t"<<"!!! Your choice is New introductions !!!"<<endl;
    cout<<"        1:Rocky road   "          <<endl;
    cout<<"        2:Very berry strawberry " <<endl;
    cout<<"        3:Jamoca coffee "         <<endl;
    cout<<"enter your choice :";
    cin>>s2;
    switch(s2)
    {
    case 1:
                     bill=bill+325;
                     cout<<"Rocky road :"<<"\t"<<"Rs.325"<<endl;
                     break;
                    case 2:
                     bill=bill+350;
                     cout<<"Very berry strawberry :"<<"\t"<<"Rs.350"<<endl;
                     break;
                    case 3:
                     bill=bill+300;
                     cout<<"Jamoca coffee :"<<"\t"<<"Rs.300"<<endl;
   
                    }
                    break;
                
                    case 3:
                           cout<<"\t\t\t"<<" !!! Your choice is offers of the day !!!"<<endl;
                           cout<<"       1:Banana Nut Fudge"      <<endl;
                           cout<<"       2:Cherry Macaroon"       <<endl;
                           cout<<"       3:Vanilla burnt Almond"  <<endl;
                           cout<<"enter your choice :";
                           cin>>s3;
                           switch(s3)
                           {
                           case 1:
                            bill=bill+190;
                            cout<<"Banana Nut Fudge:"<<"\t"<<"Rs.190"<<endl;
                            break;
                           case 2:
                            bill=bill+175;
                            cout<<"Cherry Macaroon :"<<"\t"<<"Rs.175"<<endl;
                            break;
                           case 3:
                            bill=bill+140;
                            cout<<"Vanilla burnt Almond:"<<"\t"<<"Rs.140"<<endl;
                            break;
             }
             break;
       case 'n':
       	cout<<"\t\t"<<"HEARTY WELCOME ~ NEW CUSTOMER ~"<<endl;
       	cout<<"\t"<<"The available recipes are :"<<endl;
              cout<<"\t\t"<<"1:Scoops"<<endl;
              cout<<"\t\t"<<"2:Indulge"<<endl;
              cout<<"\t\t"<<"3:Refresh"<<endl;
              cin>>n;
              switch(n)
              {
              case 1:
                     cout<<"Your choice is Scoops"<<endl;
                     cout<<"        1:Baseball Nut"              <<endl;
                     cout<<"        2:Caramel Chocolate Crunch"  <<endl;
                     cout<<"        3:Dulce de leche"            <<endl;
                     cout<<"Enter your choice : ";
                           cin>>n1;
                           switch(n1)
                           {
                           case 1:
                           bill=bill+70;
                           cout<<"Baseball Nut:"<<"\t"<<"Rs.70"<<endl;
                           break;
                           case 2:
                           bill=bill+100;
                           cout<<"Caramel Chocolate Crunch :"<<"\t"<<" Rs.100"<<endl;
                           break;
                           case 3:
                            bill=bill+120;
                            cout<<"Dulce de leche:"<<"\t"<<" Rs.120"<<endl;
    
							}
                           break;
                    case 2:
                     cout<<"Your choice is Indulge"<<endl;
                     cout<<"         1:Take Me Home"       <<endl;
                     cout<<"         2:Signature Sundaes"  <<endl;
                     cout<<"         3:Scoops of Joy"      <<endl;
                     cout<<"Enter your choice : ";
                           cin>>n2;
                           switch(n2)
                           {
                           case 1:
                           bill=bill+400;
                           cout<<"Take Me Home:"<<"\t"<<" Rs.400"<<endl;
                           break;
                           case 2:
                           bill=bill+450;
                           cout<<"Signature Sundaes :"<<"\t"<<" Rs.450"<<endl;
                           break;
                           case 3:
                            bill=bill+320;
                            cout<<"Scoops of Joy:"<<"\t"<<" Rs.320"<<endl;
							}
                           break;
                           case 3:
                     cout<<"Your choice is Refresh"<<endl;
                     cout<<"      1:Fruity thick shake"     <<endl;
                     cout<<"      2:Caramel thick shake"    <<endl;
                     cout<<"      3:Chocolate thick shake"  <<endl;
                     cout<<"Enter your choice : ";
                           cin>>n3;
                           switch(n3)
                           {
                           case 1:
                           bill=bill+150;
                           cout<<":Fruity thick shake:"<<"\t"<<" Rs.150"<<endl;
                           break;
                           case 2:
                           bill=bill+170;
                           cout<<"Caramel thick shake:"<<"\t"<<" Rs.170"<<endl;
                           break;
                           case 3:
                            bill=bill+120;
                            cout<<"Chocolate thick shake:"<<"\t"<<" Rs.120"<<endl;

							}
                           break;
              }
       }
}
};

class repeat : public icecream
{
       char ch;
public:
       void take()
       {
    cout<<"To make another choice : 'a'"<<endl;
    cout<<"To get the bill : 'b'";
   
    cin>>ch;
    if(ch=='a')
    {
    menu_list();
    take();
    }
    else
    {
   cout<<"\t\t\t\t"<<      "$ $ $ $ Your Bill @ LOVELY WORLD is : Rs: "   <<bill;
   cout<<"\t\t\t\t\t\t\t\t\t\t\t\t"<<" ~! ~! ~! THANK YOU ~! ~! ~! "<<endl;
   cout<<"\t\t\t\t\t\t" <<" //   PLEASE VISIT AGAIN    // "  ;
    }
	}
};
int main()
{
    repeat r;
	r.menu_list();
	r.take();
    fstream ice;
	ice.open("gpn.txt",ios::out|ios::app);
	ice<<"Customer Name : "<<name<<endl;
	ice<<"Customer ID : "<<cusID<<endl;
	ice<<"Your bill is :"<<bill<<endl;
}
