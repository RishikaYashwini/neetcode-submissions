class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        map<char,int> mpp1,mpp2;
        for(int i = 0, j = 0; i < s.length() && j < t.length(); i++, j++){
            mpp1[s[i]]++;
            mpp2[t[j]]++;
        }
        for(int i = 0; i < s.length(); i++){
            if(mpp1[s[i]]!=mpp2[s[i]]) return false; 
        }
        return true;
    }
};
