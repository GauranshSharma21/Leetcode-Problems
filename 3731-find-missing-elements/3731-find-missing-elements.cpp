//for dry run and complexities[https://chatgpt.com/share/6a713284-6dc0-83ee-9a2b-a38cc0f1ec0e]

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;

        for(int i = 0; i < nums.size() - 1;i++){
               for(int missingNum = nums[i] + 1; missingNum < nums[i + 1]; missingNum++){
                ans.push_back(missingNum);
               }
            
        }

        return ans;
    }
};