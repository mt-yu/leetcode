#include <iostream>
#include "Solution.h"
#include <algorithm>

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
