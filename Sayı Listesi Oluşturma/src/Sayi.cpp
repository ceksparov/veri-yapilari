
#include <iostream>
#include <iomanip>
#include "Sayi.hpp"



Basamak* Sayi::FindPrevByPosition(int position){
    if(position<0 || position>size) throw "Index out of range";
    Basamak* prev =head;
    int numara=1;
    for(Basamak* itr=head; itr!=NULL && numara!=position; itr=itr->next, numara++){
        prev=prev->next;
    }
    return prev;
    
}

Sayi::Sayi()
{
    head = NULL;
    size=0;
    
    
}


int Sayi::count()const
{
    return size;
}




void Sayi::insert(int index,const int& item)
{
    if(index == 0) head = new Basamak(item,head);
    else{
        Basamak *prev = FindPrevByPosition(index);
        prev->next = new Basamak(item,prev->next);
    }
    size++;
}







const int Sayi::FindPosition(const int index){

    return FindPrevByPosition(index)->item;

}

void Sayi::cizgicizdir()
{
    for (int j = 0; j < count(); j++)
    {
        
    
    for (int i = 0; i < 7; i++)
    {
        cout<<"*";
    }
    cout<<" ";
    
    }
    cout<<endl;
}

void Sayi::adresyazdir()
{
    int sonucbasamak;
    for(Basamak *itr=head; itr!=NULL; itr=itr->next)
        {
            uintptr_t nodeAddress = reinterpret_cast<uintptr_t>(itr);

            sonucbasamak=nodeAddress % 0x1000;
            cout<<"*  ";
            cout<<setw(3)<<std::hex<<sonucbasamak;
            cout<<"* ";


            
        
        }

}

void Sayi::sayiyiyazdir()
{
    cout<<"#"<<setw(5);
    for(Basamak *itr=head; itr!=NULL; itr=itr->next)
        {
            cout<<itr->item;


            
        
        }
        cout<<"#   ";

}
void Sayi::basamaklariyazdir()
{
    for(Basamak *itr=head; itr!=NULL; itr=itr->next)
        {
            cout<<"*   "<<itr->item<<"* ";


            
        
        }
        cout<<endl;
       

}



void Sayi::tersle() {
                Basamak* prev = nullptr;
                Basamak* current = head;
                Basamak* next = nullptr;

                while (current != nullptr) {
                    next = current->next;
                    current->next = prev;
                    prev = current;
                    current = next;
                }

                head = prev;
            }















ostream& operator<<(ostream& screen, Sayi& right){
    using namespace std;
    

        
            right.adresyazdir();


            
            
            cout<<endl<<"#--------#   ";
            right.cizgicizdir();
            right.sayiyiyazdir();
            right.basamaklariyazdir();
            cout<<"##########   ";
            right.cizgicizdir();
            cout<<endl;
            
            
            
            
        
        
        
    return screen;
    }






