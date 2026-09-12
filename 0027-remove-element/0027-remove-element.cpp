class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int start = 0;
        int end = n-1;
        int count=0;
        while(start<=end){
            if(nums[end]==val){
                end--;
                count++;
                continue;
            }
            if(nums[start]==val){
                swap(nums[start],nums[end]);
                end--;
                count++;
                continue;
            }
            start++;
        }
        return nums.size()-count;
    }
    
};