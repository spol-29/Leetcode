#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {        
        if (haystack.find(needle) != 100000)
            return haystack.find(needle);
        else return -1;
    }
};
int main(){

}