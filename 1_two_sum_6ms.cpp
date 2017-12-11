//同样是使用map，但是先判断map结构中有没有target-num，没有则向map中插入num
//6ms
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        map<int,int> newnums;
        for(int i = 0;i < nums.size();i++)
        {
            if(newnums.find(target - nums[i]) != newnums.end())
            {
                result.push_back(newnums[target - nums[i]]);
                result.push_back(i);
                return result;
            }
            newnums.insert(pair<int,int>(nums[i],i));
        }
    }
};
