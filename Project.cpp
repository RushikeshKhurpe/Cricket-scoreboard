#include <bits/stdc++.h>
#include<iomanip>
#include"Match.h"
#include"Inning.h"
#include "Batsman.h"
#include "Bowler.h"
#include"T_10.h"
#include"T_20.h"
#include"Ltd_Over_Match.h"

//using namespace std;
using namespace::example;
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::this_thread::sleep_for;

using std::chrono::milliseconds;

using example::Batsman;

int main(){
cout<<"**********************************************************************"<<endl;
   cout<<"Select match type by selecting its option(1/2): "<<endl;
cout<<"1.T10"<<endl;
cout<<"2.T20"<<endl;
int inp; string t1,t2;
cin>>inp;
if(inp==1){
  T10_Match scorecard;
    scorecard.match_status();
    scorecard.select_venue();
    scorecard.select_teams();
    t1=scorecard.set_teamname(1);
    t2=scorecard.set_teamname(2);
}
else{
 T20_Match scorecard;
    scorecard.match_status();
    scorecard.select_venue();
    scorecard.select_teams();
 scorecard.set_teamname(2);
  t1=scorecard.set_teamname(1);
    t2=scorecard.set_teamname(2);
}
   
    Batsman Bateam1[12],Bateam2[12];
    Bowler Boteam1[6],Boteam2[6];
    Inning inn1;
    Inning inn2; 

    int static u=1;
   while(u<=2){  
    cout<<endl<<"-------------------------------"<<endl;

if(u==1){  cout<<"Enter detail for Batsman of team "<<t1<<endl;}
    else {cout<<"Enter detail of batsman of team "<<t2<<endl;}
  int  i=1,k=1; 

  do{ cout<<'\n';cout<<"Select any one option"<<endl;//sleep_for(milliseconds(200));
      cout<<"(1) Enter_batsman_details"<<endl; //sleep_for(milliseconds(500));
      cout<<"(2) update_batsman_details "<<endl;//sleep_for(milliseconds(500));
       cout<<"(3) Delete_Batsman_details "<<endl;//sleep_for(milliseconds(500));
     
     
      int choice;cin>>choice;
      
      switch(choice){
    
case 1: 
      
     {cout<<"serial no. : "; int n; cin>>n; int m=n+11;
      if(u==1){Bateam1[i].display_name(Bateam1,n);} else{Bateam2[i].display_name(Bateam2,m);}

       cout<<"Runs Scored : ";int runs; cin>>runs;
      cout<<"Balls faced : "; int balls_faced; cin>>balls_faced;
       cout<<"fours : "; int fours; cin>>fours;
      cout<<"sixes : "; int sixes; cin>>sixes; 
       
 
      
     if(u==1){  Bateam1[i].Enter_batsman_details(n,runs,balls_faced,fours,sixes);}
       else { Bateam2[i].Enter_batsman_details(m,runs,balls_faced,fours,sixes);}
    
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


 }}

while(i<3);

i=1,k=1;
cout<<endl<<"---------------------------------------"<<endl;
if(u==1){cout<<"Enter Bowlers Detail of team2"<<endl;}
else {cout<<"Enter Bowlers Detail of team1"<<endl;}

  do{ cout<<'\n';cout<<"Select any one option"<<endl;//sleep_for(milliseconds(200));
      cout<<"(1) Enter_bowler_details"<<endl; //sleep_for(milliseconds(500));
      cout<<"(2) update_bowler_details "<<endl;//sleep_for(milliseconds(500));
       cout<<"(3) delete_bowler_details "<<endl;//sleep_for(milliseconds(500));
      
     
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

 while(i<4);
     if(u==1) inn1.DisplayInning(Bateam1,Boteam2);
     else{inn2.DisplayInning(Bateam2,Boteam1);} u++;}

}




      
 


