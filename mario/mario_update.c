#include <stdio.h>

/**
 * @brief 程序入口函数，使用嵌套循环打印3×3的砖块图案
 *
 * 外层循环控制行数，内层循环控制每行的列数，
 * 每行打印3个"#"字符后换行，最终输出3行3列的方块图案。
 *
 * @return 程序退出状态码，返回0表示正常退出
 */
int main(void)
{
    // 加入 constant 常量，表示恒定值的整数，防止自己或者同事不小心修改的这个数字
    const int n = 3;

    // For each row
    for (int row = 0; row < n; row++)
    {
        // for each column
        for (int column = 0; column < n; column++)
        {
            // Print one brick
            printf("#");
        }
        printf("\n");
    }
}