#include <cs50.h>
#include <stdio.h>

/**
 * @brief 程序入口函数，演示双精度浮点数除法的精度行为。
 *
 * 从用户获取两个整数作为双精度浮点数存储，
 * 计算两数相除的结果并以50位小数精度输出，
 * 用于展示浮点数除法中可能出现的精度问题。
 *
 * @return 程序正常退出时返回0
 * @throws 无显式异常，但 get_int 可能因输入失败而终止程序
 */
int main(void)
{
    double x = get_int("What's x? ");
    double y = get_int("What's y? ");

    double z = x / y;
    printf("%0.50f\n", z);
    printf("%0.50lf\n", z);
}