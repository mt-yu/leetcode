#include<atlsecurity.h>
#include<iostream>
#include"Solution.h"

int main(void)
{
	Solution solution;
	
	/*771.宝石与石头*/
	string J = "aA", S = "aAAbbbb";
	std::cout << solution.numJewelsInStones(J, S) << std::endl;

	system("pause");
	return 0;
}