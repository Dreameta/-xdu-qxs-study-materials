clear ;
close all;
[G0,H0]=Get_GM();
j=1;
for dt=1:30:10800
    [Longtitude,Latitude,H,ECEF_x,ECEF_y,ECEF_z] = TLE(dt);
    [F,H,XD,YD,ZD,D,I]=get_out(Latitude,Longtitude,H,G0,H0);
    f(j)=F;
    X(j)=ECEF_x;Y(j)=ECEF_y;Z(j)=ECEF_z;
    Longtitude=Longtitude*pi/180;Latitude=Latitude*pi/180;
    XX(j)=-ZD*cos(Latitude)*cos(Longtitude)-XD*sin(Longtitude)-YD*sin(Latitude)*cos(Longtitude); 
    YY(j)=-ZD*cos(Latitude)*sin(Longtitude)+XD*cos(Longtitude)-YD*sin(Latitude)*sin(Longtitude);
    ZZ(j)=-ZD*sin(Latitude)+YD*cos(Latitude);
    j=j+1;
end

figure(1);
title('磁场总强度随卫星轨道变化曲线');
dt=1:30:10800;
plot(dt/60,f);
xlabel('运行时间/min');
ylabel('地磁总强度/nT');

figure(2);
Drwa_ecef(X,Y,Z,XX,YY,ZZ);





