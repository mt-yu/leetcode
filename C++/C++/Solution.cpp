#include <iostream>
#include "Solution.h"
#include <algorithm>	//定义了一系列针对标准模版库容器执行算法的模板函数。如sort()
#include <functional>      // For greater<int>( )
#include <list>
#include <tchar.h>
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

#pragma region 905.按奇偶排序数组
/*
给定一个非负整数数组 A，返回一个由 A 的所有偶数元素组成的数组，后面跟 A 的所有奇数元素。

你可以返回满足此条件的任何数组作为答案。



示例：

输入：[3,1,2,4]
输出：[2,4,3,1]
输出 [4,2,3,1]，[2,4,1,3] 和 [4,2,1,3] 也会被接受。



提示：

	1 <= A.length <= 5000
	0 <= A[i] <= 5000
*/


bool UDgreater(int elem1, int elem2)
{
	return elem1 > elem2;
}

vector<int> Solution::sortArrayByParity(vector<int>& A)
{
	if (A.empty())	//	判断是否为空
		std::cout << "The vector is empty." << std::endl;

	std::sort(A.begin(), A.end());

	vector<int> Even;
	vector<int> Odd;

	for (vector<int>::iterator it = A.begin(); it != A.end(); ++it)
	{
		if (*it % 2 == 0)
		{
			Even.emplace_back(*it);
			continue;
		}			
		Odd.emplace_back(*it);
	}

	Even.insert(Even.end(), Odd.begin(), Odd.end());

	return Even;
}

#pragma endregion

#pragma region 657. 机器人能否返回原点
/*
在二维平面上，有一个机器人从原点 (0, 0) 开始。给出它的移动顺序，判断这个机器人在完成移动后是否在 (0, 0) 处结束。

移动顺序由字符串表示。字符 move[i] 表示其第 i 次移动。机器人的有效动作有 R（右），L（左），U（上）和 D（下）。如果机器人在完成所有动作后返回原点，则返回 true。否则，返回 false。

注意：机器人“面朝”的方向无关紧要。 “R” 将始终使机器人向右移动一次，“L” 将始终向左移动等。此外，假设每次移动机器人的移动幅度相同。



示例 1:

输入: "UD"
输出: true
解释：机器人向上移动一次，然后向下移动一次。所有动作都具有相同的幅度，因此它最终回到它开始的原点。因此，我们返回 true。

示例 2:

输入: "LL"
输出: false
解释：机器人向左移动两次。它最终位于原点的左侧，距原点有两次 “移动” 的距离。我们返回 false，因为它在移动结束时没有返回原点。

*/

bool Solution::judgeCircle(string moves)
{
	int u = 0;
	int d = 0;
	int l = 0;
	int r = 0;
	string::iterator ite = moves.begin();	
	for (size_t i = 0; i < moves.size(); i++) //迭代传入的字符串
	{
		switch (_totupper(moves[i]))	//将传入的字符转换为大写字母
		{
		case 'U':
			u++;
			break;
		case 'D':
			d++;
			break;
		case 'R':
			r++;
			break;
		case 'L':
			l++;
			break;
		default:
			break;
		}
	}
	if (u - d == 0 && l - r == 0)
		return true;
	return false;
}

#pragma endregion

#pragma region 476. 数字的补数
/*
	给定一个正整数，输出它的补数。补数是对该数的二进制表示取反。

	注意:

	给定的整数保证在32位带符号整数的范围内。
	你可以假定二进制数不包含前导零位。

	示例 1:

	输入: 5
	输出: 2
	解释: 5的二进制表示为101（没有前导零位），其补数为010。所以你需要输出2。

	示例 2:

	输入: 1
	输出: 0
	解释: 1的二进制表示为1（没有前导零位），其补数为0。所以你需要输出0。
*/

int Solution::findComplement(int num)
{
	int flag = 0;
	int temp = num;
	while (temp)
	{
		temp >>= 1;
		flag++;
	}
	temp = 1;
	for (int i = flag; i > 0; i--)
	{
		num = num ^ temp;
		temp <<= 1;
	}
	
	return num;


}

#pragma endregion

#pragma region 344. 反转字符串
/*
编写一个函数，其作用是将输入的字符串反转过来。

示例 1:

输入: "hello"
输出: "olleh"

示例 2:

输入: "A man, a plan, a canal: Panama"
输出: "amanaP :lanac a ,nalp a ,nam A"
*/

string Solution::reverseString(string s)
{
	string restr = "";	//用于存放返回字符串
	if (!s.empty())
	{
		std::basic_string <char>::iterator str_rIter;			//iterator 提供可读取或修改字符串中任何元素的随机访问迭代器的类型
		std::basic_string <char>::iterator strp_Iter;			
		str_rIter = s.end();	//得到最后一个元素之后的位置
		strp_Iter = s.begin();
		do
		{
			str_rIter--;
			restr.push_back(*str_rIter);
		} while (strp_Iter != str_rIter);
	}
	//std::reverse(s.begin(), s.end());	//直接调用算法头文件中的方法
	return restr;
}





#pragma endregion

#pragma region 728. 自除数
/*
	自除数 是指可以被它包含的每一位数除尽的数。

	例如，128 是一个自除数，因为 128 % 1 == 0，128 % 2 == 0，128 % 8 == 0。

	还有，自除数不允许包含 0 。

	给定上边界和下边界数字，输出一个列表，列表的元素是边界（含边界）内所有的自除数。

	示例 1：

	输入：
	上边界left = 1, 下边界right = 22
	输出： [1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 15, 22]

	注意：

		每个输入参数的边界满足 1 <= left <= right <= 10000。
*/

vector<int> Solution::selfDividingNumbers(int left, int right)
{
	vector<int> ret;
	for (int i = left; i <= right; i++)
	{
		int k = 1, temp = i;
		while (k <= i) k *= 10; k /= 10;
		while (k > 0) {
			if (temp / k == 0) break;
			if (i % (temp / k) != 0) break;
			temp -= (temp / k)*k;
			k /= 10;
		}
		if (k == 0) ret.push_back(i);
	}
	return ret;
}
#pragma endregion