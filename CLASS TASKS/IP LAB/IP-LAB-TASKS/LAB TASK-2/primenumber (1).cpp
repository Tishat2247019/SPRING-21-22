#include <iostream>

using namespace std;

int main()
{
    cout<<"Name: Md.Abu Towsif 22-47019-1 "<<endl<<endl;
    int num,chk=0;
    cout<<"Enter a number to check: "<<endl;
    cin>>num;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
           chk++;
           break;
        }

    }
    if(num<=1 || chk!=0)
        cout<<num<<" is not a prime number "<<endl;
    else
        cout<<num<<" is a prime number "<<endl;
    return 0;
}
