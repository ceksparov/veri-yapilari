

#include "SayilarListesi.hpp"



Dugum* SayilarListesi::FindPrevByPosition(int position){
    if(position<0 || position>buyukluk) throw "Index out of range";
    int i=1;
    Dugum *prev = head;
    for(Dugum* itr=head; itr->next!=NULL && i!=position; itr=itr->next, i++)
    {
         prev=prev->next;
    }
    return prev;
    
}

SayilarListesi::SayilarListesi()
{
    head = NULL;
    buyukluk=0;
    satirGenislik =10;
   
}

bool SayilarListesi::isEmpty()const
{
    return buyukluk == 0;
}

int SayilarListesi::count()const
{
    return buyukluk;
}



void SayilarListesi::add(Sayi*& item)
{
    insert(buyukluk,item);
}

void SayilarListesi::insert(int index, Sayi*& item)
{
    if(index == 0) head = new Dugum(item,head);
    else{
        Dugum *prev = FindPrevByPosition(index);
        prev->next = new Dugum(item,prev->next);
    }
    buyukluk++;
}








Sayi*& SayilarListesi::FindPosition(int index){

    return FindPrevByPosition(index)->item;

}

ostream& operator<<(ostream& screen, SayilarListesi& right){
    if(right.isEmpty()) screen<<"Empty List"<<endl;
    else{
        for(Dugum *itr=right.head; itr!=NULL; itr=itr->next)
        {
        screen<<itr->item<<" ";
        }
    }
    return screen;
}



