class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(nums[i])==mp.end())
                mp[nums[i]]=i;
            else
            {
                int secondIndex=mp[nums[i]];
                if(abs(i-secondIndex)<=k)
                    return true;
                else
                    mp[nums[i]]=i;
            }
        }
        return false;
    }
};