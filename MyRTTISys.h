#pragma once
template<typename T>
const char* getRType(T t)
{
	return "";
}


#define RTTICLASS(ClassType)  class ClassType;\
template<>\
const char* getRType<ClassType*>(ClassType* b)\
{\
	return #ClassType;\
}\
class ClassType

//template <typename T>
//struct classType
//{
//	static const char* type;
//};
//template <typename T>
//const char* classType<T>::type = ""
//
//#define RTTICLASS(ClassType) class ClassType;\
//template <>\
//struct classType<ClassType*>\
//{\
//	static const char* type;\
//};\
//const char* classType<ClassType*>::type = #ClassType;\
//class ClassType

#define GETTYPE public: \
	virtual const char* getType() {\
	return getRType(this);\
}


template <typename T>
const char* typeOf(T* t)
{
	return t->getType();
}
template<typename T>
const char* typeOf(T t)
{
	return t.getType();
}

#define TYPEOF(x) typeOf(x)

 