//for dry run and complexities[https://chatgpt.com/share/6a752dab-3830-83ee-acd9-02af88494b6e]

class Solution {
public:
    void rotate(vector<int>& nums, int k) {

   
        int n = nums.size();
        k = k % n;
        vector<int> temp(n);

        for(int i = n - k; i < n; i++){ // shifting elements into temp array
            temp[i - n + k] = nums[i];
        }

        for(int i = n - k - 1; i >= 0; i--){ // shifting remaining elements to right side
        nums[i + k] = nums[i];
        }

        for(int i = 0; i < k; i++){ // pushing k elements to back into array
            nums[i] = temp[i];
        }


    }
};