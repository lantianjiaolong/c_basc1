#include <cs50.h>
#include <stdio.h>

/**
 * @brief 主函数，用于获取用户姓名并输出问候语。
 *
 * @return int 程序退出状态码。
 */
int main()
{
    // 获取用户输入的姓名字符串
    string answer = get_string("What's your name? ");

    // 打印包含用户姓名的问候信息
    printf("hello, %s\n", answer);
}