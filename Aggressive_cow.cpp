// LEARNT THAT BINARY SEARCH WORKS ON MONOTONIC AND GIVE THE TRANSITION STATE 
// WHICH THE GRAPH CHANGES 
// TRUST ME GO AND SEE THE CODING BLOCKS VIDEO ON YOUTUBE OF AGGRESSIVE COWS THEN SEE THIS SOLUTION
// YOU WILL QUIET HAPPY .HAPPY cODING!!! 


#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    unsigned long long int t,stalls,cows;
    cin>>t;
    while(t--){
        cin>>stalls>>cows;
        unsigned long long int a[stalls],max=0,min=1000000;
        for(auto i=0;i<stalls;i++){
            cin>>a[i];
            if(max<a[i]){
                max=a[i];
            }
            if(min>a[i]){
                min=a[i];
            }
        }
        int n=max-min;
        bool b[n];
        fill_n(b,n,true);
        sort(a,a+stalls);
        int mid=n/2,first=0,end=n;
        while(b[mid]!=false){
            int sm=a[0],c=cows-1;
            for(auto i=1;i<stalls;i++){
                if(mid>a[i]-sm){
                    continue;
                }
                else{
                    sm=a[i];
                    c--;
                }
                if(c==0){break;}
            }
            if(c!=0){
                b[mid]=false;
                end=mid-1;
            }
            else{
                first=mid+1;
            }
            mid=first+((end-first)/2);
        }
        cout<<mid-1<<"\n";
        }
}
