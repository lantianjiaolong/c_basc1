#include <cs50.h>
#include <stdio.h>

/**
 * @brief 模拟"双倍递增"游戏：从1美元开始，反复询问是否将当前金额翻倍
 *        并传递给下一个人，直到用户拒绝为止。
 * @return 程序退出状态码（始终返回0）
 * 如果用户一直确定，最终金额会不断翻倍，直到试图存储一个过大的数值时，发生发生整数溢出。
 * integer overflow
 */
int main(void)
{
    int dollars = 1;
    while (true)
    {
        char c = get_char("Here's $%i. Double it and give to next person? ", dollars);
        if (c == 'y')
        {
            dollars *= 2;
        }
        else
        {
            break;
        }
    }
}