#include"compareStream.h"

template<class StreamType>
int CmpStreamsExact<StreamType>::cmpStream (StreamType* strmA, StreamType* strmB, const int numElem) {
   unsigned int count;
   for (int i = 0 ; i < numElem; i++){
     if (strmA[i] != strmB[i]) 
       count++;
   }
   return count;
};
