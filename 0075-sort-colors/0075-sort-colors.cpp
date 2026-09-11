class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int x=0;
        int y=0;
        int z=0;
        for (int i=0;i<n;i++){
            if (nums[i]==0){
                x++;
            }
            else if(nums[i]==1){
                y++;
            }
            else{
                z++;
            }
        }
        int i=0;
        while(x!=0){
            nums[i]=0;
            x--;
            i++;
        }
        while(y!=0){
            nums[i]=1;
            y--;
            i++;
        }
        while(z!=0){
            nums[i]=2;
            z--;
            i++;
        }
        
    }
    
};