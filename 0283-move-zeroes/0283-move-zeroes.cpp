class Solution {
public:
    void moveZeroes(vector<int>& v) {
        int size = v.size(); /* returns the size of vector      TC - \U0001d4de(1)*/
        // vector<int> v2(nums.size());
        // remove_copy(nums.begin(), nums.end(), v2.begin(), 0);
        v.erase( remove( v.begin(), v.end(), 0 ), v.end() );
        // nums.assign(v2.begin(), v2.end());
        v.resize( size );
    }
};