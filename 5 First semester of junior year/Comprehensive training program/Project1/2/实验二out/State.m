function [Y] = State (gm, Kep, dt)

% �����ղ���
a = Kep(1);  Omega = Kep(4);
e = Kep(2);  omega = Kep(5);
i = Kep(3);  M0    = Kep(6);

% ƽ�����
if (dt==0.0)
  M = M0;
else
  n = sqrt(gm/(a*a*a)); %ƽ�����ٶ�
  M = M0 +n*dt; %ƽ�����
end

% ƫ�����
E = EccAnom(M,e);
%%%%%������
% ���������Ǿ���R���ٶ�V
 R=a*(1-e*cos(E));
 V=sqrt(gm*a)/R;

%������seta
seta=atan(sqrt((1+e)/(1-e))*tan(E/2))*2;

%�����ڽ���������ϵ�е�����
xp=R*cos(seta);
yp=R*sin(seta);
zp=0;
vxp=-V*sin(E);
vyp=V*sqrt(1-e*e)*cos(E);
vzp=0;
Y=[xp;yp;zp;vxp;vyp;vzp];
