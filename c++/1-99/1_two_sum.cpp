class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mp;
        
        for(int i=0; i<n; i++){
            int num = nums[i];
            int req = target - num;
            if(mp.find(req) != mp.end()){
                return {mp[req], i};
            }
            mp[num] = i;
        }
        return {-1, -1};
    }
};