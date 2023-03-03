//Made this program so that it actually compiles
//The solution below works but only copy the class: Solution
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        long int num = x, reverse = 0, curr = 0;
        while(x != 0){
            curr = x%10;
            reverse *= 10; reverse += curr;
            x /= 10;
        }
        if(num == reverse){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    Solution sol;
    int x = 121;
    sol.isPalindrome(x);
}