class Solution {
public:
    void moveZeroes(vector<int>& nums) { 
        // vector<int> v2(nums.size());
        // remove_copy(nums.begin(), nums.end(), v2.begin(), 0);
        // nums.assign(v2.begin(), v2.end());
        
        // int size = nums.size();
        // nums.erase( remove( nums.begin(), nums.end(), 0 ), nums.end() );
        // nums.resize( size );
        
        queue<int> q;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                q.push(i);
            }
            else if(!q.empty()){
                nums[q.front()] = nums[i];
                nums[i] = 0;
                q.pop();
                q.push(i);
            }
        }
    }
};