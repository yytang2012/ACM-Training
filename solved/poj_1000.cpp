/*
 * 问题描述：计算两个整数相加的和
 *
 * 提交状态： AC / WA / TLE / ...
 *
 * AC 结果： Memory: 160K	Time: 1110MS
 *
 * 解题方法1：读取每一行，提取出加数及被加数，并且将其转换成整形，最后相加
 *
 * 解题方法2 （可选）：
 *
 * 出错次数：0
 *
 * 错误原因 （可选）：
 *
 * 心得体会 （可选）：
 */

#include "cstdio"
using namespace std;

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d", a + b);
    return 0;
}
