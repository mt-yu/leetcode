
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

    """ 617. 合并二叉树
    给定两个二叉树，想象当你将它们中的一个覆盖到另一个上时，两个二叉树的一些节点便会重叠。

    你需要将他们合并为一个新的二叉树。合并的规则是如果两个节点重叠，那么将他们的值相加作为节点合并后的新值，否则不为 NULL 的节点将直接作为新二叉树的节点。
    
    示例 1:
    
    输入: 
        Tree 1                     Tree 2                  
              1                         2                             
             / \                       / \                            
            3   2                     1   3                        
           /                           \   \                      
          5                             4   7                  
    输出: 
    合并后的树:
             3
            / \
           4   5
          / \   \ 
         5   4   7

    注意: 合并必须从两个树的根节点开始。

    """

    class TreeNode:
        def __init__(self, x):
            self.val = x
            self.left = None
            self.right = None

    def mergeTrees(self, t1, t2):
        """
        :type t1: TreeNode
        :type t2: TreeNode
        :rtype: TreeNode
        """
        if t1 is None:
            return t2
        elif t2 is None:
            return t1
        elif t1 and t2 is None:
            return None
        else:
            t1.val = t1.val + t2.val
            t1.left = self.mergeTrees(t1.left, t2.left)
            t1.right = self.mergeTrees(t1.right, t2.right)
            return t1


