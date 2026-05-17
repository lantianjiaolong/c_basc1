#include <cs50.h>
#include <stdio.h>

/**
 * @brief 程序入口函数，演示浮点数除法的精度问题
 *
 * 从用户获取两个整数，将其存储为浮点数后进行除法运算，
 * 并以50位小数精度输出结果，展示浮点数在计算机中的表示精度限制。
 *
 * @return 程序执行状态，始终返回0表示正常退出
 */
int main(void)
{
    float x = get_int("What's x? ");
    float y = get_int("What's y? ");

    printf("%0.50f\n", x / y); // 以50位小数精度输出除法结果，展示浮点数在计算机中的表示精度限制
}