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

  bool salir=false;
  while(!salir){
    cout<<"-------------MENU------------"<<endl;
    cout<<"1. Eligir binarios"<<endl;
    cout<<"2. Disyuncion(+)"<<endl
    <<"3. Conjuncion(-)"<<endl
    <<"4. Implicacion(*)"<<endl
    <<"5. Doble Implicacion(/)"<<endl
    <<"6. Disyuncion Exclusiva (())"<<endl
    <<"7. Salir"<<endl;
    cout<<"Ingrese Opcion: "<<endl;
    int opcion;
    cin>>opcion;
    switch (opcion){
      int num1,num2;
      case 1:{
        for (int i = 0; i < binarios.size(); i++) {
          cout<<"["<<i<<"] "<<binarios[i]->tostring()<<endl;
        }
        cout<<"Eliga el numero del primer binario que quiere utilizar: "<<endl;
        cin>>num1;
        cout<<"Eliga el numero del segundo binario que quiere utilizar: "<<endl;
        cin>>num2;

        break;
      }
      case 2:{//Disyuncion
          cout<<"Binario 1 "<<binarios[num1]->tostring()<<endl;
          cout<<"Binario 2 "<<binarios[num2]->tostring()<<endl;
          cout<< "Total ";
          int* temp = (*binarios[num1]+binarios[num2]);
          for (int i = 0; i < 4; i++) {
            cout<<temp[i]<< " , ";
          }
          cout<<endl;


        break;
      }
      case 3:{//Conjuncion
        cout<<"Binario 1 "<<binarios[num1]->tostring()<<endl;
        cout<<"Binario 2 "<<binarios[num2]->tostring()<<endl;
        cout<< "Total ";
        int* temp = (*binarios[num1]-binarios[num2]);
        for (int i = 0; i < 4; i++) {
          cout<<temp[i]<< " , ";
        }
        cout<<endl;
        break;
      }
      case 4:{//Implicacion
        cout<<"Binario 1 "<<binarios[num1]->tostring()<<endl;
        cout<<"Binario 2 "<<binarios[num2]->tostring()<<endl;
        cout<< "Total ";
        int* temp = (*binarios[num1]*binarios[num2]);
        for (int i = 0; i < 4; i++) {
          cout<<temp[i]<< " , ";
        }
        cout<<endl;
        break;
      }
      case 5:{//Doble Implicacion
        cout<<"Binario 1 "<<binarios[num1]->tostring()<<endl;
        cout<<"Binario 2 "<<binarios[num2]->tostring()<<endl;
        cout<< "Total ";
        int* temp = (*binarios[num1]/binarios[num2]);
        for (int i = 0; i < 4; i++) {
          cout<<temp[i]<< " , ";
        }
        cout<<endl;
        break;
      }
      case 6:{//Disyuncion Exclusiva
        cout<<"Binario 1 "<<binarios[num1]->tostring()<<endl;
        cout<<"Binario 2 "<<binarios[num2]->tostring()<<endl;
        cout<< "Total ";
        int* temp = (*binarios[num1]^binarios[num2]);
        for (int i = 0; i < 4; i++) {
          cout<<temp[i]<< " , ";
        }
        cout<<endl;
        break;
      }
      case 7:{//salir
        salir=true;
        break;
      }
    }
  }





  return 0;
}
