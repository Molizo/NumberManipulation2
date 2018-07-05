#include <iostream>
#include <windows.h>

using namespace std;

int main()
{int a,b,c,i;
    a=1;
    b=1;
    c=a+b;
    for(i=1;i<=20;i++)
    {
        a=b;
        b=c;
        c=a+b;
    }
    cout<<endl<<endl<<endl<<endl<<"Rezultaul este:"<<c<<endl<<endl<<endl;
    Sleep(5000);
    return 0;
}
