// O(n) time complexity 
//              5               6[0][1][2][3][4][5][6] those values which are filled will return and no need to compute those values 
//          4        3            // so reducing overall time 
//      3     (  2 )       1
// here it comptute and then
//

#include<iostream>
using namespace std;
int result;
int findFibonnaci(unsigned long int n,unsigned long int mem[]){
    if(mem[n]!=0){
        return mem[n];
    }
    if(n==1 || n==2){
        result=1;
    }
    else{
        result=findFibonnaci(n-1,mem)+findFibonnaci(n-2,mem);
    }
    mem[n]=result;
    return mem[n];
}
int main(){
    unsigned long int n;
    cin>>n;
    unsigned long int mem[n+1]={0};
    cout<<findFibonnaci(n,mem);
}
