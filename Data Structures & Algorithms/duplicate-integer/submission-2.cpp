class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<long long, long long> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(int j=0;j<nums.size();j++){
            if(mpp[nums[j]]>1) return true;
        }
        return false;
    }
};