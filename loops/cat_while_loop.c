#include <stdio.h>

/**
 * @brief 主函数，用于打印三次 "meow" 字符串。
 *
 * @param void 无参数。
 * @return int 程序退出状态码（隐式返回0）。
 */
int main(void)
{
    int i = 0;

    /* 循环三次，每次输出 "meow" */
    while (i < 3)
    {
        printf("meow\n");
        i++;
    }
}