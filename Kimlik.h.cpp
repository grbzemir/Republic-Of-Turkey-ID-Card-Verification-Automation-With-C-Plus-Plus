#ifndef KIMLIK_H
#define KIMLIK_H

  class Kimlik
  {

    private:
    char strTCNno[12];
    int intTCNo[11];
    int ilkOnToplami;
    int tekRakamToplami;
    int ciftRakamToplami;
    bool sonuc;
    bool birinciKural();
    bool ikinciKural();
    bool ucuncuKural();
    void inputAl();
    
    public:
    void menu();



  };
 
 #endif 
 
 