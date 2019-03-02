#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="abcd";
    for(auto i=0;s[i];i++){
        string s1;
        for(auto j=i;s[j];j++){
            s1+=s[j];
            cout<<s1<<endl;
        }
    }
}
