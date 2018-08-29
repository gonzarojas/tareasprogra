#include <iostream>
using namespace std;
int main(){
 double prec,dia,dist;
      cout<<"Ingresa la distancia: ";
      cin>>dist;
      cout<<"Ingresa los dias de viaje: ";
      cin>>dia;
      if(dia>9 && dist >800){
          prec=dist*0.17-dist*0.17*0.3;
      }else{
      prec=dist*0.17;
      }
      cout<<"el precio es: $"<<prec<<endl;
    return 0;
}
