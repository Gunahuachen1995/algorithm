class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s(nums1.begin(),nums1.end());
        vector<int> result;
        for (int i:nums2)
        {
            if(s.count(i))
            {
                result.push_back(i);
                s.erase(i);
            }
            
        }
        return result;
    }
};
