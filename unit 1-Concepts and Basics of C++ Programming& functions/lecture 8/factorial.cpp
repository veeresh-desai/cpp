// You are using GCC
#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0||n==1){
        return n;
    }
    
    return n*factorial(n-1);
}
int main(){
    int n;
    cin>>n;
    
    int result=factorial(n);
    
    cout<<result;
    
}