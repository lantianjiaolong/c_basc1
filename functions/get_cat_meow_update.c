#include <cs50.h>
#include <stdio.h>

void meow(int times);
int get_n(void);

/**
 * @brief 程序主入口函数，获取用户输入并输出对应次数的猫叫声
 *
 * 提示用户输入一个整数 n，然后调用 meow() 函数输出 n 次猫叫声。
 *
 * @return 程序退出状态码，正常退出返回 0
 */
int main(void)
{

    int n = get_n();

    meow(n);
}

int get_n(void)
{
    int n;
    do
    {
        // Get a number from the user 从用户那里获取一个数字
        n = get_int("What's n? ");
    } while (n < 0);

    return n;
}

/**
 * @brief 打印指定次数的"meow"字符串
 *
 * 循环输出"meow"到标准输出，重复次数由参数指定。
 *
 * @param times 打印"meow"的次数，应为非负整数
 * @return 无（void）
 */
void meow(int times)
{
    // Meow some number of times 猫叫若干次
    for (int i = 0; i < times; i++)
    {
        printf("meow\n");
    }
}
