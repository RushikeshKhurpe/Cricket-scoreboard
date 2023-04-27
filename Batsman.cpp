
#include<bits/stdc++.h>
#include"Batsman.h"
#include<iomanip>
using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::ifstream;
using std::getline;
using std::setprecision;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;
using namespace std;
namespace example
{
  Batsman::Batsman(){
             Name="";          
             Runs_scored=0;
             Balls_faced=0;
             No_of_fours=0;
             No_of_sixes=0;
             Strike_rate;
  }
        
vector<int>v;

void Batsman:: Enter_batsman_details(int n,int r,int b,int f,int s){
            
 string batsman="squadXI.txt";  ifstream select(batsman); string batsman_line;int c=0; string q;
   while(getline(select,batsman_line)){if(c==n-1) {q=batsman_line;break;} c++;} select.close();
       
    serial=n;  v.push_back(n); Runs_scored=r;  Balls_faced=b;  No_of_fours=f; No_of_sixes=s; Name+=q;
         Strike_rate=(float)r/b;
            Strike_rate = Strike_rate*100;
         
        }
        
void Batsman::display_name(Batsman Bat[],int n){  
        string d_n="squadXI.txt";  ifstream display_name(d_n); string line;int c=0;

   while(getline(display_name,line)){if(c==n-1) {cout<<"Name : "<<line<<endl;break;}c++;} display_name.close();}

 
 void  Batsman::update_batsman_details(Batsman Bat[],int n,int r,int b,int f,int s){

     for(int j=1;j<12;j++){
            if(n==Bat[j].serial){

string update_batsman="squadXI.txt";  ifstream update_select(update_batsman); string update_batsman_line;int c=0;

  while(getline(update_select,update_batsman_line)){if(c==n-1) Bat[j].Name=update_batsman_line;c++;} update_select.close();


              Bat[j].Runs_scored=r;     Bat[j].Balls_faced=b;    
              Bat[j].No_of_fours=f;    Bat[j].No_of_sixes=s; 
                 Strike_rate=(float)r/b;
         
                 Bat[j].Strike_rate = Strike_rate*100;
                 goto y;
              }}
          cout<<"Batsman not found"; for(int b=0;b<4;b++){sleep_for(milliseconds(500)); 
          cout<<".";}
           sleep_for(milliseconds(800)); 
              cout<<"  Please enter batsman details first"<<endl; 
              y:;
        }
  
        
  void Batsman::Delete_Batsman_details(int n,Batsman Bat[]){
              for (int c = n; c < 11; c++)
         Bat[c] = Bat[c+1];
         
     }


  void  Batsman::display1(Batsman serial[],int u){
       cout
        << left
        << setw(25)
        << "NAME"
        << left
        << setw(15)
        << "RUNS"
        << left
        << setw(15)
        << "BALLS"
        << left
        << setw(15)
        << "FOURS"
        << left
        << setw(16)
        << "SIXES"
        << left
        << setw(20)
        << "STRIKERATE"
        << endl;

    for(int i=1;i<12;i++){  
    
      if(serial[i].Runs_scored==0 && serial[i].Balls_faced==0){ string batsman_line="";
       sort(v.begin(),v.end());
      
          if(u==1){  for(int j=0;j<v.size();j++){if(v[i]!=i){ 
          
          string name="squadXI.txt";  ifstream select(name);int c=0; string q;
          while(getline(select,batsman_line)){if(c==i-1) {q=batsman_line;goto x;} c++;} select.close();
           }}
          x:;  serial[i].Name=batsman_line;


    cout<<serial[i].Name<<'\t'<<'\t'<<'\t'<<"----------------DO NOT BAT----------------"<<endl;}

    
    else{for(int j=0;j<v.size();j++){if(v[i]!=i+11){ 
          
          string name="squadXI.txt";  ifstream select(name);int c=0; string q;
           while(getline(select,batsman_line)){if(c==i+10) {q=batsman_line;goto y;} c++;} select.close();}}
            y:;  serial[i].Name=batsman_line;


        cout<<serial[i].Name<<'\t'<<'\t'<<'\t'<<"----------------DO NOT BAT----------------"<<endl;}
    }
  
      
   else{ cout
            << left
            << setw(25)
            << serial[i].Name
            << left
            << setw(15)
            << serial[i].Runs_scored
            << left
            << setw(15)
            << serial[i].Balls_faced
            << left
            << setw(15)
            << serial[i].No_of_fours
            << left
            << setw(16)
            << serial[i].No_of_sixes
            << left
            << setw(20)
            << setprecision(3)
            << serial[i].Strike_rate
          
            << endl;}
    }        
    }



        int Batsman::Total_Score(Batsman bat[]){int total=0;
             for(int i=1;i<12;i++){total+=bat[i].Runs_scored;}
             return total;
 }
 int Batsman::Total_Ball(Batsman bat[]){
       int total=0;
         for(int i=1;i<12;i++){total+=bat[i].Balls_faced;}
             return total;
     }

 };
 
 







