
function [E]  = EccAnom (M, e)

maxit = 15;
i = 1;

% ��ʼֵ
M = mod(M, 2.0*pi);

if (e<0.8)
    E = M; 
else
    E = pi;
end
%%%%%%%% ������
%������
while(i<=maxit)
f(i)=E(i)-M-e*sin(E(i));
E(i+1)=E(i)-f(i)/(1-e*cos(E(i)));
i=i+1;    
    if(abs(E(i)-E(i-1))<0.00001 )
         break;
    end
end
E=E(i);

