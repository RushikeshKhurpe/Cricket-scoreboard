#include<bits/stdc++.h>
#include <iomanip>
#include"Batsman.h"
#include "Bowler.h"
#include"Inning.h"


using namespace std;
using namespace::example;
namespace example{
  int Inning::tr1=0;
  int Inning::tr2=0;
  int Inning::tw1=0;
  int Inning::tw2=0;
    void Inning::line()
       {   for(int i=1;i<51;i++)
          cout<<"--";

     cout<<"\n";}
   void Inning::star()
     
          {  for(int i=1;i<51;i++)
          cout<<"**";

     cout<<"\n";
   }
   
    

void Inning::DisplayInning(Batsman Bateam1[],Bowler Boteam2[],int u){
    
    cout<<"\n\n\n";
    cout<<"***********************************BATTING STATISTIC***********************************"<<endl;
     line();
  cout<<endl;
     
     
      Batsman::display1(Bateam1,u);
      cout<<"\n\n\n";
    cout<<"**********************************BOWLING STATISTIC***********************************"<<endl;
     line();
  cout<<endl;
      Bowler:: display(Boteam2);
     int TotalR= Batsman::Total_Score(Bateam1);
     int TotalW=Bowler::Total_Wickets(Boteam2); 
     
     if(u==1){ tr1=TotalR; tw1=TotalW;}   
     else{ tr2=TotalR; tw2=TotalW;} 



     cout<<endl; line();cout<<endl;
     cout<<"Total Runs = "<<TotalR<<endl;
     cout<<"Total Wickets = "<<TotalW<<endl;
     line();
cout<<endl<<endl<<endl;
star();
if(u==1){cout<<setw(50)<<"                                              INNING 1 ENDS"<<endl;}
if(u==2){cout<<setw(50)<<"                                            END OF THE MATCH"<<endl;}
star();}

string Inning::decide_winner(){
       
      if(tr2>tr1){
      
        return "team2";} else if(tr2<tr1){ return "team1";}  else{return "tie";} 
    }

    int Inning::difference(){
         int z=0;
      if(decide_winner()=="team1"){  z=tr1-tr2; return z;}
      else if(decide_winner()=="team2"){ z = 10-tw2; return z;}
       return 0;
    }


}
