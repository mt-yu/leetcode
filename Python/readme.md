##### 461. 汉明距离(python)
        可以通过 str.count('1') 的方法返回x与y异或后的结果

##### 922. 按奇偶排序数组 II
        #其他方法
        o_list = list()
        e_list = list()
        res = list()
        
        for v in A:
            if (v % 2 == 0):
                e_list.append(v)
            if (v % 2 == 1):
                o_list.append(v)
                
        for i in range(len(o_list)):
            res.append(e_list[i])
            res.append(o_list[i])
        
        return res

##### 617. 合并二叉树
        根节点相加
        递归每一个左右子树相加