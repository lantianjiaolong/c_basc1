#include <cs50.h>
#include <stdio.h>

/**
 * @brief 程序入口函数，实现一个简单的计算器。
 * 获取用户输入的两个整数并输出它们的和以及第一个数的两倍
 *
 * 通过 CS50 的 get_int 函数提示用户输入两个整数 x 和 y，
 * 计算并打印 x 与 y 的和，以及 x 的两倍值。
 *
 * @return 程序退出状态码，返回 0 表示正常退出
 */
int main(void)
{
    int x = get_int("What's x? ");
    int y = get_int("What's y? ");

    // int z = x + y;

    printf("%i\n", x + y);

    printf("%i\n", x * 2);
}