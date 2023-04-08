#include <iostream>
using namespace std;
 long long  int B=0,A=0,C=0,D=0;
cin>>A>>B>>C>>D;
while(cin.fail())
{cin.clear();
cin.ignore(10000);
cin>>A>>B>>C>>D;
cout<<"Difference = "<< (A * B) - (C * D);
}
//nada tarek//20216221
