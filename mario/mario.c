#include <stdio.h>

/**
 * @brief 程序入口函数，打印猫咪ASCII艺术图案及超级马里奥风格的砖块元素
 *
 * 依次输出猫咪ASCII图形、由问号组成的砖块行以及由井号组成的竖排砖块，
 * 模拟超级马里奥游戏中的视觉元素。
 *
 * @return 程序正常执行返回0
 */
int main(void)
{
    printf("   _~_    \n");
    printf("  (o o)   \n");
    printf(" /  V  \\  \n");
    printf("/(  _  )\\ \n");
    printf("  ^^ ^^   \n");

    for (int i = 0; i < 4; i++)
    {
        printf("?");
    }
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("#\n");
    }
}