#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    float x, sum;
    int i, n, m, mm, ctr, nn;
    cout<<"Name: Md.Abu towsif 22-47019-1 "<<endl;
    cout << "\n\nDisplaying the sum of the series [ x - x^3 + x^5 - ......]\n";
    cout << "\nInput the value of x: ";
    cin >> x;
    cout << "\nInput number of terms: ";
    cin >> n;
    sum = x;
    m = -1;
    cout << "The values of series:" << endl;
    cout << sum << endl;
    for (i = 1; i < n; i++)
        {
        ctr = (2 * i + 1);
        mm = pow(x, ctr);
        nn = mm * m;
        cout << nn << endl;
        sum = sum + nn;
        m = m * (-1);
        }
    cout << "\nThe sum of the series upto " << n << " term is = " << sum << endl;
    return 0;
}
