function [Longitude,Latitude,H,ECEF_x,ECEF_y,ECEF_z] = TLE(dt)%L1,L2,L3)
year=2018;
mon=5;
day=5;
hr=1;
min=30;
sec=45;
path(path,'.\eci_ecef')
fname='tle.txt'
% 读TLE文件
fid = fopen(fname, 'rb');
L1 = fscanf(fid,'%24c%*s',1);
L2 = fscanf(fid,'%d%6d%*c%5d%*3c%2d%f%f%5d%*c%*d%5d%*c%*d%d%5d',[1,10]);
L3 = fscanf(fid,'%d%6d%f%f%f%f%f%f%f',[1,8]);
fclose(fid);

epoch = L2(1,5)*24*3600;        % 儒略日（换算到秒，偏离当年1月1日0点）Epoch Date and Julian Date Fraction
Db    = L2(1,6);                % Ballistic Coefficient
inc   = L3(1,3);                % 轨道倾角 Inclination [deg]
Omega  = L3(1,4);               % 升交点赤经 Right Ascension of the Ascending Node [deg]
e     = L3(1,5)/1e7;            % 轨道偏心率 Eccentricity 
w     = L3(1,6);                % 近地点幅角 Argument of periapsis [deg]
M     = L3(1,7);                % 平近点角 Mean anomaly [deg]
n     = L3(1,8);                % 平均运动（每天公转次数）Mean motion [Revs per day]

gm= 398600.4418e9;
a = (gm/(n*2*pi/(24*3600))^2)^(1/3);     % 长半轴 [m]    
Kep=[a,e,inc*pi/180,Omega*pi/180,w*pi/180,M*pi/180];

    %step1:把轨道根参数转化为近焦点坐标
     [Y0] = State (gm, Kep, dt);

    %step2：把近焦点坐标转化为赤道惯性坐标系
    [Y1] = Pf2ECI (Y0, Kep);

    %step3：赤道惯性坐标系转化为地心地固坐标系
    MJD_UTC= Mjday(year, mon, day, hr, min, sec)+dt/(24*60*60);
    [Y2] = ECI2ECEF(MJD_UTC, Y1');
    ECEF_x=Y2(1,1);
    ECEF_y=Y2(2,1);
    ECEF_z=Y2(3,1);
    %step4：地心地固坐标系转化为地理坐标系
    [Longitude,Latitude,N,H]=WGS84_v(Y2);%得到的是角度
