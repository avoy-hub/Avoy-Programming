
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int n1=s1.length();
    int n2=s2.length();
    for(int i=0;i<n1;i++){
        if(s1[i]>=97){
            s1[i]-=32;
        }
        if(s2[i]>=97){
            s2[i]-=32;
        }
    }
    if(s1<s2){
        cout<<-1;
    }
    if(s1>s2){
        cout<<1;
    }
    if(s1==s2){
        cout<<0;
    }
    return 0;
}
