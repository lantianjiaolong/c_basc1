#include <cs50.h>
#include <stdio.h>

/**
 * 打印字符串 "meow" 并换行。
 *
 * @param void 无参数
 * @return void 无返回值
 */
void meow(void)
{
    printf("meow\n");
}

int main(void)
{
    // 循环调用 meow 函数三次
    for (int i = 0; i < 3; i++)
    {
        meow();
    }
}