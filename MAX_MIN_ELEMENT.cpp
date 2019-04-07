#include <iostream>
using namespace std;
int main()
{
    int a[6]={8,9,5,21,6,4};
    int first=-1;
    int second=-2;
    for(auto i=0;i<6;i++){
        if(a[i]>first){
            second=first;
            first=a[i];
        }
        else if(a[i]>second && first!=a[i]){
            second=a[i];
        }
    }
    cout<<first<<" "<<second;
}
