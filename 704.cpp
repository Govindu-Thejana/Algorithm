#include <iostream>
#include<vector>
#include <string>
using namespace std;


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right =  nums.size() - 1;
        int midIndex;
        while(left<=right){
            midIndex = (left + right)/2;
            if (nums[midIndex]==target)
            {
                cout<<midIndex;
                break;
            }
            
            else if (nums[midIndex]>target)
            {
                right = nums[midIndex];
            }
            else if (nums[midIndex]<=target){
                left = nums[midIndex];

            }

            
        }
        if (target!=nums[midIndex])
        {
            cout<<"-1"<<endl;
            return -1;
        }
        

    }
};



int main()
{

    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 12;
    Solution sol;

    sol.search(nums, target);
}