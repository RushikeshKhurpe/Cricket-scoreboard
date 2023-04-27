#ifndef __Bowler
#define __Bowler

#include<iostream>
using std::string;
namespace example
{
    class  Bowler{

        
    private:
       int serial;
        string Name;
        int Overs_bowled;
        int Maiden_overs_bowled;
        int Runs_given;
        int Wickets_taken;
        float Economy;
        
    public:
        Bowler();     
       void Enter_bowler_details(int n,int ob,int mob,int rg,int wt);          
       void update_bowler_details(Bowler Bowler[],int n,int ob,int mob,int rg,int wt);
       void display(Bowler serial[]);
        void display_name(Bowler Bowl[],int n);
       void Delete_Bowler_details(int n,Bowler Bowl[]);
       int Total_Wickets(Bowler Bowl[]);
};
}
#endif