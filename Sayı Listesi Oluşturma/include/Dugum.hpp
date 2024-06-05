#ifndef Dugum_hpp
#define Dugum_hpp
#include<iostream>
#include "Sayi.hpp"
using namespace std;


class Dugum
{
public:
    Sayi* item;
    Dugum *next;
    Dugum(Sayi* item, Dugum *next);

};

#endif
