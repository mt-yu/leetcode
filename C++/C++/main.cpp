#include<atlsecurity.h>
#include<iostream>
#include"Solution.h"

int main(void)
{
	Solution solution;
	
	/*771.��ʯ��ʯͷ*/
	//string J = "aA", S = "aAAbbbb";
	//std::cout << solution.numJewelsInStones(J, S) << std::endl;


	/*905.����ż��������*/
	//vector<int> input = {3,1,2,4};
	//vector<int> output = solution.sortArrayByParity(input);
	//for (vector<int>::iterator it1 = output.begin(); it1 != output.end(); ++it1)
	//{
	//	std::cout << *it1 << std::endl;
	//}

	/*657. �������ܷ񷵻�ԭ��*/
	//string move = "UU";
	//bool b = solution.judgeCircle(move);
	//std::cout.setf(std::ios_base::boolalpha);	//ʹ�������������ת��Ϊ�������
	//std::cout << b << std::endl;

	/*476. ���ֵĲ���*/
	//int a = solution.findComplement(5);
	//std::cout << a << std::endl;
	//getchar();

	/*344. ��ת�ַ���*/
	string str = "aa";
	std::cout << solution.reverseString(str) << std::endl;




	system("pause");
	return 0;
}