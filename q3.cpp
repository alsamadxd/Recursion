/*

    Given a number n, find its factorial using recursion

*/

#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int main()
{
    int x;
    cout << " Enter the no. " << endl;
    cin >> x;
    int ans=fact(x);
    cout<<" The factorial of the given number is = "<<ans;
    return 0;
}