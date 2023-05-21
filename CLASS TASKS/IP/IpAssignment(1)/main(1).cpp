#include <iostream>

using namespace std;

int main()
{
    int birth_year,current_year=2022;
    int i,count=0;
    cout<<"Name:Md. Abu TOwsif 22-47019-1 "<<endl;
    cout<<"Please enter your birth year: ";
    cin>>birth_year;
    for(i=birth_year;i<=current_year;i++)
    {
        if( (i%4 == 0 && i%100 != 0) || i%400 == 0 )
        {
            count++;
        }
    }
    cout<<"The number of leap year since my birthday is: "<<count<<endl;
    return 0;
}
