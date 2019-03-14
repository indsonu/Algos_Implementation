#include<iostream>
using namespace std;
int main()
{
long long int t;
cin>>t;
while(t--)
    {
    long int n,b[32]={0};
    cin>>n;
    string s[n];
    for(auto i=0;i<n;i++)
        {
        long long int a[5]={0},d=0;
        cin>>s[i];
        for(auto j=0;j<s[i].length();j++)
        { 
        if(s[i][j]=='a'){a[0]=1;}
        else if(s[i][j]=='e'){a[1]=1;}
        else if(s[i][j]=='i'){a[2]=1;}                       //                    1   0   1   0    1
        else if(s[i][j]=='o'){a[3]=1;}                       //                    0   1   0   1    0       OR of these 2 is:
        else if(s[i][j]=='u'){a[4]=1;}                       //                    1   1   1   1    1 
        }
        d=a[0]*1+a[1]*2+a[2]*4+a[3]*8+a[4]*16;
        b[d]++;
        }
        long long int c=0;
        for (auto k=1; k<=30;k++) {
                for (auto l=k+1; l<32;l++) {
                    if (((k|l)==31)&&b[k]!=0&&b[l]!=0) { c=c+(b[k]*b[l]);}}}
                long long int r=b[31];
                c=c+(r*(r-1)/2);
                cout<<c<<"\n";
    }
}
