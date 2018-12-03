
class Solution(object):
    """description of class"""
    def __init__(self, *args, **kwargs):
        return super().__init__(*args, **kwargs)

   
    """ 709.转换成小写字母
        实现函数 ToLowerCase()，该函数接收一个字符串参数 str，
        并将该字符串中的大写字母转换成小写字母，之后返回新的字符串。
    """
    def toLowerCase(self, str):
        """
        :type str: str
        :rtype: str
        """
        return str.lower()


    """ 461. 汉明距离
        两个整数之间的汉明距离指的是这两个数字对应二进制位不同的位置的数目。

        给出两个整数 x 和 y，计算它们之间的汉明距离。

        注意：
        0 ≤ x, y < 231.

        示例:

        输入: x = 1, y = 4

        输出: 2

        解释:
        1   (0 0 0 1)
        4   (0 1 0 0)
               ↑   ↑

        上面的箭头指出了对应二进制位不同的位置。
    """
    def hammingDistance(self, x, y):
        """
        :type x: int
        :type y: int
        :rtype: int
        """
        count = 0
        num = x^y
        while(num != 0):
            num = num & (num - 1)
            count = count + 1

        return count


    """ 922. 按奇偶排序数组 II
    给定一个非负整数数组 A， A 中一半整数是奇数，一半整数是偶数。
    
    对数组进行排序，以便当 A[i] 为奇数时，i 也是奇数；当 A[i] 为偶数时， i 也是偶数。
    
    你可以返回任何满足上述条件的数组作为答案。
    
     
    
    示例：
    
    输入：[4,2,5,7]
    输出：[4,5,2,7]
    解释：[4,7,2,5]，[2,5,4,7]，[2,7,4,5] 也会被接受。
    
     
    
    提示：
    
    2 <= A.length <= 20000
    A.length % 2 == 0
    0 <= A[i] <= 1000

    """
    def sortArrayByParityII(self, A):
        """
        :type A: List[int]
        :rtype: List[int]
        """
        i = 0
        j = 1
        A.sort()
        for k in range(int(len(A)/2)):
            if A[i] % 2 != 0:
                while A[j] % 2 != 0:
                    j = j + 2
                temp = A[i]
                A[i] = A[j]
                A[j] = temp
            i = i+2
        return A


