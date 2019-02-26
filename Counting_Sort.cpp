//Time complexity is O(n+k) where is the input range and k is the max element 
// unstable and inefficient for larger number
// *This algo is not applicable for -ve number*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(auto i=0;i<n;i++){
        cin>>a[i];
    }
    int k=(*max_element(a,a+n));
    int c[k+1]={0},sc[k+1]={0},b[n+1];
    for(auto i=0;i<n;i++){
        c[a[i]]++;
    }
    for(auto i=1;i<k+1;i++){
        c[i]=c[i]+c[i-1];
    }
    for(auto i=0;i<n;i++){
        b[c[a[i]]]=a[i];
        c[a[i]]--;
    }
    for(auto i=1;i<n+1;i++){
        cout<<b[i]<<" ";
    }
}
