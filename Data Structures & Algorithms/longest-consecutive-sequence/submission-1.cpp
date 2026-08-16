class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res = 0;
        unordered_set<int> arr(nums.begin(),nums.end());
        for(auto num:nums){
            if(arr.find(num-1)==arr.end()){
                int streak=1, curr=num;
                while(arr.find(curr+1)!= arr.end()) {
                    streak++;
                    curr++;
                }
                res=max(res,streak);
            }
        }
        return res;
    }
};
