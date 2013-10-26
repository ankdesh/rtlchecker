#include "compareStreamCount.h"

// This function just returns number of differences in the stream
template<class StreamType>
void CmpStreamsExactCount<StreamType>::cmpStream (const StreamType* strmA, const StreamType* strmB, const int numElem) {
   for (int i = 0 ; i < numElem; i++){
     if (strmA[i] != strmB[i]) 
       result++;
   }
}

// This function just returns number of differences in the stream
template<class StreamType>
inline int CmpStreamsExactCount<StreamType>::getResult () const {
  return result;
}

