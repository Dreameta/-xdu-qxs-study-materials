﻿// 马鞍点.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

# include <stdio.h>

int main()
{
    int m, n;
    int c[100][100]; //分别定义行数、列数及其各部分内容；

    scanf_s("%d%d", &m, &n);

    int i, j; //定义二重数组的循环变量；
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf_s("%d", &c[i][j]);
        }
    }

    int a; //作为中间赋值
    int x, y;
    for (i = 0; i < m; i++)
    {
        for (j = 1; j < n; j++)
        {
            a = c[i][0];
            if (c[i][j] < c[i][0])
            {
                a = c[i][j];
                x = i;
                y = j;
            }
        }
    }

    int b;
    for (j = 0; j < m; j++)
    {
        for (i = 1; i < n; i++)
        {
        b = c[0][j];
        if (c[i][j] > c[0][j])
            b = c[i][j];
        }   
    }

    if (a == b)
        printf("%d %d %d", x, y, b);
    else
        printf("no\n");
    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
