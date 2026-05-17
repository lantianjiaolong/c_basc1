#include <cs50.h>
#include <stdio.h>

/*
 * 程序入口函数。
 *
 * 该函数尝试获取一个非负整数 n，最多允许用户输入 4 次。
 * 如果前几次输入为负数，则提示重新输入；若最终仍为负数，则使用该负数值。
 * 随后，循环打印 "meow" n 次。
 *
 * 参数:
 *   void - 无参数
 *
 * 返回值:
 *   int - 程序退出状态码（隐式返回 0）
 */
int main(void)
{
    int n = get_int("What's n? ");

    /*
     * 最多重试三次获取非负整数 n。
     * 每次输入为负数时，提示用户重新输入。
     */
    if (n < 0)
    {
        n = get_int("What's n? ");
        if (n < 0)
        {
            n = get_int("What's n? ");
            if (n < 0)
            {
                n = get_int("What's n? ");
            }
        }
    }

    /*
     * 循环打印 "meow"，共打印 n 次。
     */
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}