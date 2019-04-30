#pragma once
#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;
namespace bullpgia
{
class Chooser
{

    public:
    unsigned int length;
    string typeinfo;
    // size_type uint;
    // unsigned int uint;
    // size_t uint;
    // int uint;
    
    string str;
    virtual string choose(unsigned int length) { return NULL;}
};
}