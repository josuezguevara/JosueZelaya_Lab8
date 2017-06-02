#include <string>
#include "Binario.h"
#include <stdlib.h>
#include <vector>
#include <sstream>

Binario::Binario(){
  binario=aleatorio();
}

int* Binario::aleatorio(){
  int* bin=new int[4];
  vector<int> digitos;
  digitos.push_back(0);
  digitos.push_back(1);

  int num;
  for (int i = 0; i < 4; i++) {
    num=rand()%2;
    bin[i]+=digitos[num];
  }
  return bin;
}

string Binario::tostring(){
  stringstream uno;
  uno<<"[" << binario[0] << ","<<binario[1]<<","<<binario[2]<<","<<binario[3]<<"]";
  return uno.str();
}

int* Binario::getArreglo(){
  return binario;
}
