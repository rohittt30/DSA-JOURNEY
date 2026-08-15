class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;

        vector<int> temp;
        for(int i = n-k ; i<n ; i++){
            int number = nums[i];
            temp.push_back(number);

        }
        for(int i = n-1 ; i>=0 ; i--){
            if(i-k >=0){
                nums[i]=nums[i-k];
            }
        }
        for(int i = 0 ; i<k ; i++){
            nums[i] = temp[i]; 
        }
        
    }
};