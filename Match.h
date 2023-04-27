#ifndef __MATCH
#define __MATCH

#include<iostream>
using std::string;
namespace example
{
    class match
{ private:  int venue_option, team_1_option, team_2_option, match_status_option,team_name;
             string team1name,team2name;
    
  string match="match.txt", Squad;
 
   public: void select_venue();

    void select_teams();
        
    void select_squad(string team);
    
    void match_status();

    string get_teamname(int u);

};
}
#endif