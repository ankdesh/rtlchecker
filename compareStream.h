template<class StreamType>
class CmpStreamsAbstract{
  public:
    // Return number of differences
    virtual int cmpStream (StreamType* strmA, StreamType* strmB, const int numElements) = 0;
};

template<class StreamType>
class CmpStreamsExact : public CmpStreamsAbstract<StreamType>{
  public:
    // Currently assuming that StreamType is only basic type. Overload for complex type 
    int cmpStream (StreamType* strmA, StreamType* strmB, const int numElem) ; 
};

