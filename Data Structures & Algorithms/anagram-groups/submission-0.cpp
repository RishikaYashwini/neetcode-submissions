class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;
        for(auto &it:strs){
            string sortS = it;
            sort(sortS.begin(), sortS.end());
            mpp[sortS].push_back(it);
        }
        vector<vector<string>> result;
        for(auto itr : mpp){
            result.push_back(itr.second);
        }
        return result;
    }
};
