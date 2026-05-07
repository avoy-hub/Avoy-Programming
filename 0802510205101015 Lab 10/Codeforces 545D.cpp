#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int curr_time=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(curr_time<=arr[i]){
            count++;
            curr_time+=arr[i];
        }
    }
    cout<<count<<endl;
    return 0;
}
