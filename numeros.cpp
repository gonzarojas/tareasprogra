#include <iostream>
#include <string>

using namespace std;
int main()
{
    int num,num2;
    cout<<"ingrese un numero de 6 digitos"<<endl;
    cin>>num;

  if (num>=100000){
    num2=num/100000;
     cout<<num2<<" ";
     num2=num/10000%10;
     cout<<num2<<" ";
    num2=num/1000%10;
     cout<<num2<<" ";
    num2=num/100%10;
     cout<<num2<<" ";
     num2=num/10%10;
     cout<<num2<<" ";
    num2=num%10;
     cout<<num2<<" ";
  }
  else
    if(num<=1000000){
        cout<<"el numero es incorrecto"<<endl;
    }





return 0;
}
