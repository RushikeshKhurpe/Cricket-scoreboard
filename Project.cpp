#include <bits/stdc++.h>
#include<iomanip>
#include<fstream>
#include"Match.h"
#include"Inning.h"
#include "Batsman.h"
#include "Bowler.h"
#include"T_10.h"
#include"T_20.h"
#include"Ltd_Over_Match.h"

using namespace std;
using namespace::example;
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::fstream;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;
using example::Batsman;

int main(){
cout<<"**********************************************************************"<<endl;
   cout<<"Select match type by selecting its option(1/2): "<<endl;
cout<<"1.T10"<<endl;
cout<<"2.T20"<<endl;
int inp; 
cin>>inp;
string t1,t2;
int tball;

if(inp==1){
  T10_Match scorecard;
    scorecard.match_status();
    scorecard.select_venue();
    scorecard.select_teams();
    t1=scorecard.get_teamname(1);
    t2=scorecard.get_teamname(2);
    scorecard.set_Max_Over();
     tball=scorecard.Get_Max_Over();
}
else{
 T20_Match scorecard;
    scorecard.match_status();
    scorecard.select_venue();
    scorecard.select_teams();
  t1=scorecard.get_teamname(1);
    t2=scorecard.get_teamname(2);
    scorecard.set_Max_Over();
     tball=scorecard.Get_Max_Over();
}

string match="match.txt"; string line;
 if(inp==1){line="T10";} else{line="T20";}

    fstream set_overs; set_overs.open(match,ios::app);   
    set_overs<<setw(55)<<"**"<<line<<"**"<<endl; set_overs.close(); 
   
    Batsman Bateam1[12],Bateam2[12];
    Bowler Boteam1[6],Boteam2[6];
    Inning inn1;
    Inning inn2; 
    
 
    int static u=1;
   while(u<=2){  
     int q,z;
    cout<<endl;for(int c=0;c<30;c++){sleep_for(milliseconds(50));cout<<"-";} cout<<endl;

if(u==1){  cout<<"Enter Batsman details of team ---"<<t1<<"---"<<endl;}
   else {cout<<"Enter Batsman details of team ---"<<t2<<"---"<<endl;}
  int  i=1,k=1; 

  do{
   
     cout<<'\n';cout<<"Select any one option"<<endl;sleep_for(milliseconds(200));
      cout<<"(1) Enter_batsman_details"<<endl; sleep_for(milliseconds(500));
      cout<<"(2) update_batsman_details "<<endl;sleep_for(milliseconds(500));
       cout<<"(3) Delete_Batsman_details "<<endl;sleep_for(milliseconds(500));
     
     
      int choice;cin>>choice;
      
      switch(choice){
    
case 1: 
{


       cout<<"serial no. : "; int n; cin>>n; int m=n+11; 
      if(u==1){  Bateam1[i].display_name(Bateam1,n);}
       else{  Bateam2[i].display_name(Bateam2,m);}

       cout<<"Runs Scored : ";int runs; cin>>runs;
      cout<<"Balls faced : "; int balls_faced; cin>>balls_faced;
       cout<<"fours : "; int fours; cin>>fours;
      cout<<"sixes : "; int sixes; cin>>sixes; 
     if(u==1){ 

          Bateam1[i].Enter_batsman_details(n,runs,balls_faced,fours,sixes);
                  
             }

       else {
              Bateam2[i].Enter_batsman_details(m,runs,balls_faced,fours,sixes);
                
       }
          i++;k++;break;
          } 
      
    
case 2:
      
      {cout<<"serial no. : "; int n; cin>>n;   int m=n+11;
       if(u==1){Bateam1[i].display_name(Bateam1,n);} else{Boteam2[i].display_name(Boteam2,m);}
       cout<<"Runs Scored : ";int runs; cin>>runs;
      cout<<"Balls faced : "; int balls_faced; cin>>balls_faced;
       cout<<"fours : "; int fours; cin>>fours;
      cout<<"sixes : "; int sixes; cin>>sixes;
       
    if(u==1){ Bateam1[i].update_batsman_details(Bateam1,n,runs,balls_faced,fours,sixes);}
      else {Bateam2[i].update_batsman_details(Bateam2,m,runs,balls_faced,fours,sixes);}

       break;
      }
      
      
case 3:

       {cout<<"Enter Serial no. of Batsman : "; int n; cin>>n;  int m=n+11; 
       if(u==1){Bateam1[i].display_name(Bateam1,n);  Bateam1[i].Delete_Batsman_details(n,Bateam1);}
       else{Boteam2[i].display_name(Boteam2,m); Boteam2[i].Delete_Bowler_details(m,Boteam2);}

        i--;k--; break;}


 }
  if(u==1)
    {    q=Bateam1[i].Total_Ball(Bateam1);
          if(tball==10){ 
                      z=60-q; 
                      if(z<0){
                        z=0;
                      }
                  cout<<"Total Runs="<<Bateam1[i].Total_Score(Bateam1)<<"   "<<"Balls Left = "<<z<<endl;
                       }
     else if(tball==20){
                    z=120-q;
                    if(z<0){
                        z=0;
                      }
                    cout<<"Total Runs="<<Bateam1[i].Total_Score(Bateam1)<<"   "<<"Balls Left = "<<z<<endl;
                       }
    }
else{
  if(tball==10){
                        q=Bateam2[i].Total_Ball(Bateam2);
                        z=60-q;
                        if(z<0){
                        z=0;
                      }
                      
        int tr=Bateam1[i].Total_Score(Bateam1)-Bateam2[i].Total_Score(Bateam2); if(tr>=0){ cout<<tr<<" runs needed in "<<z<<" balls"<<endl; } else break;} 
  else if(tball==20){
                         q=Bateam1[i].Total_Ball(Bateam2);
                         z=120-q; if(z<0){ 
                        z=0;}    
        int tr=Bateam1[i].Total_Score(Bateam1)-Bateam2[i].Total_Score(Bateam2); if(tr>=0){ cout<<tr<<" runs needed in "<<z<<" balls"<<endl;  }else break;}
}
}

while(i<12 && z>0);


 cout<<endl;for(int c=0;c<30;c++){sleep_for(milliseconds(50));cout<<"-";} cout<<endl;
i=1,k=1;

if(u==1){cout<<"Enter Bowler details of team "<<t2<<endl;}
else {cout<<"Enter Bowlers detail of team "<<t1<<endl;}

  do{ cout<<'\n';cout<<"Select any one option"<<endl;sleep_for(milliseconds(200));
      if(tball==10){cout<<"!! overs bowled by a Bowler are 2 !!"<<endl;}
      if(tball==20){cout<<"!! overs bowled by a Bowler are 4 !!"<<endl;}
      cout<<"(1) Enter_bowler_details"<<endl; sleep_for(milliseconds(500));
      cout<<"(2) update_bowler_details "<<endl;sleep_for(milliseconds(500));
       cout<<"(3) delete_bowler_details "<<endl;sleep_for(milliseconds(500));
      
     
      int choice;cin>>choice;
      
      switch(choice){
    
case 1: 
      
     {cout<<"serial no. : "; int n,m; cin>>n;m=n+11;  
      if(u==1){Boteam2[i].display_name(Boteam2,m);}
      else {  Boteam1[i].display_name(Boteam1,n);}
       cout<<"Overs_bowled : ";int overs; cin>>overs;
      cout<<"Maiden_overs_bowled : "; int maiden_overs; cin>>maiden_overs;
       cout<<"Runs_given : "; int runs_given; cin>>runs_given;
      cout<<"Wickets_taken : "; int wickets; cin>>wickets; 
       
 
      
       if(u==1){Boteam2[i].Enter_bowler_details(m,overs,maiden_overs,runs_given,wickets);}
       else{Boteam1[i].Enter_bowler_details(n,overs,maiden_overs,runs_given,wickets);}
       i++;k++;break;
       } 
  
 
case 2:
      
      {cout<<"serial no. : "; int n; cin>>n; int m=n+11;
      if(u==1){ Boteam2[i].display_name(Boteam2,n=m);}
      else{  Boteam1[i].display_name(Boteam1,n);} 
       cout<<"Overs_bowled : ";int overs; cin>>overs;
      cout<<"Maiden_overs_bowled : "; int maiden_overs; cin>>maiden_overs;
       cout<<"Runs_given : "; int runs_given; cin>>runs_given;
      cout<<"Wickets_taken : "; int wickets; cin>>wickets; 
       
     if(u==1){ Boteam2[i].update_bowler_details(Boteam2,m,overs,maiden_overs,runs_given,wickets);}
      else{ Boteam1[i].update_bowler_details(Boteam1,n,overs,maiden_overs,runs_given,wickets);}
       break;
      }
      
      
case 3:

{cout<<"Serial no. of Bowler : "; int n,m; cin>>n;m=n+11; 
      
 if(u==1){  Boteam2[i].display_name(Boteam2,m); Boteam2[i].Delete_Bowler_details(m,Boteam2);}

  else{  Boteam1[i].display_name(Boteam1,n);
  
       Boteam1[i].Delete_Bowler_details(n,Boteam1); }
        i--;k--; break;}
 }}

 while(i<6);

     if(u==1) {   int r1=Bateam1[i].Total_Score(Bateam1); int w1=Boteam2[i].Total_Wickets(Boteam2);
     
      fstream set_t1; set_t1.open(match,ios::app);   
    set_t1<<endl<<setw(40)<<t1<<" -->"<<setw(10)<<"   Total Score :  "<<r1<<"/"<<w1<<endl;
     set_t1.close();   inn1.DisplayInning(Bateam1,Boteam2,u); }



     else{  int r2=Bateam2[i].Total_Score(Bateam2); int w2=Boteam1[i].Total_Wickets(Boteam1);
     
      fstream set_t2; set_t2.open(match,ios::app);   
    set_t2<<endl<<setw(40)<<t2<<" -->"<<setw(10)<<"   Total Score :  "<<r2<<"/"<<w2<<endl<<endl;
     set_t2.close();   inn2.DisplayInning(Bateam2,Boteam1,u);} 
     
 u++;}

 
string out1 = inn1.decide_winner();   fstream winner;

if(out1=="team1"){ int diff= inn1.difference();
              winner.open(match,ios::app);   
                  winner<<setw(40)<<"---------------------"<<t1<<" wins by "<<diff<<" runs ---------------------"<<endl<<endl; winner.close(); }

else if(out1=="team2"){int diff= inn2.difference(); 
               winner.open(match,ios::app);   
                  winner<<setw(40)<<"--------------------- "<<t2<<" wins by "<<diff<<" wickets ---------------------"<<endl<<endl; winner.close(); }

else{   winner.open(match,ios::app);   
                  winner<<setw(50)<<"** Match TIED **"<<endl<<endl; winner.close(); }

cout<<endl<<endl; 


cout<<"                                                     MATCH RESULTS"<<endl;
cout<<"==============================================================================================================="<<endl<<endl;

ifstream result; result.open(match,ios::out);  
      
        string output;

   while(getline(result,output)){ sleep_for(milliseconds(2000)); cout<<output<<endl;} result.close();

   

remove("squadXI.txt"); remove("match.txt"); 

}




      
 


