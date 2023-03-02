class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        long int num = x, reverse = 0, curr = 0;
        while(x != 0){
            curr = x%10;
            reverse = reverse*10 + curr;
            x /= 10;
        }
        if(num == reverse)
            return true;
        else{
            return false;
        }
    }
};