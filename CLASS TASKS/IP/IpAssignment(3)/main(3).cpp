#include <iostream>

using namespace std;

int main()
{
    float a,b;
    char c,d;
    cout<<"Name:Md. Abu Towsif 22-47019-1 "<<endl;
    cout<<"\nPlease input  Y or N : ";
    cin>>c;
    switch(c)
    {
        case 'Y':
            cout<<"\nPlease enter any of these following options:"<<endl;
            cout<<" \n + :to add two float numbers"<<endl;
            cout<<" - :to subtract two float numbers"<<endl;
            cout<<" * :to multiply two float numbers"<<endl;
            cout<<" /: to divide two float numbers"<<endl;
            break;
        case 'N':
            cout<<"Program closes "<<endl;
            break;

    }
    cout<<"\nPlease select a option: ";
    cin>>d;
    switch(d)
    {
        case '+':
            cout<<" \nPlease enter two numbers to add : ";
            cin>>a>>b;
            cout<<"\nThe Addition is : "<<a+b<<endl;
            break;
        case '-':
            cout<<" \nplease enter two numbers to subtract: ";
            cin>>a>>b;
            cout<<"\nThe subtraction is : "<<a-b<<endl;
            break;
        case '*':
            cout<<" \nplease enter two numbers to multiply: ";
            cin>>a>>b;
            cout<<"\nThe multiplication is: " <<a*b<<endl;
            break;
        case '/':
            cout<<" \nplease enter two numbers to divide: ";
            cin>>a>>b;
            cout<<"\nThe division is: "<<a/b<<endl;
            break;
        default:
            cout<<"\ninvalid Oparetor"<<endl;
    }
    return 0;
}
