#include <iostream>
#include "Solution.h"
#include <algorithm>	//������һϵ����Ա�׼ģ�������ִ���㷨��ģ�庯������sort()
#include <functional>      // For greater<int>( )
#include <list>
#include <tchar.h>
#pragma region 771.��ʯ��ʯͷ
/*
	 �����ַ���J ����ʯͷ�б�ʯ�����ͣ����ַ��� S������ӵ�е�ʯͷ��
	 S ��ÿ���ַ�������һ����ӵ�е�ʯͷ�����ͣ�����֪����ӵ�е�ʯͷ���ж����Ǳ�ʯ��

	J �е���ĸ���ظ���J �� S�е������ַ�������ĸ��
	��ĸ���ִ�Сд�����"a"��"A"�ǲ�ͬ���͵�ʯͷ��

	ʾ�� 1:

		����: J = "aA", S = "aAAbbbb"
		���: 3

	ʾ�� 2:

		����: J = "z", S = "ZZ"
		���: 0


	ע��:

		S �� J ��ຬ��50����ĸ��
		 J �е��ַ����ظ���

*/
int Solution::numJewelsInStones(string J, string S)
{
	int ret = 0;
	int i = 0;
	int k = 0;

	//Ϊ���˳�
	if (J.empty() || S.empty())
		return 0;

	//�ж�J����û���ظ����ַ� ���ִ�Сд
	sort(J.begin(), J.end());	//��J��������
	for (i = 0; i < J.length() - 1; i++) //ǰ��Ԫ�ؽ��бȽϿ��Ƿ����ظ�
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

#pragma region 905.����ż��������
/*
����һ���Ǹ��������� A������һ���� A ������ż��Ԫ����ɵ����飬����� A ����������Ԫ�ء�

����Է���������������κ�������Ϊ�𰸡�



ʾ����

���룺[3,1,2,4]
�����[2,4,3,1]
��� [4,2,3,1]��[2,4,1,3] �� [4,2,1,3] Ҳ�ᱻ���ܡ�



��ʾ��

	1 <= A.length <= 5000
	0 <= A[i] <= 5000
*/


bool UDgreater(int elem1, int elem2)
{
	return elem1 > elem2;
}

vector<int> Solution::sortArrayByParity(vector<int>& A)
{
	if (A.empty())	//	�ж��Ƿ�Ϊ��
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

#pragma region 657. �������ܷ񷵻�ԭ��
/*
�ڶ�άƽ���ϣ���һ�������˴�ԭ�� (0, 0) ��ʼ�����������ƶ�˳���ж����������������ƶ����Ƿ��� (0, 0) ��������

�ƶ�˳�����ַ�����ʾ���ַ� move[i] ��ʾ��� i ���ƶ��������˵���Ч������ R���ң���L���󣩣�U���ϣ��� D���£��������������������ж����󷵻�ԭ�㣬�򷵻� true�����򣬷��� false��

ע�⣺�����ˡ��泯���ķ����޹ؽ�Ҫ�� ��R�� ��ʼ��ʹ�����������ƶ�һ�Σ���L�� ��ʼ�������ƶ��ȡ����⣬����ÿ���ƶ������˵��ƶ�������ͬ��



ʾ�� 1:

����: "UD"
���: true
���ͣ������������ƶ�һ�Σ�Ȼ�������ƶ�һ�Ρ����ж�����������ͬ�ķ��ȣ���������ջص�����ʼ��ԭ�㡣��ˣ����Ƿ��� true��

ʾ�� 2:

����: "LL"
���: false
���ͣ������������ƶ����Ρ�������λ��ԭ�����࣬��ԭ�������� ���ƶ��� �ľ��롣���Ƿ��� false����Ϊ�����ƶ�����ʱû�з���ԭ�㡣

*/

bool Solution::judgeCircle(string moves)
{
	int u = 0;
	int d = 0;
	int l = 0;
	int r = 0;
	string::iterator ite = moves.begin();	
	for (size_t i = 0; i < moves.size(); i++) //����������ַ���
	{
		switch (_totupper(moves[i]))	//��������ַ�ת��Ϊ��д��ĸ
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


