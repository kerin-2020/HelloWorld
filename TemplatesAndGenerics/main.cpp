/*
����generics��ģ��templates

ģ��templates ��ǿ�󣬱��������Ը����趨�Ĺ���code����ͼ��������Ҫ��֮�ж� ���õģ�logging��־ϵͳ������ϵͳ

����generics��ϵͳ��������
*/

#include <iostream>
#include <string>

#define WAIT std::cin.get();
#define LOG(x) std::cout << x << std::endl

//template<typename T>
//
////���û��main�����ĵ��ã������print������ʹ�д�Ҳ�����б��������Ϊ������
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
	T m_Array[N]; //��Ȼ�����ʱ�򲻴��ڣ��Ϳ�������ָ��������
public:
	int GetSize() const
	{
		return N;
	}
};

int main()
{
	//Print<int>(5);//ֻ���ڵ��øú�����ʱ��Ż����ģ�壬����ȡ�����������ȥ/��ʲô����ȥ����
	//Print("Hello");
	//Print(5.5f);
	Array<std::string, 50> array;
	LOG("Hello");
	WAIT
}