#include <iostream>

using namespace std;

int main()
{
    int i,n,first=0,second=1,next;
    int sum=0;
    cout<<"Enter the number of turms ";
    cin>>n;
    cout<<"fibonacci series: ";
    for(i=0;i<n;i++)
    {
        sum=sum+first;
        cout<<first<<endl;
        next=first+second;
        first=second;
        second=next;

    }
    cout<<sum<<endl;
    return 0;
}
