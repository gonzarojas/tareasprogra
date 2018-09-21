#include <iostream>
#include <string>

using namespace std;
int coseno(int);
int seno(int);
int logaritmo(int);
int main()
{
  int num,cos;
  float repeticiones,valorx,res=0,x=1,p,f,c=0,e=0;

  cout<<"QUE OPERACION DESEA CALCULAR?: "<<endl;
  cout<<"-------------------------------"<<endl;
  cout<<"1)COSENO"<<endl;
  cout<<"2)SENO"<<endl;
  cout<<"3)LOGARITMO NATURAL"<<endl;
  cout<<"0)SALIR"<<endl;
  cout<<"-------------------------------"<<endl;
  cin>>num;
  cout<<"-------------------------------"<<endl;

  if (num==1){
    cout<<"INGRESE X: ";
    cin<<cos;
    cout<<"LA RESPUESTA ES: "<<coseno(cos);
  }
  else
    if(num==2){
    cout<<"LA RESPUESTA ES: "<<seno(sen);
  }
  else
    if(num==3){
    cout<<"LA RESPUESTA ES: "<<logartimo(log);
  }
  else
    if(num==0){
        system("pause");
    return 0;
  }
  return 0;
}

int coseno(int cos)
{
     cout<<"ingresa el valor de x"<<endl;
                cin>>valorx;
                cout<<"ingresa el numero de repeticiones"<<endl;
                cin>>repeticiones;
                for(int i=0;i<repeticiones;i++)
                {
                    p=potencia(valorx,e);
                    f=factorial(e);
                    c=p/f;
                    e+=2;
                    if(x==1)
                    {
                        res+=c;
                        x++;
                        cout<<"+";
                    }
                    else
                    {
                        res-=c;
                        x--;
                        cout<<"-";
        }
    }
}

int seno (int sen){

 res=0;
                cout<<"ingresa el valor de x"<<endl;
                cin>>valorx;
                cout<<"ingresa el numero de repeticiones"<<endl;
                cin>>repeticiones;
                e=3;
                res+=valorx;
                for(int i=0;i<repeticiones;i++)
                {
                    p=potencia(valorx,e);
                    f=factorial(e);

                    if(x==1)
                    {
                        res-=c;
                        x++;
                        cout<<"-";
                    }
                    else
                    {
                        res+=c;
                        x--;
                        cout<<"+";
                    }

        }

}

int logartimo (int log){

    cout<<"ingresa el valor de x"<<endl;
                cin>>valorx;
                cout<<"ingresa el numero de repeticiones"<<endl;
                cin>>repeticiones;
                e=1;
                c=((valorx-1)/valorx);
                cout<<c<<endl;
                for(int i=1;i<=repeticiones;i++)
                {
                    x=1/e;
                    cout<<x<<endl;
                    p=potencia(c,i);
                    cout<<p<<endl;
                    res+=p*x;
                    e++;
                }
            cout<<"el resultado es "<<res<<endl;

}
