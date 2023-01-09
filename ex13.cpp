#include <iostream>
#include <vector>
#include "ex13.h"

class Solution {
public:
    void mer(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        int i = m - 1, j = n - 1, k = m + n - 1;

        for(; i >=0 && j >=0; k--){
            if(nums1[i] >= nums2[j]){
                nums1[k] = nums1[i--];
            } else {
                nums1[k] = nums2[j--];
            }
        }


        while(i >= 0) {
            nums1[k--] = nums1[i--];
        }

        while(j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};

int task13(){
    std::vector<int> nums1 = {1, 2, 5, 6, 0, 0};
    int m = 4;
    std::vector<int> nums2 = {7, 8};
    int n = 2;
    Solution s;
    s.mer(nums1, m, nums2, n);
    for (int i=0;i<m + n;i++)
        std::cout << nums1[i];
    return 0;
}