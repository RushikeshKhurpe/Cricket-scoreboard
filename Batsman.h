#ifndef __Batsman
#define __Batsman

#include<iostream>
using std::string;
namespace example
{
    class  Batsman{
    public:
            int serial;
    private:
        string Name;
        int Runs_scored;
        int Balls_faced;
        int No_of_fours;
        int No_of_sixes;
        float Strike_rate;
        
    public:
        Batsman();     
       void Enter_batsman_details(int n,int r,int b,int f,int s);          
       void update_batsman_details(Batsman Bat[],int n,int r,int b,int f,int s);
       void display1(Batsman serial[]);
       void display2(Batsman serial);
       void display_name(Batsman Bat[],int n);
       void Delete_Batsman_details(int n,Batsman Bat[]);
       int Total_Score(Batsman bat[]);
};
}
#endif