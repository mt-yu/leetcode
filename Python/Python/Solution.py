class Solution(object):
    """description of class"""
    def __init__(self, *args, **kwargs):
        return super().__init__(*args, **kwargs)


    """
        实现函数 ToLowerCase()，该函数接收一个字符串参数 str，
        并将该字符串中的大写字母转换成小写字母，之后返回新的字符串。
    """
    def toLowerCase(self, str):
        """
        :type str: str
        :rtype: str
        """
        return str.lower()
