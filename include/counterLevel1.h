/// 
/// @file   counterLevel1.h
/// @Author a.deshwal@samsung.com
/// @brief  Includes template for Simple counters (Level 1 counters ) 
/// This file contains decalration of templates and its specializations 
/// for level 1 counters. These counters just keep interger counts. 

#ifndef COUNTERLEVEL1_H_ 
#define COUNTERLEVEL1_H_ 

#include<counterAbstract.h>
#include<string>

using namespace std;

template <class CounterType>
class CounterLevel1Template : public CounterAbstract{
  private:
    CounterType counter;
  public:
    CounterLevel1Template(CounterType count):counter(count){}  
    inline void update(CounterType inc) { counter += inc;}
    inline std::string resultAsString() const 
      { return (std::string("Counter = ") + std::to_string(counter)); }
    inline CounterType getCounter() const 
      { return counter; }
};

typedef CounterLevel1Template<int> IntCounterLevel1;

#endif
