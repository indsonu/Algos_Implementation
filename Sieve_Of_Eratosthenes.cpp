#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+1],k=0;// n+1 for including the values of n
    for(auto i=2;i<=n;i++){
        a[i]=i; 
    }
    for(auto i=2;i*i<=n;i++){
        int p=i*i;
        if(a[i]!=0){
            while(p<=n){
                a[p]=0;
                k++;
                p+=i;// incrementing the value of p with i
                     // like i=2; then p=p+2;and so on
            }
        }
    }
    int b[k];
    for(auto j=0,i=2;i<=n;i++){
        if(a[i]!=0){
            b[j++]=a[i];
        }        
        k=j;// to check the size for the final time 
    }
    for(auto i=0;i<k;i++){cout<<b[i]<<" ";}
}

