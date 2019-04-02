#include<iostream>
using namespace std;
int a,b;
int Test(int n){
    if(n<0){
        return 100000;
    }
    else if(n==0){
        return 1;
    }
    return min(Test(n-a),Test(n-b))+1;
}
int main(){
    int n;
    cin>>n>>a>>b;
    cout<<Test(n)-1;
}
