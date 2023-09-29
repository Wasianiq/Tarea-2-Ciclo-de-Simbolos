#include<iostream>
#include <conio.h>
using namespace std;

int simbA();
int menuS();

int menuS(){
    int opc=3;
    cout<< "Ingresa la opcion de repeticion de simbolos *: "<<endl;
    cout<<"1. Ciclo de Simbolos Diferentes"<<endl;
    cout<<"2. Ciclo de Simbolos Iguales"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Ingresa la opcion deseada: ";
    cin>>opc;
return opc;
}

int main(){
    int ix, iy, numR;
    int opc;
    do{
        opc = menuS();
        switch (opc)
        {
        case 1:{

         cout<< "Ingresa cuantas veces quieres que se repitan los simbolos *: ";
         cin >> numR;
         for (ix = 1; ix <=  numR; ix++){
        for(iy=1;iy <= ix;iy++){
            if((ix % 2) == 1){
                cout <<"$";
            }
            else{
                cout <<"#";
            }
        }  
         cout<<endl; 
        }
        break;
        }while(opc!=3);
        break;



        case 2:{

            cout<< "Ingresa cuantas veces quieres que se repitan los simbolos *: ";
         cin >> numR;
         for (ix = 1; ix <=  numR; ix++){
        for(iy=1;iy <= ix;iy++){
            if((ix % 2) == 1){
                cout <<"$";
            }
            else{
                cout <<"$";
            }
        }   
              cout<<endl;
        }
        break;
        }while(opc!=3);
        break;
         
        case 3:
        cout<<"----- Adios ------"<<endl;        
            break;
        default:
            cout<<"Ingresa una opcion valida"<<endl;
            break;
        }
        }while (opc!=3);
    getch();
    return 0;
}