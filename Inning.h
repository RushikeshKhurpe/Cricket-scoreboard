#ifndef __INNING
#define __INNING

#include<iostream>
#include"Batsman.h"
#include "Bowler.h"
using std::string;
namespace example
{
    class Inning: public Batsman,public Bowler{
    public:
  void DisplayInning(Batsman Bateam1[],Bowler Boteam2[]);
  void line();
  void star();
};
}
#endif
