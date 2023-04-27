#ifndef __T20
#define __T20

#include<iostream>
#include"Ltd_Over_Match.h"
using std::string;
namespace example
{
  class T20_Match:public Ltd_Over_Match{
      
      public:
      void set_Max_Over();
      int Get_Max_Over();
};
}
#endif