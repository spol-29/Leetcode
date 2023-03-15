//this code is simply a class solution and cannot be compiled on a local machine
//but it can be submitted and recieve a correct answer result on the leetcode website

class Solution {
public:
    int removeElement(vector<int>& nums, int val){
        int i=0;
        for(int x:nums){
            if(x!=val){
                nums[i]=x;
                i++;
            } 
        }
        return i;
    }
};