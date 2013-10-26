template<class StreamType, class ResultType>
class CmpStreamsAbstract{
    ResultType result;
  public:
    // for each elements in strA and strmB
    // 1. Compare the elements
    // 2. Update the result
    virtual void cmpStream (const StreamType* strmA, const StreamType* strmB, const int numElements) = 0 ; 
    virtual ResultType getResult() const = 0; 
};


//template<class StreamType, class ResultType>
//class CmpStreamsExact : public CmpStreamsAbstract<StreamType,ResultType>{
//  public:
//    // Currently assuming that StreamType is only basic type. Overload relational operators for complex type. 
//    virtual void cmpStream (StreamType* strmA, StreamType* strmB, const int numElements); 
//    virtual ResultType getResult() const; 
//};


