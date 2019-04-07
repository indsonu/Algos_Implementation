  // YOU CAN ADD DP FROM URSELF I DID
  // IMPLEMENT IT FOR LEARNING THE CONCEPT
#include<iostream>
using namespace std;
int cutrod(int n,int *a){
    if(n==0){
        return n;
    }
    int q=-1;
    for(auto i=1;i<=n;i++){
        q=max(q,a[i]+cutrod(n-i,a));
    }
    return q;
}
int main(){
    int n;
    cin>>n;
    int a[n+1]={0};
    for(auto i=1;i<=n;i++){
        cin>>a[i];
    }
    cout<<cutrod(n,a);
}
