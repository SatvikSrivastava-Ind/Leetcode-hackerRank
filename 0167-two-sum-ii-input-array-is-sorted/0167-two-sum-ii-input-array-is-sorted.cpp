class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
       int n=arr.size();
       
        int start = 0;
    int end = n-1;
    while(start<end){
        int sum=arr[start]+arr[end];
        if(sum==target){
            cout<<start+1<<" "<<end+1;
            return {start+1, end+1};
        }
        else if(sum>target){
            end--;
        }
        else{
            start++;
        }

    }
    return {-1};
    }
};