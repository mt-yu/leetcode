#include<atlsecurity.h>
#include<iostream>
#include"Solution.h"

int main(void)
{
	Solution solution;
	
	/*771.宝石与石头*/
	//string J = "aA", S = "aAAbbbb";
	//std::cout << solution.numJewelsInStones(J, S) << std::endl;


	/*905.按奇偶排序数组*/
	vector<int> input = {3,1,2,4};
	vector<int> output = solution.sortArrayByParity(input);
	for (vector<int>::iterator it1 = output.begin(); it1 != output.end(); ++it1)
	{
		std::cout << *it1 << std::endl;
	}

	vector<int>::pointer a_ptr;
	vector<int>::const_pointer a_cptr;

	//system("pause");
	return 0;
}