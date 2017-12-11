//使用map结构，先把数组全都传入map，然后对num查找target-num
//9ms
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        multimap<int,int> newnums;
        for(int i = 0;i < nums.size();i++)
            newnums.insert(pair<int,int>(nums[i],i));
        multimap<int,int>::iterator iter1,iter2;
        for(iter1 = newnums.begin();iter1 != newnums.end();iter1++)
        {
            iter2 = newnums.find(target - iter1->first);
            if(iter2 != newnums.end())
            {
                if(newnums.count(target - iter1->first) == 1)
                {
                    result.push_back(iter1->second);
                    result.push_back(iter2->second);
                    return result;
                }
                else
                {
                    result.push_back(iter1->second);
                    iter2++;
                    result.push_back(iter2->second);
                    return result;
                }

            }
        }
        
    }
};
