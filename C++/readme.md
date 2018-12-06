##### 657. 机器人能否返回原点(C++)
        解法1(速度最快的)
        static const auto io_sync_off = []() { // turn off sync std::ios::sync_with_stdio(false); // untie in/out streams std::cin.tie(nullptr); return nullptr; }(); 用了这个提速 

[ios::sync_with_stdio(false)](https://blog.csdn.net/qq_32320399/article/details/81518476)


##### 476. 数字的补数(C++)
    int flag = 0;
    int tem = num;
    while (tem) {
        tem >>= 1;
        flag++;
    }
    int sum = 1;
    for (; flag > 1; flag--) {
        sum <<= 1;
        sum += 1;
    }
    return sum - num;

##### 344. 反转字符串
    return reverse(s.begin(), s.end());