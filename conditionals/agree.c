#include <cs50.h>
#include <stdio.h>

/**
 * @brief 主函数，用于获取用户输入并判断是否同意。
 *
 * 该程序提示用户输入以确认是否同意，并根据用户输入的字符（'y' 或 'Y'）
 * 输出相应的结果。
 *
 * @param void 无参数
 * @return int 返回整型状态码（标准 main 函数返回值）
 */
int main(void)
{
    // 获取用户输入的字符
    char c = get_char("Do you agree? ");

    // 根据用户输入判断是否同意，并输出相应结果
    if (c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
    else
    {
        printf("Not agreed.\n");
    }
}