using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
//using System.Text.RegularExpressions;   //正则表达式命名空间引入

namespace CSharp
{
    class Solution
    {
        #region 929.独特的电子邮件
        /// <summary>
        /// 每封电子邮件都由一个本地名称和一个域名组成，以 @ 符号分隔。
        /// 例如，在 alice@leetcode.com中， alice 是本地名称，而 leetcode.com 是域名。
        /// 除了小写字母，这些电子邮件还可能包含 ',' 或 '+'。
        /// 如果在电子邮件地址的本地名称部分中的某些字符之间添加句点（'.'），则发往那里的邮件将会转发到本地名称中没有点的同一地址。例
        /// 如，"alice.z@leetcode.com” 和 “alicez@leetcode.com” 会转发到同一电子邮件地址。 （请注意，此规则不适用于域名。）
        /// 如果在本地名称中添加加号（'+'），则会忽略第一个加号后面的所有内容。这允许过滤某些电子邮件，例如 m.y+name@email.com 将转发到 my@email.com。 （同
        /// 样，此规则不适用于域名。）
        /// 可以同时使用这两个规则。
        /// 给定电子邮件列表 emails，我们会向列表中的每个地址发送一封电子邮件。实际收到邮件的不同地址有多少？
        /// 示例：
        /// 输入：["test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"]
        /// 输出：2
        /// 解释：实际收到邮件的是 "testemail@leetcode.com" 和 "testemail@lee.tcode.com"。
        /// 
        /// 提示：
        /// 1 <= emails[i].length <= 100
        /// 1 <= emails.length <= 100
        /// 每封 emails[i] 都包含有且仅有一个 '@' 字符。
        /// </summary>
        /// <param name="emails"></param>
        /// <returns></returns>
        public int NumUniqueEmails(string[] emails)
        {
            string temp;
            for(int i = 0; i<emails.Length; i++)
            {
                //截取@前面的本地名称
                temp = (emails[i].Split('@'))[0];

                //将截取到的字符串中的 . 去掉
                temp = temp.Replace(".", "");

                //找到 + 号所在的索引 并将其后面的字符串都删除
                temp = temp.Remove(temp.IndexOf("+"));

                //保存去掉 '.' 和 '+' 过滤后的邮箱地址到 邮箱字符串中
                emails[i] = temp + "@" + (emails[i].Split('@'))[1];
            }
               // 字符串 -> 返回不同元素 -> 计数
            return emails.Distinct().Count();       // distinct() 方法 从序列中返回不同的元素
        }
        #endregion


        #region 832. 翻转图像
        /// <summary>
        /*
         给定一个二进制矩阵 A，我们想先水平翻转图像，然后反转图像并返回结果。
        水平翻转图片就是将图片的每一行都进行翻转，即逆序。例如，水平翻转 [1, 1, 0] 的结果是 [0, 1, 1]。
        反转图片的意思是图片中的 0 全部被 1 替换， 1 全部被 0 替换。例如，反转 [0, 1, 1] 的结果是 [1, 0, 0]。
        示例 1:
            输入: [[1,1,0],[1,0,1],[0,0,0]]
            输出: [[1,0,0],[0,1,0],[1,1,1]]
            解释: 首先翻转每一行: [[0,1,1],[1,0,1],[0,0,0]]；
                 然后反转图片: [[1,0,0],[0,1,0],[1,1,1]]
        示例 2:
            输入: [[1,1,0,0],[1,0,0,1],[0,1,1,1],[1,0,1,0]]
            输出: [[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]
            解释: 首先翻转每一行: [[0,0,1,1],[1,0,0,1],[1,1,1,0],[0,1,0,1]]；
                 然后反转图片: [[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]
        说明:

            1 <= A.length = A[0].length <= 20
            0 <= A[i][j] <= 1
        */
        /// </summary>
        /// <param name="A"></param>
        /// <returns></returns>
        public int[][] FlipAndInvertImage(int[][] A)
        {
            int i, j;
            for (i = 0; i <= A.GetUpperBound(0); i++) //A.GetUpperBound(0)获取 数组的 行数
            {
                Array.Reverse(A[i]);    // 反转每一行
                for (j = 0; j <= A[i].GetUpperBound(0); j++) //获取数组第i行的数组上界 得到对应行的列数
                {
                    if (A[i][j] == 1)
                        A[i][j] = 0;
                    else
                        A[i][j] = 1;
                }
            }
            return A;
        }


        #endregion
    }
}
