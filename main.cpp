#include <iostream>
#include "Binario.h"
#include <vector>
using namespace std;

int main() {
  Binario* uno=new Binario();
  Binario* dos=new Binario();
  Binario* tres=new Binario();
  Binario* cuatro=new  Binario();
  //cout << uno->tostring() << endl;
  //cout<<dos->tostring()<<endl;
  vector<Binario*> binarios;
  binarios.push_back(uno);
  binarios.push_back(dos);
  binarios.push_back(tres);
  binarios.push_back(cuatro);
  for (int i = 0; i < binarios.size(); i++) {
    cout<<"["<<i<<"] "<<binarios[i]->tostring()<<endl;
  }



  return 0;
}
