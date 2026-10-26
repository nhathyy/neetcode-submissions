class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> a;
        for(int num : nums) {
            if(a.count(num)) return true;
            a.insert(num);
        }
        return false;
    }
};
