class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans(n/3, vector<int>(3));
        int temp = 0;
        for(int i=0;i<n;i+=3){
            if(i+2 < n && nums[i+2]-nums[i] <= k){
                ans[temp] = {nums[i], nums[i+1], nums[i+2]};
                temp++;
            }
            else{
                return vector<vector<int>>();
            }
        }
        return ans;
    }
};