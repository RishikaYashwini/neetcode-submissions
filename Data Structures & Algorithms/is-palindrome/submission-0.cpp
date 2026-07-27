class Solution {
public:
    bool isPalindrome(string s) {
        string temp ="";
        for(auto c : s){
            if(isalnum(c)){
                temp += tolower(c);
            }
        }
        return temp==string(temp.rbegin(),temp.rend());
    }
};
