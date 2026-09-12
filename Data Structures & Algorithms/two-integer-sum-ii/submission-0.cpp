class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>pos;

        int left=0;
        int right=numbers.size()-1;

        while(left<right){
            int sum = numbers[left] + numbers[right];

            if(sum==target){
                pos.push_back(left+1);
                pos.push_back(right+1);

                return pos;
               
            }

            else if(sum>target){
                right--;

                
            }

            else{
                left++;
            }
        }
        return pos;
    }
};
