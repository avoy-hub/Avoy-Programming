
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
     void moveZeroes(vector<int>& nums){
         int n=nums.size();
         int i=0;
         for(int j=0;j<n;j++){
             if(nums[j]!=0){
                 swap(nums[i],nums[j]);
                 i++;
             }
         }
     }
};
int main(){
   Solution obj;
    vector<int>v={0,1,0,3,12};
    obj.moveZeroes(v);
    for(int x:v){
        cout<<x<<" ";
    }

}
