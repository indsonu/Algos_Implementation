//  IT WILL SHOW ALL THE PRIME FACTORS 
//  36 -> 2 2 3 3
#include<iostream>
using namespace  std;
int main(){
    int t,i;
    cin>>t;
    for(auto i=2;t>1;i++){
        while(t%i==0){
            cout<<i<<" ";
            t=t/i;  // REMOVING THAT FACTOR ;
        }
    }
}
