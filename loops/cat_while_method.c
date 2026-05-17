#include <stdio.h>

/**
 * @brief 主函数，用于循环打印 "meow" 字符串。
 *
 * 该函数初始化一个计数器，并通过 while 循环连续三次向标准输出
 * 打印 "meow" 及换行符。
 *
 * @param void 无参数
 * @return int 程序退出状态码（隐式返回0）
 */
int main(void)
{
    int i = 3;

    // 循环三次，每次打印 "meow"
    while (i > 0)
    {
        printf("meow\n");
        i--;
    }
}