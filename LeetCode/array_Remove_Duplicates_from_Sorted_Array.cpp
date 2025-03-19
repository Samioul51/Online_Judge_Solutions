/*

Question Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

*/

class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int i,j=-1;
            for(i=1;i<nums.size();i++){
                if(nums[i-1]==nums[i])
                {
                    if(j==-1)
                        j=i;
                }
                else{
                    if(j!=-1)
                    {
                        nums[j]=nums[i];
                        j++;   
                    }
                }    
            }
            if(j==-1)
                return nums.size();
            return j;
        }
};
