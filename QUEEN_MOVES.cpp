// THIS ANSWER I WROTE FOR QUEENS MOVEMENT WHERE IT CAN MOVE AFTER SEEING IT AND PASSING ALL THE CONSTRAINTS VALUE YOU WILL
// GET INTO ACCOUNT THAT WHAT I DID IN THIS

#include<iostream>
#include<vector>
using namespace std;
void test(vector<vector<int>>&vect,int k,int l,int n){
    for(auto i=0;i<n;i++){
        for(auto j=0;j<n;j++){
            if(i==k || j==l){
                vect[i][j]--;    
            }
        }    
     }
    for(auto i=k+1,j=l+1;i<n && j<n;i++,j++){
        vect[i][j]--;
    }
    for (auto i=k-1,j=l-1; i >= 0 && j >=0; i--, j--) {
      vect[i][j]--;
    }
    for(auto i=k-1,j=l+1;i>-1 && j<n;i--,j++){
            vect[i][j]--;
    }
    for(auto i=k+1,j=l-1;j>-1 && i<n;i++,j--){
        vect[i][j]--;
    }
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>vect(n,vector<int>(n,1));
    test(vect,1,5,n);
    for(auto i=0;i<n;i++){
         for(auto j=0;j<n;j++){
                cout<<vect[i][j]<<" ";
               }
               cout<<endl;
         } 
}
