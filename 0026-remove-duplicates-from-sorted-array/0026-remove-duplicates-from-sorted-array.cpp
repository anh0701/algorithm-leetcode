class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // set để loại bỏ phần tử trùng lặp
        // clear mảng nums, và thêm set vào nums và return size của set
        set<int> s; 
        for(int i =0; i<nums.size(); i++)
        {
            s.insert(nums[i]);
        }
        
        int ans = s.size();
        nums.clear();
        for(auto i:s)
        {
           nums.push_back(i);
        }
        return ans;
    }
};