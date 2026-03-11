#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0;
        int last=nums.size()-1;
        while(start<=last){
            int mid=(start+last)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                last=mid-1;
            }
        }
        return -1;

    }
};
    int main(){
Solution obj;
vector<int>v={-1,0,3,5,9,12};
int target =9;
cout<<"Find target:"<<obj.search(v,target);
return 0;

    }

