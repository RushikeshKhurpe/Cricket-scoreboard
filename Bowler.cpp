#include<bits/stdc++.h>
#include"Bowler.h"
#include <iomanip>
#include<fstream>
using std::string;
using std::cout;
using std::endl;
using std::getline;
using std::ifstream;
using std::setprecision;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;
using namespace std;
namespace example
{
  Bowler::Bowler(){
          
             Overs_bowled=0;
             Maiden_overs_bowled=0;
             Runs_given=0;
             Wickets_taken=0;
             Economy=0;
  }
        
void Bowler:: Enter_bowler_details(int n,int ob,int mob,int rg,int wt){

      
    serial=n;  string bowler="squadXI.txt";  ifstream select_bowler(bowler); string bowler_line;int c=0;

   while(getline(select_bowler,bowler_line)){if(c==n-1){ Name=bowler_line;break;}c++;} select_bowler.close();
              
            Overs_bowled=ob;
            Maiden_overs_bowled=mob;
            Runs_given=rg;
            Wickets_taken=wt;
            Economy = (float)rg/(float)ob;    
        }


        void Bowler::display_name(Bowler Bowl[],int n){ 
        string d_n="squadXI.txt";  ifstream display_name(d_n); string line;int c=0;

   while(getline(display_name,line)){if(c==n-1) {cout<<"Name : "<<line<<endl;break;}c++;} display_name.close();}

        
 void  Bowler::update_bowler_details(Bowler Bowl[],int m,int ob,int mob,int rg,int wt){
    
    for(int j=1;j<6;j++){
            if(m==Bowl[j].serial){

         string bowler="squadXI.txt";  ifstream select_bowler(bowler); string bowler_line;int c=0;

   while(getline(select_bowler,bowler_line)){if(c==m-1) Name=bowler_line;c++;} select_bowler.close();

              Bowl[j].Overs_bowled=ob;     Bowl[j].Maiden_overs_bowled=mob;    
              Bowl[j].Runs_given=rg;    Bowl[j].Wickets_taken=wt; 
             Bowl[j].Economy=(float)rg/(float)ob;
         
                 goto y;
              }}

              cout<<"Bowler not found";for(int b=0;b<4;b++){sleep_for(milliseconds(300));
               cout<<".";}
               sleep_for(milliseconds(600)); 
              cout<<"  Please enter bowler details first"<<endl; 
              y:;

        }
  
        
  void Bowler::Delete_Bowler_details(int n,Bowler Bowl[]){
              for (int c = n; c < 11; c++)
         Bowl[c] = Bowl[c+1];
         
     }

          void  Bowler::display(Bowler serial[]){
            cout
       << left
        << setw(25)
        << "NAME"
        << left
        << setw(15)
        << "OVERS"
        << left        
        << setw(15)
        << "MAIDEN"
        << left
        << setw(15)
        << "RUNS GIVEN"
        << left
        << setw(15)
        << "WICKET"
        << left
        << setw(20)
        << "ECONOMY"
        << endl;
           
            for(int i=1;i<=5;i++){
               cout
           << left
            << setw(25) 
            << serial[i].Name
            << left
            << setw(15)
            << serial[i].Overs_bowled
            << left
            << setw(15)
            << serial[i].Maiden_overs_bowled
            << left
            << setw(15)
            << serial[i].Runs_given
            << left 
            << setw(15)
            << serial[i].Wickets_taken
            << left
            << setprecision(3)
            << setw(20)
            << serial[i].Economy
        
            << endl;
            }
          }
        int Bowler::Total_Wickets(Bowler Bowl[]){int total=0;
             for(int i=1;i<6;i++){total+=Bowl[i].Wickets_taken;}
             return total;
 }

 };
