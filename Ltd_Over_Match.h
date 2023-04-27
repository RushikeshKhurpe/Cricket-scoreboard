#ifndef __Ltd
#define __Ltd

#include<iostream>
#include"Match.h"
using std::string;
namespace example
{
    class Ltd_Over_Match:public match{
    public:
    int maxover;
     virtual int  Get_Max_Over()=0;
     virtual void set_Max_Over()=0;
};
}
#endif