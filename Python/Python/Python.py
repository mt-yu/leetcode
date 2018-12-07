from Solution import Solution


def main():
    sol = Solution()

    # 709.转换成小写字母
    '#print(sol.toLowerCase("HELLO"))'

    # 461. 汉明距离
    '#a = sol.hammingDistance(2,5)'
    '#print(a)'

    # 922. 按奇偶排序数组 II
    # a = [4, 2, 8, 6, 1, 1, 1, 1]
    # sol.sortArrayByParityII(a)

    # 617. 合并二叉树
    # r1 = Solution.TreeNode(1)
    # r1.left = Solution.TreeNode(3)
    # r1.right = Solution.TreeNode(2)
    # r1.left.left = Solution.TreeNode(5)
    #
    # r2 = Solution.TreeNode(2)
    # r2.left = Solution.TreeNode(1)
    # r2.right = Solution.TreeNode(3)
    # r2.left.right = Solution.TreeNode(4)
    # r2.right.right = Solution.TreeNode(7)
    #
    # s = sol.mergeTrees(r1, r2)

    # 237.删除链表中的节点

    l1 = Solution.ListNode(4)
    l1.next = Solution.ListNode(5)

    l1.next.next = Solution.ListNode(1)

    l1.next.next.next = Solution.ListNode(9)
    l2 = l1.next.next
    Solution.deleteNode(l1, node=l2)

    l3 = l1

if __name__ == '__main__':
    main()
