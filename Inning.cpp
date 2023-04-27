#include<bits/stdc++.h>
#include"Batsman.h"
#include "Bowler.h"
#include"Inning.h"

using namespace std;
using namespace::example;
namespace example{
    void Inning::line()
       {   for(int i=1;i<51;i++)
          cout<<"--";

     cout<<"\n";}
   void Inning::star()
     
          {  for(int i=1;i<51;i++)
          cout<<"**";

     cout<<"\n";
   }
   
    
  void Inning::DisplayInning(Batsman Bateam1[],Bowler Boteam2[]){
    
    cout<<"\n\n\n";
    cout<<setw(50)<<" BATTING STATISTIC \n";
     line();
  cout<<endl;
      Batsman::display1(Bateam1);
      cout<<"\n\n\n";
    cout<<setw(50)<<" BOWLING STATISTIC \n";
     line();
  cout<<endl;
      Bowler:: display(Boteam2);
     int TotalR= Batsman::Total_Score(Bateam1);
     int TotalW=Bowler::Total_Wickets(Boteam2);
     cout<<"Total Runs = "<<TotalR<<endl;
     cout<<"Total Wickets = "<<TotalW<<endl;
     line();
cout<<endl<<endl<<endl;
star();
cout<<setw(50)<<"Finish\n";
star();
  }
}
