#include <iostream>
#include <string>

using namespace std;
int factorial(int num);
int main()
{
int num,i;
    cout << "ingrese el numero: ";
    cin >> num;


    cout << "El factorial es " <<factorial(num)<<endl;

    return 0;
}

int factorial(int num)
{
    int i,factorial=1;
    cout << "ingrese el numero (menos de 20): ";
    cin >> num;


    for (i=1 ; i<=num ; i++)
    {
        if(num<19){
            factorial*=i;
        }
            else{
                cout<<"EL NUMERO ES INCORRECTO"<<endl;
                system("pause");
                return 0;
            }

    }


    cout << "El factorial es " <<factorial<<endl;

    system("pause");
    return 0;
}


