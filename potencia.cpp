#include <iostream>
#include <string>

using namespace std;
int main()
{
    int numpot,pot,sum=1,i;
    cout << "ingrese el numero: ";
    cin >> numpot;
    cout<<"ingrese la potencia: ";
    cin>>pot;


    for (i=1 ; i<=pot ; i++)
    {
            sum*=numpot;
        }
    cout<<"el resultado es: "<<sum<<endl;
    return 0;
}
