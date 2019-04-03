// THIS IS FOR THE LEARNING PART
// WE CAN LEARN THIS MORE RATHER THAN MAIN TOTIENT FUNCS FOR MORE YOU CAN CHECK MY SPOJ_SOLS


#include<iostream>
using namespace  std;
int main(){
    int t,i,result,ct=0,n;
    cin>>n;
    while(n--){
        cin>>t;
        result=t;
        for(auto i=2;t>1;i++){
            while(t%i==0){ // IF IT IS THE FACTOR THEN
                if(ct!=i){
                result=result-(result/i);}
                t=t/i; // REMOVING PRIME FACTOR 
                ct=i;
            }
        }
        cout<<result<<"\n";
    }
}
