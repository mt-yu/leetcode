#include <iostream>
#include "Solution.h"
#include <algorithm>

#pragma region 771.宝石与石头
/*
	 给定字符串J 代表石头中宝石的类型，和字符串 S代表你拥有的石头。
	 S 中每个字符代表了一种你拥有的石头的类型，你想知道你拥有的石头中有多少是宝石。

	J 中的字母不重复，J 和 S中的所有字符都是字母。
	字母区分大小写，因此"a"和"A"是不同类型的石头。

	示例 1:

		输入: J = "aA", S = "aAAbbbb"
		输出: 3

	示例 2:

		输入: J = "z", S = "ZZ"
		输出: 0


	注意:

		S 和 J 最多含有50个字母。
		 J 中的字符不重复。

*/
int Solution::numJewelsInStones(string J, string S)
{
	int ret = 0;
	int i = 0;
	int k = 0;

	//为空退出
	if (J.empty() || S.empty())
		return 0;

	//判断J中有没有重复的字符 区分大小写
	sort(J.begin(), J.end());	//对J进行排序
	for (i = 0; i < J.length() - 1; i++) //前后元素进行比较看是否有重复
		if (J[i] == J[i + 1]) 
			return 0;

	if(J.length() <= 50 && S.length() <= 50)
		for (i = 0; i < J.length(); i++) 
			for (k = 0; k < S.length(); k++)
			{
				if(J[i] == S[k])
					ret++;
			}
	return ret;
}
#pragma endregion
