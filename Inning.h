#ifndef __INNING
#define __INNING

#include<iostream>
#include"Batsman.h"
#include "Bowler.h"
using std::string;
namespace example
{
    class Inning: public Batsman,public Bowler{

      private: 
      static int tr1,tr2,tw1,tw2;
    public:
  void DisplayInning(Batsman Bateam1[],Bowler Boteam2[],int u);
  string decide_winner();
  int difference();
  void line();
  void star();
};
}
#endif
