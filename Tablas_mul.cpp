#include <iostream>

using namespace std;

int main()
{
    int tabla, numero, resultado;

    cout<< "TABLA DEL 1"<<endl;
    cout<< "TABLA DEL 2"<<endl;
    cout<< "TABLA DEL 3"<<endl;
    cout<< "TABLA DEL 4"<<endl;
    cout<< "TABLA DEL 5"<<endl;
    cout<< "TABLA DEL 6"<<endl;
    cout<< "TABLA DEL 7"<<endl;
    cout<< "TABLA DEL 8"<<endl;
    cout<< "TABLA DEL 9"<<endl;

    cout<< "SELECCIONE UNA TABLA DE MULTIPLICACION: ";
    cin>>numero;

    for(tabla=1;tabla<=10;tabla++)
    {
      resultado= numero*tabla;
      cout<< numero<<" X "<<tabla<<": "<<resultado <<endl;
    }
    system("pause");
    return EXIT_SUCCESS;
}
   
           

  