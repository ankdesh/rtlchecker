/// 
/// @file   counterLevel1.h
/// @Author a.deshwal@samsung.com
/// @brief  Includes template for Level 2 counters 
/// This file contains decalration of templates and its specializations
/// for level 2 counters. These counters keeps a list of key,value pair
/// key denoates the value seen in a stream and value is its count. 
/// Count can be increased and decreased

#ifndef COUNTERLEVEL_H_
#define COUNTERLEVEL_H_

#include <counterAbstract.h>
#include <unordered_map>
#include <string>

using namespace std;

template <class keyType>
class CounterLevel2Template : public CounterAbstract{
    typedef std::unordered_map<keyType,int> umapType;
  private:
    umapType counter;
  public:
    inline void updateInc(keyType key) { counter[key]++; }
    inline void updateDec(keyType key) { counter[key]--; }

    inline std::string resultAsString() const{
      std::string result;
      for ( auto it = counter.begin(); it != counter.end(); it++){
        if ( it->second != 0 )
          result += ("Counter[" + std::to_string(it->first) +"] = " +
                      std::to_string(it->second) + "\n"); 
      }
      return result; 
    }
    inline umapType getCounter() const 
      { return counter; }
};


typedef CounterLevel2Template<int> IntCounterLevel2;
typedef CounterLevel2Template<long long int> LongLongIntCounterLevel2;

#endif
