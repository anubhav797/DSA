class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();

        int low = 0;
        int high = n;
        
        for (int i = low ; i <= high ; i++){
            bool found = false ;
            
            for( int num : nums ){
                 if (num == i){
                    found = true;
                    break;
                 }
            }
           if (!found) return i;
        }
        return -1;
    }
};