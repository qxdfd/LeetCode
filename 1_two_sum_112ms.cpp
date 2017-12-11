//将数组分为了三个部分，大于target/2和小于target/2还有等于，然后进行查找
//112ms
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size1 = 0,size2 = 0,size3 = 0;
        vector<int> pair;
        vector<vector<int>> num1,num2,num3;
        vector<int> result;
        for(int i = 0;i < nums.size();i ++)
        {
            if(nums[i] < target/2)
            {
                pair.push_back(nums[i]);
                pair.push_back(i);
                num1.push_back(pair);
                pair.erase(pair.begin(),pair.end()); 
                size1++;
            }  
            else if(nums[i] > target/2)
            {
                pair.push_back(nums[i]);
                pair.push_back(i);
                num2.push_back(pair);
                pair.erase(pair.begin(),pair.end()); 
                size2++;
            } 
            else
            {
                pair.push_back(nums[i]);
                pair.push_back(i);
                num3.push_back(pair);
                pair.erase(pair.begin(),pair.end()); 
                size3++;
            }
        }
        if(size3 == 2)
        {
            result.push_back(num3[0][1]);
            result.push_back(num3[1][1]);
            return result;
        }
        for(int i = 0;i< size1;i++)
        {
            for(int k = 0;k< size2;k++)
            {
                if(num1[i][0] + num2[k][0] == target)
                {
                    result.push_back(num1[i][1]);
                    result.push_back(num2[k][1]);
                    return result;
                }
            }
        }

    }
};
