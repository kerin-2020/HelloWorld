/*
泛型generics和模板templates

模板templates 很强大，编译器可以根据设定的规则code（蓝图），但是要用之有度 可用的：logging日志系统，材料系统

泛型generics受系统类型限制
*/

#include <iostream>
#include <string>

#define WAIT std::cin.get();
#define LOG(x) std::cout << x << std::endl

//template<typename T>
//
////如果没有main函数的调用，下面的print函数即使有错也不会有编译错误，因为不存在
//
//void Print(T value)
//{
//	std::cout << value << std::endl;
//}
//void Print(std::string value)
//{ 
//	std::cout << value << std::endl;
//}

template<typename T, int N>

class Array
{
private:
	T m_Array[N]; //既然编译的时候不存在，就可以任意指定类型了
public:
	int GetSize() const
	{
		return N;
	}
};

int main()
{
	//Print<int>(5);//只有在调用该函数的时候才会调用模板，而且取决于我们如何去/用什么类型去调用
	//Print("Hello");
	//Print(5.5f);
	Array<std::string, 50> array;
	LOG("Hello");
	WAIT
}