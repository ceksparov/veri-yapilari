/**
* @file test.cpp
* @description sayi listesi ve sayilar listesini ekrana cikaran main sayfa
* @course 2. öğretim B grubu
* @assignment 1. ödev
* @date 25 kasım 2023
* @author B211210048 Berkay Can
*/






#include <cstdlib>
#include<string>
#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<sstream>
#include "SayilarListesi.hpp"
#include "Sayi.hpp"


using namespace std;

int main()
{
    
    ifstream dosya("veriler.txt");
    SayilarListesi *YoneticiListe=new SayilarListesi();
    int adreszamani=0;
    if(dosya.is_open())
    {
        
        int number;
        do
        {
            
            Sayi *basamaklar=new Sayi();
            
 
            while (number != 0) 
            {
                int digit = number % 10;
                basamaklar->insert(0,digit);
                number /= 10;
                
            } 


            YoneticiListe->add(basamaklar);
                

            
            cout<<"##########   ";
            basamaklar->cizgicizdir();
            cout<<"#"<<YoneticiListe->FindPosition(adreszamani)<<"#   ";
            adreszamani++;
            cout<<*basamaklar;

            if (dosya.eof()) {


                int choice=0;
                do{
        system("CLS");
        cout<<"[1]Tek basamaklari basa al"<<endl;
        cout<<"[2]Basamaklari tersle"<<endl;
        cout<<"[3tEn buyuk cikar"<<endl;
        cout<<"[4]cikis"<<endl;

        cout<<"Choice:";
        cin>>choice;
        system("CLS");
        switch(choice){
            case 1:
                basamaklar->tersle();
                
           continue;
            case 2:
               
            break;
            case 3:
               
            break;
            case 4:
                
            break;

            default:
                cout<<endl<<"Wrong choice"<<endl;
                cin.ignore();
                cin.get();
            break;
        }
    }while(choice !=11);



            
            break;
        }

            
            
           
            
        }while(dosya >> number);         
    }

   
   
}
   






