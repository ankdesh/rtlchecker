#include "counters.h"
#include<iostream>

using namespace std;

int main()
{ 
  IntCounterLevel1 count(2);

  count.update(2);
  
  std::cout << count.resultAsString();

}
