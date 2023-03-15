/*this is just a class solution and cannot be compiled on a local machine 
but it can be submitted and recieve a 
correct answer result on the leetcode website*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums){
        int x = size(nums), pos = 0, curr;
        for(int i=0;i<x;i++){
            if(curr!=nums[i]){
                curr=nums[i];
                nums[pos++]=curr;
            }else {continue;}
        }
       return pos;
    }
};