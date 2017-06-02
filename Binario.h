#ifndef BINARIO_H
#define BINARIO_H

#include <iostream>
#include <string>

using namespace std;

class Binario{
  private:
    int* binario;
  public:
    Binario();//incializa el binario
    int* aleatorio();
    string tostring();
    int* getArreglo();

    int* operator+(Binario* binario2){//Disyuncion
      int* total=new int[4];
      for (int i = 0; i < 4; i++) {
        if (binario[i]==0 && binario2->getArreglo()[i]==0){
          total[i]=0;
        }else if(binario[i]==0 && binario2->getArreglo()[i]==1){
          total[i]=0;
        }else if (binario[i]==1 && binario2->getArreglo()[i]==0){
          total[i]=0;
        }else if (binario[i]==1 && binario2->getArreglo()[i]==1){
          total[i]=1;
        }
      }
      return total;
    }
    int* operator-(Binario* binario2){//Conjuncion
      int* total=new int[4];
      for (int i = 0; i < 4; i++) {
        if (binario[i]==0 && binario2->getArreglo()[i]==0){
          total[i]=0;
        }else if (binario[i]==0 && binario2->getArreglo()[i]==1){
          total[i]=1;
        }else if (binario[i]==1 && binario2->getArreglo()[i]==0){
          total[i]=1;
        }else if (binario[i]==1 && binario2->getArreglo()[i]==1){
          total[i]=1;
        }
      }
      return total;
    }
    int* operator*(Binario* binario2){//Implicacion
      int* total=new int[4];
      for (int i = 0; i < 4; i++) {
        if (binario[i]==0 && binario2->getArreglo()[i]==0){
          total[i]=0;
        }
        if (binario[i]==0 && binario2->getArreglo()[i]==1){
          total[i]=1;
        }
        if (binario[i]==1 && binario2->getArreglo()[i]==0){
          total[i]=0;
        }
        if (binario[i]==1 && binario2->getArreglo()[i]==1){
          total[i]=0;
        }
      }
      return total;
    }
    int* operator/(Binario* binario2){//doble Implicacion
      int* total=new int[4];
      for (int i = 0; i < 4; i++) {
        if (binario[i]==0 && binario2->getArreglo()[i]==0){
          total[i]=0;
        }
        if (binario[i]==0 && binario2->getArreglo()[i]==1){
          total[i]=1;
        }
        if (binario[i]==1 && binario2->getArreglo()[i]==0){
          total[i]=1;
        }
        if (binario[i]==1 && binario2->getArreglo()[i]==1){
          total[i]=0;
        }
      }
      return total;
    }
    int* operator^(Binario* binario2){//Disyuncion Exclusiva
      int* total=new int[4];
      for (int i = 0; i < 4; i++) {
        if (binario[i]==0 && binario2->getArreglo()[i]==0){
          total[i]=0;
        }
        if (binario[i]==0 && binario2->getArreglo()[i]==1){
          total[i]=1;
        }
        if (binario[i]==1 && binario2->getArreglo()[i]==0){
          total[i]=1;
        }
        if (binario[i]==1 && binario2->getArreglo()[i]==1){
          total[i]=0;
        }
      }
      return total;
    }




};

#endif
