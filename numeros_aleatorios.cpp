#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>

using namespace std;
int LanzarDado();
int main()
{
    srand(time(NULL));
    cout<<LanzarDado();

}

int LanzarDado(){
return (1+rand()%100);
}

