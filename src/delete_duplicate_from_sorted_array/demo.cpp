#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
	//if (nums.size() == 0)
		//return 0;
	vector<int> newNums;
	newNums.push_back(nums[0]);
	for (int i = 1; i < nums.size(); i++)
	{
		if (nums[i] > newNums.back())
			newNums.push_back(nums[i]);
	}
	nums = newNums;
	return newNums.size();
}

int main(void)
{
	vector<int> nums;
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(2);
	nums.push_back(2);
	//nums.push_back(2);
	int count = removeDuplicates(nums);
	cout << count << endl;
	for (int i=0;i<nums.size();i++)
	{
		cout << nums[i] << " ";
	}
	return 0;
}