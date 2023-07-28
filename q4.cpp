/*

    Given an integer n , find the nth term of the Fibonacci Series

*/

#include <iostream>
using namespace std;

int fibo(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }

    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int x;
    cout << " Enter the no. " << endl;
    cin >> x;
    int ans = fibo(x);
    cout << " The nth element = " << ans;
    return 0;
}