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
	//vector<int> input = {3,1,2,4};
	//vector<int> output = solution.sortArrayByParity(input);
	//for (vector<int>::iterator it1 = output.begin(); it1 != output.end(); ++it1)
	//{
	//	std::cout << *it1 << std::endl;
	//}

	/*657. 机器人能否返回原点*/
	//string move = "UU";
	//bool b = solution.judgeCircle(move);
	//std::cout.setf(std::ios_base::boolalpha);	//使布尔类型输出不转换为整型输出
	//std::cout << b << std::endl;

	/*476. 数字的补数*/
	//int a = solution.findComplement(5);
	//std::cout << a << std::endl;
	//getchar();

	/*344. 反转字符串*/
	string str = "aa";
	std::cout << solution.reverseString(str) << std::endl;




	system("pause");
	return 0;
}