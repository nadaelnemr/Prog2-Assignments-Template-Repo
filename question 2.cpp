#include <iostream>
using namespace std;
float a, b;
cin>>a>>b;
if (a>0&&b>0)cout<<"01";
else if (a<0&&b>0)cout<<"02";
else if (a<0&&b<0)cout<<"03";
else if (a>0&&b<0)cout<<"04";
else if (a--0&&b--0)cout<<"Origem";
else if (a==0&&b)cout<<"Eixo Y";
else if (a&&b==0)cout<<"Eixo x";
return 0;
}
//nada tarek//20216221
