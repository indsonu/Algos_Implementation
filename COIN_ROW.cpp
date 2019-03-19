//  This problem can be solved using DP by BIFURCATE into 2 parts:
//  1: We can collect the last coin too.
//  2: We cant collect the last coin
//  5 1 2 10 7
//  { like in this if we choose 7 tehn we cant choose 10 same as 10 we cant 7,2 }; To find the mas=ximum money out of it


#include<iostream>
#include<vector>
using namespace std;
int coinRow(int *memo,int *a,int n){
    if(n==0 || n==1 || memo[n]!=0){
        return memo[n];
    }
    memo[n]=max(a[n]+coinRow(memo,a,n-2),coinRow(memo,a,n-1));
    return memo[n];
}
int main(){
    int n,a;
    cin>>n;
    int memo[n+1]={0},b[n+1];
    for(auto i=1;i<=n;i++){
        cin>>b[i];
    }
    memo[0]=0;
    memo[1]=b[1];
    cout<<coinRow(memo,b,n);
}
