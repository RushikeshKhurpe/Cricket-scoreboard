#include<bits/stdc++.h>
#include<fstream>
#include"Match.h"
using std::endl;
using std::cout;
using namespace std;
namespace example{

  void match::select_venue(void){ 
        string venue="venue.txt";  
        ifstream select_venue(venue,ios::in); 
        string venue_line;

   while(getline(select_venue,venue_line)){ cout<<venue_line<<endl;} select_venue.close();

        cout << "select the match venue from above by selecting  its no." << endl;
        cin >> venue_option;
     
  ifstream select_Venue(venue,ios::in);  int c=0; 


  while(getline(select_Venue,venue_line)){ if(c== venue_option){ 
    ofstream file(match,ios::app);   venue_line.erase(0,2);
    file<<"***"<<venue_line<<"***"<<endl;goto x;}else c++; }x:;

    cout<<"**********************************************************************"<<endl;
}

void match::select_teams(void){
    int t=1;while(t<=2){
           
  
if(t==1){ cout << "Select 1st team: " << endl;}
     if(t==2){  cout << "Select 2nd team: " << endl;}
      
        string teams="teams.txt";  ifstream select_teams(teams); string teams_line;

   while(getline(select_teams,teams_line)){ cout<<teams_line<<endl;} select_teams.close();
   cout << "select the team from above by selecting its no." << endl;

       if(t==1){ cin >> team_1_option;} if(t==2){cin >> team_2_option;}
     
ifstream select_Teams(teams,ios::in);  int c=0,option=0; 
if(t==1)  { option=team_1_option;} else{  option=team_2_option;}

    while(getline(select_Teams,teams_line)){  
      if(c==option){ 
    ofstream file(match,ios::app);  teams_line.erase(0,2);
   
    if(t==1){file<<"**"<<teams_line;}  if(t==2){file<<" VS "<<teams_line<<"**";}
    goto x;}else c++; }x:;

        select_squad(teams_line);
cout<<"**********************************************************************"<<endl; t++;}}


string match::set_teamname(int n){

  string match="match.txt";   fstream select_name(match,ios::in);  int c=0; string name;


  while(getline(select_name,name)){ 
      if(c==3){select_name.open(match.c_str());
                             while(select_name>>name){
                           if(n==1){name.erase(0,2);return name;goto x;} if(n==2){return name;goto x;}}}
      else c++; }x:;
      return "";
}



void match::select_squad(string team){

      Squad="squadXI";string z=".txt";
      if (team.back() == '\r') {
   team.pop_back();
}team.append(z);

    
      ifstream select_squad(team); string player_line;
        
   while(getline(select_squad,player_line)){ cout<<player_line<<endl;
   } select_squad.close();
    
   cout<<"Select 11 players : "<<endl;
   int player[11];     Squad+=".txt";
  for(int i=0;i<11;i++){cin>>player[i];
 
  ifstream match_Squad(team,ios::in);  int c=0; 
  
   while(getline(match_Squad,player_line)){ if(c==player[i]){ 
    ofstream file(Squad,ios::app); 
    if(player[i]<10){player_line.erase(0,2);}
    else player_line.erase(0,3);
    file<<player_line<<endl;goto x;}else c++; }x:;}
}
 
void match::match_status(void){
    string matchstatus="matchstatus.txt";  ifstream match_status(matchstatus); string matchstatus_line;

    while(getline(match_status,matchstatus_line)){ cout<<matchstatus_line<<endl;} match_status.close();
 cout << "select the match status from above by selecting  its no." << endl;
        cin >> match_status_option;
   
   ifstream match_Status(matchstatus,ios::in); int c=0; 

   while(getline(match_Status,matchstatus_line)){ if(c== match_status_option){ 
    ofstream file(match,ios::app); matchstatus_line.erase(0,2);
    file<<"******"<<matchstatus_line<<"*****"<<endl;goto x;}else c++; }x:;

    cout<<"**********************************************************************"<<endl;
}}
