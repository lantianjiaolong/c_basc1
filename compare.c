#include <cs50.h>
#include <stdio.h>

/**
 * 主函数：比较两个整数的大小关系并输出结果。
 *
 * 该程序提示用户输入两个整数 x 和 y，
 * 然后判断并打印 x 与 y 之间的大小关系（小于、大于或等于）。
 *
 * @return int 返回 0 表示程序正常结束（隐式返回）。
 */
int main(void)
{
    // 获取用户输入的两个整数
    int x = get_int("What's x? ");
    int y = get_int("What's y? ");

    // 比较 x 和 y 的大小，并输出相应的关系描述
    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        printf("x is greater than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }
}