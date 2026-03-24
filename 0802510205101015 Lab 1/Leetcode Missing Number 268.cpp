#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int missingNumber(vector<int>& nums){
        int n=nums.size();
    int expectedSum= n*(n+1)/2;
    int actualSum=0;
    for(int i=0;i<n;i++){
        actualSum+=nums[i];
    }
    return expectedSum-actualSum;

    }


};
int main(){
Solution obj;
vector<int>v={3,0,1};
cout<<"Missing number is:"<<obj.missingNumber(v)<<endl;
return 0;

}
