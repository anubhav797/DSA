

class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            int next = (i + 1) % n;
            if (nums[i] > nums[next]) {
                count++;
            }
            if (count > 1) return false; // more than one drop → not rotated sorted
        }
        return true;
    }
};
