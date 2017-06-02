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




};

#endif
