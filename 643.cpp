#include <iostream>
#include <vector>

using namespace std;

double findMaxAverage(vector<int>& nums, int k) {
    double sum = 0;

    // initialize the first window
    for (int i = 0; i < k; i++) {
        sum += nums[i];
    }

    double maxSum = sum;

    // slide the window and find the max sum
    for (int i = k; i < nums.size(); i++) {
        sum += nums[i] - nums[i - k];
        maxSum = max(maxSum, sum);
    }
    return maxSum / k;
}

int main()
{
    vector<int> nums = {1,12,-5,-6,50,3};
    int k = 4;
    vector<int> nums2 = {5};
    int k2 = 1;

    double output2 = findMaxAverage(nums2, k2);
    double output = findMaxAverage(nums, k);

    cout << "Output: " << output << endl;
    cout << "Output2: " << output2 << endl;

    return 0;
}