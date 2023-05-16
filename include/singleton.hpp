#ifndef __HF_SINGLETON_HPP__
#define __HF_SINGLETON_HPP__
#include"noncopyable.h"
template<typename _Type>
class Singleton:public Noncopyable{
protected:
    Singleton(){}
public:
    static _Type& getInstance(){
        static _Type ret{};
        return ret;
    }
};
#endif // !__HF_SINGLETON_HPP__
