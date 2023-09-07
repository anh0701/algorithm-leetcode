class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> a;
        for(int x: nums){
            a[x]++;
        }
        
         for (auto& x: a) {  
            if( x.second == 1){
                return x.first;
            }  
          }  
        return 1;
    }
};