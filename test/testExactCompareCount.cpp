#include<iostream>
#include"compareStreamCount.h"

using namespace std;

int main()
{
   int Strm1[100] = {0}, Strm2[100]= {1};
   CmpStreamsExactCount<int,int> exactCountobj(0);
   exactCountobj.cmpStream(Strm1,Strm2,100);
   cout << "Differnces = " << exactCountobj.getResult();
}
