#include <iostream>

using namespace std;

int main()
{
    int age[5];
    int sum=0;
    float average;
    cout<<"Name:Md. Abu Towsif 22-47019-1 "<<endl;
    cout<<"\nPlease enter the ages:";
    for(int i=0;i<5;i++)
    {
        cin>>age[i];
        sum=sum + age[i];
    }
    average = (float)sum/5;
    cout<<"The avarage age is : "<<average<<endl;
    if(sum%2==0)
        cout<<"The sum of the ages is even"<<endl;
    else
        cout<<"The sum of the ages id odd"<<endl;
    return 0;
}
