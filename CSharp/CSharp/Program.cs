using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharp
{
    class Program
    {
        static void Main(string[] args)
        {
            Solution sol = new Solution();


            /*929.独特的电子邮件 测试*/
            //string[] emails = {"test.email+alex@leetcode.com", "test.e.mail+bob.cathy@leetcode.com", "testemail+david@lee.tcode.com"};
            //Console.WriteLine(sol.NumUniqueEmails(emails));

            /*832. 翻转图像 测试*/
            // 定义一个 3*3 和 4*4  的输入数组 
            //二维数组(*)
            //int[,] a = new int[3, 3] { { 1, 1, 0 }, { 1, 0, 1 }, { 0, 0, 0 } };
            //int[,] b = new int[4, 4] { { 1, 1, 0, 0 }, { 1, 0, 0, 1 }, { 0, 1, 1, 1 }, { 1, 0, 1, 0 } };

            //int i, j;
            ////交错数组
            //int[][] a = new int[][] { new int[] { 1, 1, 0 }, new int[] { 0, 0, 1 }, new int[] { 1, 0, 0 } };
            //int[][] b = new int[][] { new int[] { 1, 1, 0, 0, 1 }, new int[] { 1, 0, 0, 1 }, new int[] { 0, 1, 1, 1 }, new int[] { 1, 0, 1, 0 }, new int[] { 1, 0, 1, 0 }, new int[] { 1, 0, 1, 0 } };
            //int[][] temp = sol.FlipAndInvertImage(a);
            //for (i = 0; i <= temp.GetUpperBound(0); i++)
            //{
            //    for (j = 0; j <= temp[i].GetUpperBound(0); j++)
            //        Console.Write(temp[i][j]);
            //    Console.WriteLine("");
            //}


            /*804. 唯一摩尔斯密码词*/
            //string[] words = { "sdck","anayg","ppon"};
            //Console.WriteLine(sol.UniqueMorseRepresentations(words));

            /*226. 翻转二叉树*/
            Solution.TreeNode root = new Solution.TreeNode(4);
            Solution.TreeNode l1 = new Solution.TreeNode(2);
            Solution.TreeNode r1 = new Solution.TreeNode(7);
            root.left = l1;
            root.right = r1;
            Solution.TreeNode l1l = new Solution.TreeNode(1);
            Solution.TreeNode l1r = new Solution.TreeNode(3);
            Solution.TreeNode r1l = new Solution.TreeNode(6);
            Solution.TreeNode r1r = new Solution.TreeNode(9);
            l1.left = l1l;
            l1.right = l1r;
            r1.left = r1l;
            r1.right = r1r;


            sol.InvertTree(root);

            Console.WriteLine(root.val);




            Console.ReadKey();
        }
    }
}
