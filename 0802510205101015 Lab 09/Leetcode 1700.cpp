#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int countStudents(vector<int>& students,vector<int>& sandwiches){
        int count0=0;
        int count1=0;
        for(int i=0;i<students.size();i++){
            if(students[i]==0){
                count0++;
            }
            else{
                count1++;
            }
        }
        for(int i=0;i<sandwiches.size();i++){
            int s=sandwiches[i];
            if(s==0){
                if(count0==0)
                break;
                count0--;
            }
            else{
                if(count1==0)
                break;
                count1--;
            }
        }
        return count0+count1;
    }
};
int main(){
    Solution obj;
    vector<int>students={1,1,1,0,0,1};
    vector<int>sandwiches={1,0,0,0,1,1};
    int result=obj.countStudents(students,sandwiches);
    cout<<"Students unable to eat:"<<result<<endl;
    return 0;
}
