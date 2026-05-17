#include <cs50.h>
#include <stdio.h>

/**
 * @brief 程序入口函数，从用户输入获取两个整数并以浮点数形式输出它们的除法结果。
 *
 * 提示用户输入两个整数 x 和 y，将它们存储为 float 类型后执行浮点除法，
 * 并以 %f 格式打印商值。
 *
 * @return 程序正常退出时返回 0。
 * @throws 若用户输入非整数值，get_int 将提示重新输入。
 */
int main(void)
{
    float x = get_int("What's x? ");
    float y = get_int("What's y? ");

    printf("%f\n", x / y);
}