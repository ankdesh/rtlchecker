#include<iostream>
#include"compareStreamCount.h"

using namespace std;

int main()
{
   int Strm1[100], Strm2[100];
   CmpStreamsExactCount<int> exactCountobj;
   exactCountobj.cmpStream(Strm1,Strm2,100);
   cout << "Differnces = " << exactCountobj.getResult();
}
