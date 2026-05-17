#include <cs50.h>
#include <stdio.h>

/**
 * @brief 主函数：获取用户输入的非负整数n，并打印n次"meow"
 *
 * @param void 无参数
 * @return int 程序退出状态码
 */
int main(void)
{
    // 定义全局变量 n
    int n;

    /* 循环获取用户输入，直到获得非负整数为止 */
    while (true)
    {
        // 给局部变量 n 赋值
        n = get_int("What's n? ");

        if (n < 0)
        {
            continue; // 跳出当前循环，继续下一次循环
        }
        else
        {
            break; // 跳出当前循环，结束整个循环
        }
    }

    /* 打印n次"meow" */
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}