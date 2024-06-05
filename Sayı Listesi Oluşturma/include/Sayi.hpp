#ifndef SAYI_HPP
#define SAYI_HPP

#include "Basamak.hpp"
#include <iostream>
using namespace std;


class Sayi{
    private:
        Basamak *head;
        int size;
        Basamak* FindPrevByPosition(int position);

    public:
        Sayi();
        int count()const;
        void insert(int index,const int& item);
        const int FindPosition(const int index);
        friend ostream& operator<<(ostream& screen, Sayi& right);
        void cizgicizdir();
        void adresyazdir();
        void sayiyiyazdir();
        void basamaklariyazdir();
        void tersle();
        


};

#endif