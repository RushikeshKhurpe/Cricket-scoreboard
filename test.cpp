#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class scorecard{
char batname[11][20];
int runscored[11];
char situation[11][11];
char mode[11][15];
char bowlername[11][20];
float oversplayed[11];
int maiden[11];
int runsgiven[11];
int wicketstaken[11];
public:

void updatebatsman(void);
void updatebowler(void);
void displaybat(void);
void displaybowl(void);
void menu(void);
scorecard()
{for(int n=0;n<12;n++)
   {

    runscored[n]={0};
     oversplayed[n]={0};
 maiden[n]={0};
 runsgiven[n]={0};
 wicketstaken[n]={0};
   }
}




};
int main()
{
    int jb=0;
     scorecard s1;
    int kb;
    s1.menu();
    do
    {
     cout<< "Enter the option"<<endl;
        cout<<"(1) Display batting score"<<endl<<"(2) Display Bowling score"<<endl<<"(3) Update batting score"<<endl;
        cout<<"(4) Update Bowling score"<<endl;

        cin >>kb;
        switch(kb)
        {
            case 1 : s1.displaybat();
                    break;
            case 2 :s1.displaybowl();break;
            case 3:s1.updatebatsman();break;
            case 4:s1.updatebowler();break;
            default:cout<<"Wrong choice";
        }
    }while (jb<1);
}

void scorecard::updatebowler(void)
    {char bowlname[20];
    int str,k,option,overnumbers,maidenumb,uprun,upwicket;
        cout<<"Enter Bowler name:";
        cin.getline(bowlname,20);
    for( k=0;k<11;k++)
      {str=  strcmp(bowlername[k],bowlname);
      if (str== 0)
      {
          cout<<"Menu for Bowler information update "<<endl;
          cout<<"(1) Update Number of overs"<<endl<<"(2) Update maiden overs"<<endl<<"(3) Update runs given"<<endl;
          cout<<"(4) Update wickets taken"<<endl;
          cin >> option;
          switch(option)
          {
              case 1:{cout<<"Enter Numbers of overs to be updated:";
                      cin >>overnumbers;
                      cout<<endl;
                      oversplayed[k]+=overnumbers;
                      break;
                     }
               case 2:{cout <<"Enter the number of maiden overs to be updated:";
                       cin>>maidenumb;
                       cout<<endl;
                       maiden[k]+=maidenumb;
                       break;
                      }
               case 3:{cout <<"Enter the number of runs to be added:";
                       cin>>uprun;
                       cout<<endl;
                       runsgiven[k]+=uprun;
                       break;

                      }
                case 4: {cout<<"Enter number of wickets to be updated:";
                         cin >>upwicket;
                         cout<<endl;
                         wicketstaken[k]+=upwicket;break;
                        }
                   default:cout<<"wroung choice";

          }
          break;
      }



      }
      if (str!=0)
        cout <<"You entered wrong player."<<endl;

    }



     void scorecard::updatebatsman(void)
    {char batsmaname[20];
    int str,k;
        cout<<"Enter Batsman name:";
        cin.getline(batsmaname,20);
    for( k=0;k<11;k++)
      {str=  strcmp(batname[k],batsmaname);
      if (str== 0)
      {
          cout<<"enter runs scored:";
          cin>>runscored[k];

          cout<<endl<<"enter weather out or not out:";
          cin>>situation[k];
          cout<<endl<<"enter mode(if batsman out) by which batsman was out:";
          cin>>mode[k];
          break;
      }



      }
      if (str!=0)
        cout <<"You entered wrong player."<<endl;

    }
void scorecard::displaybat(void)
{
    cout << "Batsman name"<<'t'<<"Runs scored"<<'t'<<"situation"<<'t'<<"mode"<<endl;

    for(int j=0;j<12;j++)
    {
        cout<<batname[j]<<'t'<<runscored[j]<<'t'<<situation[j]<<'t'<<mode[j]<<endl;
    }
}
void scorecard::displaybowl(void)
{
     cout << "Bowler name"<<'t'<<"overs played"<<'t'<<"maiden overs"<<'t'<<"wicket taken"<<'t'<<"Runs given"<<endl;
    cout<<endl;
    for(int j=0;j++;j<12)
    {
        cout<<bowlername[j]<<'t'<<oversplayed[j]<<'t'<<maiden[j]<<'t'<<wicketstaken[j]<<'t'<<runsgiven[j]<<endl;
    }
}
void scorecard::menu(void)

{
    cout<<"Enter the name of players of batting team"<<endl;
    for (int k=0;k<11;k++)
    {

        cout <<"Enter name of player "<<k+1<<":";
    cin>>batname[k];
    }
    cout <<"Enter the name of players of bowling team"<<endl;
    for (int n=0;n<11;n++)
    {

        cout <<"Enter name of player "<<n+1<<":";
    cin>>bowlername[n];
    }
}
