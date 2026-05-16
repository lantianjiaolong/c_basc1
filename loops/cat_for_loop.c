#include <stdio.h>

/**
 * @brief 主函数，用于程序入口。
 *
 * 该函数通过循环打印三次 "meow" 字符串到标准输出。
 *
 * @param void 无参数。
 * @return int 返回整型状态码（隐式返回0）。
 */
int main(void)
{
    /* 循环三次，每次输出一行 "meow" */
    for (int i = 0; i < 3; i++)
    {
        printf("meow\n");
    }
}