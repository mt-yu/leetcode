#pragma once
#include<string>
#include<vector>
using std::string;
using std::vector;



class Solution {
public:
	/*771.宝石与石头*/
	int numJewelsInStones(string J, string S);
	/*905.按奇偶排序数组*/
	vector<int> sortArrayByParity(vector<int>& A);
	/*657. 机器人能否返回原点*/
	bool judgeCircle(string moves);
	/*476. 数字的补数*/
	int findComplement(int num);
	/*344. 反转字符串*/
	string reverseString(string s);
	vector<int> selfDividingNumbers(int left, int right);

};