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


            /*929.独特的电子邮件*/
            string[] emails = {"test.email+alex@leetcode.com", "test.e.mail+bob.cathy@leetcode.com", "testemail+david@lee.tcode.com"};
            Console.WriteLine(sol.NumUniqueEmails(emails));


            Console.ReadKey();
        }
    }
}
