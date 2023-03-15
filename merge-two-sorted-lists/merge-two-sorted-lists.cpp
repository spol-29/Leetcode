/*actually compilable leetcode problem instead of using a class solution class
Look down below for t he leetcode solution:

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if (n == 0) {
            return "";
        }
        string prefix = strs[0];
        for (int i = 1; i < n; i++) {
            while (strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.length() - 1);
                if (prefix.empty()) {
                    return "";
                }
            }
        }
        return prefix;
    }
};

int main() {
    Solution sol;
    int n, m;
    cin >> n >> m;
    vector<string> strs(n + m);
    for(int i = 0; i < n; i++){
        cin >> strs[i];
    }
    for(int i = n; i < n + m; i++){
        cin >> strs[i];
    }
    cout << sol.longestCommonPrefix(strs);
    return 0;
}
//actual leetcode solution: that fits the problem
*/
class Solution {
public: 
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2){
		if(l1 == NULL) return l2;
		if(l2 == NULL) return l1;
		if(l1 -> val <= l2 -> val){
			l1 -> next = mergeTwoLists(l1 -> next, l2);
			return l1;
		}else{
			l2 -> next = mergeTwoLists(l1, l2 -> next);
			return l2;            
		}
	}
};	