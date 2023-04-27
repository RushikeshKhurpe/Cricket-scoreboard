#ifndef __MATCH
#define __MATCH

#include<iostream>
using std::string;
namespace example
{
    class match
{
  public:  
  string match="match.txt", Squad;
  int venue_option, team_1_option, team_2_option, match_status_option,team_name;

    void select_venue(void);

    void select_teams(void);
        
    void select_squad(string team);
    
    void match_status(void);

    string set_teamname(int u);

};
}
#endif