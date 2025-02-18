class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> data;
        vector<int> ret;

        for(int i=0; i < nums.size(); i++)
        {
            int remain = target - nums[i];
            if (data.find(remain) != data.end())
            {
                ret.push_back(data[remain]);
                ret.push_back(i);
                break;
            }
            data.insert({nums[i], i});
        }
        return ret;
    }
};
