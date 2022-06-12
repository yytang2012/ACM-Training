"""
问题描述：计算两个整数相加的和

解题方法1：读取每一行，提取出加数及被加数，并且将其转换成整形，最后相加

解题方法2 （可选）：

出错次数：0

错误原因 （可选）：

心得体会 （可选）：
"""


def main():
    try:
        while True:
            a, b = map(int, input().split())
            print(a + b)
    except EOFError:
        pass


if __name__ == "__main__":
    main()
