#include <cs50.h>
#include <stdio.h>

/**
 * 主函数：获取用户输入的非负整数 n，并打印 n 次 "meow"。
 *
 * @return int 程序退出状态码（隐式返回 0）
 */
int main(void)
{
    int n;

    // 循环提示用户输入，直到获得一个非负整数
    do
    {
        n = get_int("What's n? ");
    } while (n < 0); // 先执行循环体，再判断条件

    // 打印 n 次 "meow"
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}