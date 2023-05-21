#include <iostream>

using namespace std;

int main()
{
    int a,b;
    char c;
    cout<<"Name: Md.Abu Towsif 22-47019-1\n\n";
    cout<<"***(SIMPLE CALCULATOR:+,-,*,/,^)***\n\n";
    cout<<" Enter a simple equation(e.g.: 5+3)\n\n";
    cin>>a>>c>>b;
    switch(c)
    {
    case'+':
        cout<<"Additiion: "<<a+b<<endl;
        break;
    case'-':
        cout<<"Subtraction: "<<a-b<<endl;
        break;
    case'*':
        cout<<"Multiplication: "<<a*b<<endl;
        break;
    case'/':
        cout<<"Division: "<<a/b<<endl;
        break;
    case'^':
        cout<<"Square: "<<a*a<<endl;
        break;
    default:
        cout<<"Invalid equation "<<endl;
        break;
    }
    return 0;
}
