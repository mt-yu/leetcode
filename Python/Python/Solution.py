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