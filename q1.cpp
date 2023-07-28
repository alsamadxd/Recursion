
/*

    Print number in decreasig order.

*/

#include<iostream>
using namespace std;

void byRecursion(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    byRecursion(n-1);
}

int main(){
    int x;
    cout<<" Enter the no. "<<endl;
    cin>>x;
    byRecursion(x);
    return 0;
}

