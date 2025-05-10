class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i =0;
        int j =-1;

        for(int k =0;k<nums.size();k++){
            if(nums[k]==0){
                j=k;
                break;
            }
        }
        if(j==-1){
            return;
        }
        for(int i =j+1;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
        return;
    }
};