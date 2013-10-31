#include "counterLevel1.h"
#include "counterLevel2.h"
#include<iostream>

using namespace std;

int main()
{ 
  IntCounterLevel1 count(2);
  count.update(2);
  std::cout << count.resultAsString();

  IntCounterLevel2 counter2;
  counter2.updateInc(100);
  counter2.updateInc(100);
  counter2.updateInc(100);
  counter2.updateDec(101);
  counter2.updateInc(101);
  counter2.updateDec(100);

  std::cout <<counter2.resultAsString();
}
