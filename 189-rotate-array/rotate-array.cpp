class Solution {
public:
void reverse ( vector <int>&arr, int i, int k){
    while(i<=k){
        swap(arr[i],arr[k]);
        i++;
        k--;
    }
    return;
}
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
         k = k % n;


reverse(nums, 0, n - 1);      // Reverse the whole array
reverse(nums, 0, k - 1);      // Reverse the first k elements
reverse(nums, k, n - 1);      // Reverse the remaining n-k elements
        return;
    }
};