#include <iostream>

using namespace std;

int main()
{
    int a,b;
    char c;
    cout<<"Name: Md.Abu Towsif 22-47019-1\n\n";
    cout<<"***(simple calculator:+,-,*,/,^)***\n\n";
    cout<<"Enter a simple equation(e.g.: 5+3)"<<endl;
    cin>>a>>c>>b;
    switch(c)
    {
    case'+':
        cout<<"Addition: "<<a+b<<endl;
        break;
    case'-':
        cout<<"Substraction: "<<a-b<<endl;
        break;
    case'*':
        cout<<"Multipication: "<<a*b<<endl;
        break;
    case'/':
        cout<<"Division: "<<a/b<<endl;
        break;
    case'^':
        cout<<"Square: "<<a*a<<endl;
        break;
    default:
        cout<<"invalid equation"<<endl;
        break;
    }
    return 0;
}
