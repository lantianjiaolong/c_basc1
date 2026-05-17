#include <cs50.h>
#include <stdio.h>

/**
 * @brief 程序入口函数，演示C语言中整数除法截断小数部分的行为
 *
 * 从用户获取两个整数，执行整数除法并打印结果。
 * 注意：整数除法会截断小数部分，而非四舍五入。
 *
 * @return 程序退出状态码，始终返回0
 */
int main(void)
{
    int x = get_int("What's x? ");
    int y = get_int("What's y? ");

    printf("%i\n", x / y); // integer division截断小数部分
}