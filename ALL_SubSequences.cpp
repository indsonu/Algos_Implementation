??total subsequences in the given string are: *2pow(n)* including ""

#include<bits/stdc++.h>
using namespace std;
void findSubsequence(string mainString,int n,string currentString,int index){
    if(index==n){
        return ;
    }
    if(currentString!="")
    cout<<currentString<<endl;
    for(auto i=index+1;i<n;i++){
        currentString+=mainString[i];
        findSubsequence(mainString,n,currentString,i);
        currentString=currentString.erase(currentString.size()-1);
    }
    return ;
}
int main(){
    string s="abcd";
    findSubsequence(s,s.size(),"",-1);
}
