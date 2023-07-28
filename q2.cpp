/*

Print  Array Elements

*/

#include<iostream>
using namespace std;

void printArray(int a[],int len,int i){
    if(i==len){
        return;
    }
    cout<<a[i]<<" ";
    printArray(a,len,i+1);
}

int main(){
    int arr[]={2,3,5,6,2,2,7};
    int len=sizeof(arr)/sizeof(arr[0]);
    printArray(arr,len,0);
    return 0;
}