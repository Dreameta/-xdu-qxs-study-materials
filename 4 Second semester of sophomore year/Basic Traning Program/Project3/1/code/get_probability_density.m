%%该程序的功能：通过数据，获取脉冲星光子到达概率密度函数。
%%输出入数 一个数据原文件
%%输出参数 原数据图 和 cftool拟合函数
%%编写人：王梦祥
%%编写日期：2022年5月13日19:03:22
%%注意：只要获得概率密度函数，那么这个程序便完成了任务，一般可以不看这个程序。
%%
clc
clear all
close all

data = load("data.txt");

plot(data(:,1), data(:,2), '-')
xlabel("一个周期的时间/s");
ylabel("光子到达概率");

cftool(data(:,1), data(:,2))