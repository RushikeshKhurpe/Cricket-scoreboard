#ifndef __T10
#define __T10

#include<iostream>
#include"Ltd_Over_Match.h"
using std::string;
namespace example
{
  class T10_Match:public Ltd_Over_Match{
      
      public:
      void set_Max_Over();
      int Get_Max_Over();
};
}
#endif