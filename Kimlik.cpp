#include "Kimlik.h"
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <conio.h>


using namespace std;

bool Kimlik:: birinciKural()

{
    // ilk on rakamın toplamın birler basamağındaki rakam 11. rakamı vermektedir.

    int i;
    ilkOnToplami = 0;

    for ( i = 0; i < 10; i++)
    {
        ilkOnToplami += intTCNo[i];
        
    }

    if((ilkOnToplami % 10) == intTCNo[10]) // 11. rakamı vermektedir. 10. indis

    return true;

    else

    return false;
  

}

bool Kimlik:: ikinciKural()

{
    // 1.3.5.7.9 rakamların toplamının 7 katı ile
    //  2.4.6.8  rakamlarının toplamını 9 katının toplamınını birler basamağı 10. rakamı vermektedir.

    tekRakamaToplami = 0;
  

    for ( int i = 0; i < 9; i+=2)
    {
        tekRakamToplami += intTCNo[i];
        
    }

   
    for ( int  i = 0; i < 8; i+=2)
    {
        ciftRakamToplami += intTCNo[i];
        
    }

    int toplam = (tekRakamToplami * 7) + (ciftRakamToplami * 9) ;



    if(( toplam % 10) == intTCNo[9]) // 10. rakamı vermektedir. 9. indis

    return true;

    else

    return false;


}

bool Kimlik:: ucuncuKural()

{

    // 1.3.5.7.9 rakamların toplamının 8 katının birler basamağı 11. rakamı vermektedir.

    
    int toplam = (tekRakamToplami * 8)  ;



    if(( toplam % 10) == intTCNo[10]) // 10. rakamı vermektedir. 11. indis vermektedir.

    return true;

    else

    return false;




}

void Kimlik:: inputAl()
{
    
    cout<<"Tc kimlik no giriniz: ";
    cin>>strTCNno;

    if (strlen(strTCNno) != 11)
    {
        cout<<"Tc kimlik no 11 haneli olmalidir"<<endl;
       
    }

    else
    {
        sonuc = true;
        
        for (int i = 0; i < 11; i++)
        {
            intTCNo[i] = strTCNno[i] - 48; // rakamlar karakter arasında 48 fark vardir !
        }

        if( ! birinciKural())
        sonuc = false;

        else if( ! ikinciKural())
        sonuc = false;

        else if( ! ucuncuKural())
        sonuc = false;

        system("cls");

        if(sonuc)
        cout<<"Tc kimlik no dogru"<<endl;

        else

        cout<<"Tc kimlik no yanlis"<<endl;

        system("pause");

    }
     
}

void Kimlik:: menu()
{
    
    int secim;
    while (true)
    {
     
    system("cls");
    cout<<"\nTC KIMLIK DOGRULAMA UYGULAMASI"<<endl;
    cout<<"[1] Tc kimlik no girisi"<<endl;
    cout<<"[2] cikis"<<endl;
    cout<<"seciminiz: ";
    cin>>secim;

    if( secim == 2)

    {
    
    cout<<"cikis yapiliyor..."<<endl;
    break;

    }

    else if ( secim == 1)
    {
        intputAl();

        else
        {

            cout<<"yanlis secim yaptiniz"<<endl;
            menu();
        }
        
    }

        
    }

}
