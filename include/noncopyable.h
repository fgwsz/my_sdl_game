#ifndef __HF_NONCOPYABLE_H__
#define __HF_NONCOPYABLE_H__
class Noncopyable{
public:
    Noncopyable(){}
    virtual ~Noncopyable(){}
    Noncopyable(Noncopyable const&)=delete;
    Noncopyable(Noncopyable &&)=delete;
    template<typename..._Args>
    Noncopyable(_Args && ...)=delete;
    Noncopyable& operator=(Noncopyable const&)=delete;
    Noncopyable& operator=(Noncopyable &&)=delete;
    template<typename..._Args>
    Noncopyable& operator=(_Args && ...)=delete;
};
#endif // !__HF_NONCOPYABLE_H__
