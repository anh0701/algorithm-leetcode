class Solution {
public:
    void moveZeroes(vector<int>& nums) { 
        // vector<int> v2(nums.size());
        // remove_copy(nums.begin(), nums.end(), v2.begin(), 0);
        // nums.assign(v2.begin(), v2.end());
        
        // int size = nums.size();
        // nums.erase( remove( nums.begin(), nums.end(), 0 ), nums.end() );
        // nums.resize( size );
        
        int i = 0;
        int n = nums.size(); 
        for (int num:nums){
            if(num != 0){
                nums[i] = num;
                i++;
            }
        }
        while(i<n){
            nums[i] = 0;
            i++;
        }
    }
};