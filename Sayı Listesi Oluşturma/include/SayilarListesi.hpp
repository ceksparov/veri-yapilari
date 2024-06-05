#ifndef SAYILARLISTESI_HPP
#define SAYILARLISTESI_HPP
#include "Dugum.hpp"
#include "Sayi.hpp"
#include <iostream>
using namespace std;

class SayilarListesi
{
private:
    Dugum *head;
    int buyukluk;
    Dugum* FindPrevByPosition(int position);
    int satirGenislik =10;
    
public:

    SayilarListesi();
    bool isEmpty()const;
    int count()const;
    void add(Sayi*& item);
    void insert(int index,Sayi*& item);
    Sayi*& FindPosition(const int index);
    friend ostream& operator<<(ostream& screen, SayilarListesi& right);
};







#endif