//https://leetcode.com/problems/single-number-ii/

// int singleNumber(vector<int>& nums) {
//         int ones=0;
//         int twos=0;
        
//         for(auto i: nums){
//             ones = (ones ^ i) & (~twos);
//             twos = (twos ^ i) & (~ones);
//         }