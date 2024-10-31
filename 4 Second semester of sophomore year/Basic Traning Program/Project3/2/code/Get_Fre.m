%% 本程序功能：得到输入数据转化对应的频谱
%% 输入参数：光子到达时间
%% 输出参数：频谱
%% 编写人：王梦祥
%% 编写日期：2022年6月10日00:24:11      
%%

clear all;
close all;
clc;

x = importdata('90802-02-04-00.mat'); %总是导入原始数据
datatime=x-x(1); %对初始数据进行清洗，取最早到达时间为初始，来做一组数据
L=length(x); %计算变量长度

fs=[29.7912,59.5824,300]; %取样频率赋值
tobs=datatime(L)-datatime(1);   %Tobs为总的时间长

for i=1:3
    T=1/fs(i); %本次频率下对应的周期
    N=tobs/T; %本次频率下取样点数目
    
    %将频率进行分组并傅里叶变换
    f=hist(datatime,N); %f为均分N份，对应N个数据的直方图
    y1=fft(f); %将频率傅里叶变换

    %接下来为画图做准备，取想作图对应对应频率
    d=fs(i)/N; %取单位角频率
    f=d*(1:(N/2)); %取周期一半（由于对称性）就可以了

    y=abs(y1(1:(N/2))); %为求幅值
    
    y(1)
    %y(1)=0; %令初始为0，避免直流分量特别大影响整个频谱的观察

    subplot(1,3,i);
    plot(f,y);
    xlabel('X 射线脉冲星采样频率');
    ylabel(sprintf('取样间隔为%f内观测到的光子数',T));
    title(sprintf('脉冲星信号的傅里叶分解fs=%f',fs(i)));
    
end



