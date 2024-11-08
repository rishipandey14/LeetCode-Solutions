class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int maxLen = 1;
        vector<int> t(n, 1);
        for(int i=0; i<n; i++){
            for(int j=i-1; j>=0; j--){
                if(nums[j] < nums[i]){
                    t[i] = max(t[i], t[j]+1);
                    maxLen = max(maxLen, t[i]);
                }
            }
        }
        return maxLen;
    }
};