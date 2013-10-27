/**
 * @file   compareStreamCount.h
 * @Author a.deshwal@samsung.com
 * @brief  Template to Compare streams for couting differences
 *
 * This file implements template class for comparing two streams and count number of  differneces in the stream. This has been implemented separately using templates to provide a fast solution (no inheritance and deals with basic data types - so no indirection/poiter chasing, just plain counting)
 */

template<class StreamType, class CounterType>
class CmpStreamsExactCount {
  CounterType result;
  public:
    CmpStreamsExactCount(CounterType initVal):result(initVal) {} 
    // Currently assuming that StreamType is only basic type. Overload relational operators for complex type. 
    void cmpStream (const StreamType* strmA,const StreamType* strmB, const int numElem){ 
   for (int i = 0 ; i < numElem; i++){
     if (strmA[i] != strmB[i]) 
       result++;
   }
}
    CounterType getResult() const{
      return result;
    }
};
