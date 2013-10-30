/// 
/// @file   counters.h
/// @Author a.deshwal@samsung.com
/// @brief  Includes declararions of different types of counters 
/// This file contains decalration of counters of different types 
/// which are used in different level of stream Comparision

#include<string>

using namespace std;

/// Abstract Counter class
class CounterAbstract{
  public:
    void update();
    virtual std::string resultAsString() const = 0;
};


/// Template for Simple counters (Level 1 counters ) which 
/// just keep the integer counts 
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

