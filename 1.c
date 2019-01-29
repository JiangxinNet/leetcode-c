#include <stdio.h>
#include <stdlib.h>

/*
 *给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那两个整数，并返回他们的数组下标。
 *你可以假设每种输入只会对应一个答案。但是，你不能重复利用这个数组中同样的元素。
 *示例:
 *给定 nums = [2, 7, 11, 15], target = 9
 *因为 nums[0] + nums[1] = 2 + 7 = 9
 *所以返回 [0, 1]
 */

int* two_sum(int *nums, int num_size, int target)
{

}

int *two_sum_option1(int *nums, int num_size, int target)
{
	int *result = NULL;
	int i = 0, j = 0;
	for (i = 0; i < num_size; i++) {
		for ( j = i+1; j < num_size; j++) {
			if (nums[i] + nums[j] == target) {
				break;
			}
		}
	}
	if (i != num_size && j != num_size ) {
		result = (int *)malloc(sizeof(int) * 2);
		if ( !result ) {
			return NULL;
		}
		result[0] = i;
		result[1] = j;
	}
	return result;
}

int* two_sum_option2(int *nums, int num_size, int target)
{
	int *result = NULL;	
}


/*
 *要求是两个整数，可以换成任意整数
 *如：
 *给定 nums = [1, 2, 3, 4, 5, 9, 11, 15], target = 9
 *因为 nums[1] + nums[2] + nums[3] = 2 + 3 + 4 = 9
 *所以返回 [1, 2, 3]
 *或者返回 [0, 2, 4] 因为nums[0]+nums[2]+nums[3] = 1 + 3 + 5 = 9
 *等等，只要结果正确，输出的数组可以为任意组合
 *或者输出所给结果为target的集合
 */

int main(int argc, char *argv[])
{

}
