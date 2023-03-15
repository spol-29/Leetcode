class Solution {
public:
    bool isValid(string s) {
        stack<char> parantheses;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                parantheses.push(s[i]);
            }else{
                if(parantheses.empty()){
                    return false;
                }
                if(s[i]==')' && parantheses.top()!='('){
                    return false;
                }else if(s[i]=='}' && parantheses.top()!='{'){
                    return false;
                }else if(s[i]==']' && parantheses.top()!='['){
                    return false;
                }else{
                    parantheses.pop();
                }
            }
        }
        return parantheses.empty();
    }
};