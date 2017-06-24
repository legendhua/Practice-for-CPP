#include "sort.h"
#include <iostream>
using namespace std;

//直接插入排序
void InsertSort(vector<int> &nums)
{
	for (int i = 1; i < (int)nums.size(); i++)
	{
		int temp = nums[i];
		int j = i - 1;
		while (j >= 0 && nums[j] > temp)
		{
			nums[j + 1] = nums[j];
			--j;
		}
		nums[j + 1] = temp;
	}
}

//希尔排序（插入排序）
void ShellSort(vector<int> &nums)
{
	int d = nums.size() / 2;//步长
	while (d>0)
	{
		for (int i = d; i < (int)nums.size(); i++)
		{
			int temp = nums[i];
			int j = i - d;
			while (j >= 0 && nums[j] > temp)
			{
				nums[j + d] = nums[j];
				j=j-d;
			}
			nums[j + d] = temp;
		}
		d = d / 2;
	}
}

//冒泡法排序(交换排序)
void BubbleSort(vector<int> &nums)
{
	int temp;
	for (int i=0;i<(int)nums.size()-1;i++)
	{
		for (int j=0;j<(int)nums.size()-1-i;j++)
		{
			if (nums[j]>nums[j+1])
			{
				temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
				//不用temp实现的交换
				/*nums[j] += nums[j + 1];
				nums[j + 1] = nums[j] - nums[j + 1];
				nums[j] -= nums[j + 1];*/
			}
		}
	}
}

//优化的冒泡法排序
void OptimizationBubbleSort(vector<int> &nums)
{
	int temp;
	bool needNextCycle = true;
	for (int i = 0; i < (int)nums.size() - 1&& needNextCycle; i++)
	{
		needNextCycle = false;//只要在本次循环中没有交换，即已经实现排序，下次循环不用进行
		for (int j = 0; j < (int)nums.size() - 1 - i; j++)
		{
			if (nums[j] > nums[j + 1])
			{
				temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
				needNextCycle = true;
			}
		}
	}
}

//定向冒泡排序（改进的冒泡排序）
void OrientationBubbleBort(vector<int> &nums)
{
	int temp;
	bool needNextCycle = true;
	int left = 0;
	int right = (int)nums.size() - 1;
	while (left<right&&needNextCycle)
	{
		needNextCycle = false;
		for (int i=left;i<right;i++)
		{
			if (nums[i]>nums[i+1])
			{
				needNextCycle = true;
				temp = nums[i];
				nums[i] = nums[i + 1];
				nums[i + 1] = temp;
			}
		}
		right--;
		for (int i=right;i>left;i--)
		{
			if (nums[i]<nums[i-1])
			{
				needNextCycle = true;
				temp = nums[i];
				nums[i] = nums[i - 1];
				nums[i - 1] = temp;
			}
		}
		left++;
	}
}

//直接选择排序（选择排序）
void SelectSort(vector<int> &nums)
{
	for (int i=0;i<(int)nums.size()-1;i++)
	{
		int k = i;
		for (int j=i+1;j<(int)nums.size();j++)
		{
			if (nums[j]<nums[k])
			{
				k=j;
			}
		}
		if (k!=i)
		{
			int temp = nums[k];
			nums[k] = nums[i];
			nums[i] = temp;
		}
	}
}