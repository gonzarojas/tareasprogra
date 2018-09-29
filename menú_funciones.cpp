#include <iostream>
#include <string>
#include <math.h>
#include <cmath>


using namespace std;
float formulauno(double &x);
int formulados(int i,int j,int num);
int formulatres(double &x);
int main()
{

    double num,x,y,resp,px,py,maximo,menor;
    cout<<"--------------MENU DE OPERACIONES-------------"<<endl;
    cout<<"1.- f(x)= 3^raiz2x^2/2x-3"<<endl;
    cout<<"2.- f(x,y)=2xy-3y"<<endl;

    cout<<" "<<endl;
    cout<<"          |2x^3 x>0"<<endl;
    cout<<"3.- f(x)={|"<<endl;
    cout<<"          |3x^2 x=0"<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"QUE FORMULA DESEA CALCULAR?"<<endl;
    cin>>num;
    cout<<"----------------------------------------------"<<endl;

    if(num==1){

        cout<<"INGRESE EL NUMERO MINIMO A TABULAR"<<endl;
        cin>>menor;
        cout<<"INGRESE EL NUMERO MAXIMO A TABULAR"<<endl;
        cin>>maximo;
        cout<<"----------------------------------------------"<<endl;
        cout<<"x"<<" f(x)"<<endl;
        for(int i=menor;i<=maximo;i++){
        x=i;
        cout<<i<<" "<<formulauno(x)<<endl;
        }
    } else if(num==2){
                int i,j;
                cout<<"x"<<" | "<<"y"<<" | "<<"f(x,y)"<<endl;
                cout<<"--+---+------"<<endl;
                formulados(i,j,num);
                // cout<<"----------------------------------------------"<<endl;
    } else if(num==3){
        cout<<"INGRESE EL NUMERO MINIMO A TABULAR"<<endl;
        cin>>menor;
        cout<<"INGRESE EL NUMERO MAXIMO A TABULAR"<<endl;
        cin>>maximo;
        cout<<"----------------------------------------------"<<endl;
        cout<<"x"<<"   f(x)"<<endl;
        for(int i=menor;i<=maximo;i++){
        x=i;
        cout<<i<<" | "<<formulatres(x)<<endl;
        }

        }
     return 0;
    }

float formulauno(double &x){
        x = cbrt(2*x*x)/(2*x)-3;

        return x;
}


int formulados(int i,int j,int num){
    for(int i=1;i<=5;i++){

        for(int j=1;j<=5;j++){
            num=(2*i*j)-(3*j);
            cout<<i<<" | "<<j<<" | "<<num<<endl;
        }
        cout<<endl;
    }
    return i,j,num;
}


int formulatres(double &x){

    if (x>0){
        return (2*x*x*x);
    }
    else{
        return (3*x*x);
    }

}
