#include <iostream>
#include <string>
#include <vector>

// HelloWorld.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


/// <summary>
/// 内部记录了c++基础知识点
/// </summary>
/// <returns></returns>

	//main函数是个例外，你不需要从主函数返回任何类型的值，如果你不返回任何值，会返回零 
	/**
	 *  linker的工作就是resolve symbols(联通各个函数)

	 在编译时，编译器把cpp文件转化为中间媒介obj文件，然后linker把所有obj文件连接成exe文件

	 如果每一个cpp文件都相互独立那么每个cpp文件就是一个translation unit ，每个也会产生一个obj
	 */


	 /**
	  static修饰符：所修饰函数仅在本文件中使用

	  * inline 的意思是把函数的内部拿来取代调用

	  函数定义不要写到头文件里，而是在每个翻译单元里进行实现

	  A 65

	  如果cout输入一个char，它会当做一个字符

	  decimal 小数 float 4字节大小，需要在最后增加f

	  0以外的所有数字都是true，只需要1 bit但是我们没有办法只访问bit，但是可以8个bit做成一个字节来访问

	  sizeof(bool)=1
	  sizeof(int)=4
	  sizeof(double)=8

	  指针可以通过在你的类型旁边写一个星号来声明，引用是你的类型旁边加上一个&符号
	  */

	  /*
	  声明函数，其存在，但只是存在在别的地方

	  #pragma once 只include这个文件一次

	  (相比之下ifdef更像是上个世纪的产物)

	  #ifndef _LOG_H
	  #define _LOH_H
	  ...
	  ...
	  #endif

	  <>只用于编译器的include路径，引号适用于所有

	  区分哪些属于c标准库，哪些属于cpp标准库的变法，就是是否有.h扩展名,有拓展名的是C，对象是全局的


	  */

	  /*
	  *****************************debug****************************

	  break(断点) F5进入断点调试 F10跳过执行细节 F11进入执行细节，shift + F11退出执行细节


	  else if 并非关键字，而是else（）{if。。。 else。。。}

	  continue 只能用于循环内部

	  return可以用于任何地方，在return0之后的任何语句都不会执行
	  */

	  /**
	  *****************************指针*****************************

	  指针对管理内存很重要，指针是一个整数 ，存储一个内存地址

	  不需要纠结类型，类型只是我们虚构出来的，好让我们过得更轻松

	  ptr如果是个指针，ptr*则是解引用，获得其中所指向的值（访问）

	  比如：char* buffer = new char[8];意思是分配8个字节，然后我们把这块内存的开始地址存在一个指针里

	  memset （指针的索引地址，所赋值，赋值个数）

	  *****************************指针*****************************

	  *****************************引用*****************************

	  引用就是一个高级指针，是指某个以存在的变量的引用

	  “引用变量”必须引用一个已存在的变量，它本身并不是一个新的变量，并不真正占用内存

	  并不是有&就一定是指针或一定是引用，要看它前后的字符是什么

	  如果是靠近变量类型（int），那么它就是一个引用(别称)

	  *****************************引用*****************************

	  *****************************CLASS*****************************

	  类中声明的成员变量默认是private

	  类和结构体的关系:

	  C++中的变量默认是private，结构体的变量默认public

	  由于C中没有类，结构体用于维持与C之间的兼容性

	  *****************************CLASS*****************************
	  **/

	  /*
	  类中的静态变量实际上是与类的所有实例共享内存，这意味着在你创建那个类或结构体的所有实例中，只会有一个实例

	  extern 关键字用于寻找本翻译单元以外的变量声明

	  类或结构体中的静态变量实际上享有一个内存空间，即使你实例化了两个变量，他们的x变量和y变量仍然是一个
	  且只能通过类::静态成员变量 来赋值，好比他们只属于某一namespace，当你声明和实例化一个类时，并不实质上分配空间

	  静态方法无法访问非静态成员变量

	  变量的生命周期和作用域：（静态函数一直放在使用的存储区，直到退出程序）


	  */

	  /*
	  在java中默认的类构造函数可以将变量赋值（通常为0）

	  但是在cpp中，如果没有构造函数，有默认的构造函数，但是值将不会初始化，是一个随机值

	  如果想要去掉默认的constructor，类名（）= delete ；

	  De constructor 析构函数: ~


	  */

	  /*
		  继承可以避免重复编码 ：public 继承的类
	  */

	  /*
	  虚函数：如果一个类继承了含有虚函数的类，那么必须包含一个override该虚函数的实现，否则这个类无法实例化对象
	  */

	  /*
	  visibility问题（访问权限）：
	  父类的private变量无法在外部访问，子类中也不可以
	  父类的protected变量无法在外部访问，子类中可以

	  visibility不是CPU可以理解的，只是为了编程人员互相理解代码和拓展使用

	  访问private变量的正确方式应该是调用类中的public方法


	  */

	  /*
	  数组 int ar[5];  这是创建在栈上的            在C#中数组的命名方法是int[] ar = new int[5];

	  int* another = new int[5]是创建在堆上的，这个不会方法结束时被销毁，访问的时候计算机是小端的（反向）？

	  在cpp中分配数组的时候，不能用变量，可以用static或明确

	  数组的访问实际上是通过数组首元素加上偏置


	  std::array<int, 5> another;
	  */

	  /*
	  C语言风格的字符串：
		  const char* name = "the Cherno"; const指的是你没有办法改变这个字符串的名字

		  *新标准已经无法把指针指定给一串常量

		  如果不使用new关键字，就不要用delete关键字

		  查找字符串a是否包含子串b  strA.find(strB) != string:npos

		  对于方法PrintString(std::string str){},实际上我们只是对参数进行了拷贝，所以要用引用

		  在堆上的字符串拷贝实际上非常慢，应该用PrintString(std::string& str){}

		  字符串字面值：

		  对于char* name = u8"the Cherno"，（1字节）实际上是写到了只读区域，此时是没有办法更改的（p33）****************???
		  你只能用char name[];来更改其中的字母

		  const wchar_t 宽字符串

		  const wchar_t* name = L"Cherno"; 2字节

		  const char16_t* name3 = u"Cherno";2字节

		  const char32_t* name3 = U"Cherno";4字节

		  using namespace std::string_literals;
		  std::string name02 = "cherno"s + "Hello";

		  R代表你不需要写换行符

		  string_literals总是存在于只读内存中
	  */

	  /*
	  const & pointer

	  const int* 意味着你没有办法更改指针指向的内容

		  const int MAX = 90;
		  a = (int*)&MAX;

	  int const* 意味着我可以改变指针指向的内容，但是不能更新指针的指向

	  如果在一个类中方法后缀const那么将无法对类的变量进行modify[只读]

			  const int* const GetX() const
			  {
				  return m_X;				该方法不能改变指针指向，不能改变指针内容，后缀表示无法对类的变量进行modify[只读]
			  }

	  int* X,*y;X是指针，y不是

	  为什么使用后置const？***********************************************************************************************************

		  比如有一个新的方法void Print(const Entity* e)这实际上没有使用copy而是直接在这个实例上进行更改[引用]，
		  {
			  e = null;这样会直接对内部的指针（int* m_x）进行操作，但是没有办法更改内容
		  }
		  void Print(const Entity& e)这样不可以指向新的实例，也就是说没有办法modify Entity
		  {
			  e = Entity() 这是非法的
			  但是如果你想通过类中的方法访问类的成员变量，会报错e.Getname()
			  加上const就不会报错了
		  }

		  但是我们仍然想在有const后置的函数中使用更改类变量值，可以将这个变量值设置为mutable

		  比如auto f = [=]() mutable
		  {
			  X++; =表示值传递，&表示引用传递，这样不会报错
		  }
	  */

	  /*
	  构造函数：变量名（所赋值） 按照声明的顺序，这种办法不会重复初始化

	  调用构造函数产生的instance是产生在栈上的，这一点和java不同，如果想要延长instance，需要用new关键字生成至堆

	  Java:
		  Entity entity = new Entity("Cherno");
	  C++:
		  Entity* entity = new Entity("Cherno");
	  */

	  /*
	  new实际上做的是：Entity* entity = new Entity();
					   Entity* entity = (Entity*)msllo(sizeof(Entity));
					   两个唯一不同的是，上面通过Entity的构造函数分配了空间
	  */

	  /*
	  implicit conversion 隐式转换

		  在cpp中，允许类中声明过的构造函数中的参数直接赋值

		  Entity e = 22;

		  但是如果构造函数用explicit修饰就不行了，需要用强制转换
	  */

	  /*
	  方法的覆盖(override)、重载(overload)

	  重载(overload)[cpp]给一个函数新的参数 Vector2 operator+(const Vector2& other) const
	  {
		  return Add(other);
		  }
	  */

	  /*
	  Cpp中“.”和“->”说明：

	  　　1、“.”是成员运算符，用于调取成员变量和成员函数；符号“.”的左边必须是实例对象（具体对象），举例为绿色字体；

	  　　2、“->”是地址运算符，用于引用成员变量和成员函数；符号“->”的左边是实例对象的地址[函数的形参（引用）]或者类名（结构名），举例为黄色字体；

	  　　3、等价形式：d.msg() 和 (*cpt).msg() 等价；c.cid 和 (*spt).cid；

	  　　4、“.”和“->”常用于“类和结构”相关操作；


	  */

		/*
		智能指针 普通指针的wrapper，需要引入<memory> 不能共享
			std::unique_ptr<Entity> entity = std::make_unique<Entity>();

			共享指针
			{①
				{②
				}如果①是weak指针在这里就会被delete，但是1的作用是可以用①来访问②是否存在等，因为计数器并不+1
			}只有执行到这里共享指针才会被delete
		
		*/


/*
//STL中vector:vertices.erase(vertices.begin()+index);

//返回多个值，可以选择用vector <>  

//std::pair<std::string, std::string> pairs;
//
//如果想要分别获得这两个元素 std::get(1)(pairs)或者pairs.first

最易看懂的写法还是声明结构体
return {vs, fs}

访问的时候就用结构体名.结构变量名
*/


/*
在debug模式下保留LOG，在release模式下去除：要设置预处理器

宏中，如果希望换行的也属于，在上一结尾"\"，不要加空格
*/
#ifdef PR_DEBUG
#define LOG(x) std::cout << x << std::endl;
#else LOG(x)
#endif // PR_DEBUG


/*
auto 关键字很好用，但是在一些你人为可以使用隐式转换的时候，auto返回的是不进行隐式转换的，这样可能会造成一些问题

在auto迭代器中 ++it 更好因为 it++ 会先创建一个临时变量记录it 的值用于返回，然后自增 it
*/

/*
复用技巧： using *** = ********;
typedef ********* ***;
*/
#include <functional>

//函数指针：把函数当参数
void HelloWorld(int a) { std::cout << "HelloWorld! Value: "<< a << std::endl; }
auto function = HelloWorld;//auto *function 也就是 void(*function)() = HelloWorld;

void ForEach(const std::vector<int>& values, const std::function<void(int)>& func)//第二个参数void(*func)(int)  ???
{
	for (int value : values)
		func(value);
}

int fpmain()
{
	typedef void(*HelloWorldFunction)(int);

	HelloWorldFunction function = HelloWorld;


	function(8);

	std::vector<int> values = { 1,2,3,5,4 };
	auto it = std::find_if(values.begin(), values.end(), [](int value) { return value > 3; });
	std::cout << *it << std::endl;//5

	int a = 5;//如果我们想要a传入lamda

	ForEach(values, [](int value) {std::cout << value << std::endl; });

	auto lambda = [=](int value) mutable { a = 5; std::cout << a << std::endl; };//在内部修改外部数据mutable

	ForEach(values, lambda);

	std::cin.get();

	return 0;
}

//带上std的用处，区别系统自带的函数和自己做的函数

/*
namespace 的用处：处理重名的 function
*/

	  //
	  //#define LOG(x) std::cout << x << std:: endl;
	  //
	  ////int main1()
	  ////{
	  ////	////std::cout << "Hello World!" << std::endl;//
	  ////	////int a = 5;
	  ////	//////Log("Hello World!");
	  ////	////int* b = &a;
	  ////	////int& ref = a;//ref是一个别称
	  ////	////ref = 2;
	  ////	////LOG(a); 
	  ////
	  ////	///*Player player;
	  ////	//player.move(a)*/
	  ////
	  ////	//Log log;
	  ////	//log.SetLogLevel(log.LogErrorLevel);
	  ////	//log.logError("hello,there is an error!");
	  ////
	  ////	//std::cin.get();
	  ////	return 0;
	  ////}
	  //
	  ////class Player
	  ////{
	  ////public:
	  ////	int x, y;
	  ////	int speed;
	  ////
	  ////	void move(int ax, int ya)
	  ////	{
	  ////		x += ax * speed;
	  ////		y += ya * speed;
	  ////	}
	  ////};
	  //
	  //class Log
	  //{
	  //public:
	  //	enum Level
	  //	{
	  //		levelError,
	  //		levelWarning,
	  //		levelInfo
	  //	};
	  //
	  //private:
	  //	Level m_logLevel = levelInfo;
	  //public:
	  //	void SetLevel(Level level)
	  //	{
	  //		m_logLevel = level;
	  //	}
	  //
	  //	void mError(const char* message)
	  //	{
	  //		if (m_logLevel >= levelError)
	  //			std::cout << "[Error]:" << message << std::endl;
	  //	}
	  //
	  //	void mWarning(const char* message)
	  //	{
	  //		if (m_logLevel >= levelWarning)
	  //			std::cout << "[Warning]:" << message << std::endl;
	  //	}
	  //
	  //	void mInfo(const char* message)
	  //	{
	  //		if (m_logLevel >= levelInfo)
	  //			std::cout << "[Info]:" << message << std::endl;
	  //	}
	  //
	  //};
	  //
	  //class Singleton
	  //{
	  ////private:
	  ////	static Singleton* s_Instance;
	  ////public:
	  ////	static Singleton& Get(){ return *s_Instance; }
	  //
	  //public:
	  //	static Singleton& Get()
	  //	{
	  //		static Singleton instance;
	  //		return instance;//////////////////////////////////////////******
	  //	}
	  //	//比如说你要调用一个静态初始化函数，在程序的某处来创建所有的对象
	  //	//就可以用这种办法使用静态的函数来延长静态变量的生命周期，
	  //	//很多情况下你可以用它来简化代码
	  //	void Hello()
	  //	{
	  //
	  //	}
	  //};




	  //class Entity
	  //{
	  //public:
	  //	virtual std::string GetName()
	  //	{
	  //		return "Entity";
	  //	}
	  //};

	  //class Player : public Entity
	  //{
	  //private:
	  //	std::string m_Name;
	  //public:
	  //	Player(const std::string& name) : m_Name(name){}
	  //
	  //	std::string GetName() { return m_Name; }
	  //};

	  //void PrintTest(Entity* entity)
	  //{
	  //	std::cout << entity->GetName() << std::endl;
	  //}
	  //int main()
	  //{
	  //	char name[6] = {'c','h','e','r','n','o'};
	  //	Entity* e = new Entity();
	  //	PrintTest(e);
	  //	Player* p = new Player("Cherno");
	  //	PrintTest(p);
	  //
	  //	std::string name1 = "name";
	  //	std::cin.get();
	  //
	  //	using namespace std::string_literals;
	  //
	  //	std::string name0 = (std::string)"cherno"+"hello";
	  //
	  //	std::string name02 = "cherno"s + "Hello";


		  //这样会打印两次Entity
		  //如果想要PrintTest(p)调用Player类的构造函数，需要使用虚函数
		  /*
		  虚函数使用动态分布来解决这个问题,但是有两个运行时间损耗和虚函数有关 extra space
		  */
		  //}

		  //void PrintEntity(Entity* e);
		  //void UseEntity(const Entity& e);

		  //#include <iostream>
		  //#include <string>
		  ////void Log(const char* message);
		  //
		  //int mian()
		  //{
		  //
		  //	std::cin.get();
		  //	return 0;
		  //}


		  //在类的构造函数内部调用外部函数

		  //class Entity
		  //{
		  //public:
		  //	int x, y;
		  //
		  //	Entity(int x, int y)
		  //	{
		  //		this->x = x;
		  //		this->y = y;
		  //
		  //		PrintEntity(this);
		  //		UseEntity(*this);
		  //	}
		  //
		  //	int GetX() const
		  //	{
		  //		const Entity& e = *this;//?????
		  //	}
		  //};
		  //void PrintEntity(Entity* e)
		  //{
		  //	std::cout << "" << std::endl;
		  //}
		  //void UseEntity(const Entity& e)
		  //{
		  //	std::cout << "Used" << std::endl;
		  //}



class String
{
private:
	char* m_Buffer;
	unsigned int m_Size;
public:
	String(const char* string)
	{
		m_Size = strlen(string);
		m_Buffer = new char[m_Size+1];//不加1也可以
		memcpy(m_Buffer, string,m_Size + 1);//不加1也可以
	}

	String(const String& other)
		: m_Size(other.m_Size)
	{//深拷贝拥有自己的引用和拷贝过的内容，成员有指针变量就得写深拷贝
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
	}
	~String()
	{
		delete[] m_Buffer;

	}

	friend std::ostream& operator<<(std::ostream& stream, const String& string);
};

std::ostream& operator<<(std::ostream& stream, const String& string)
{
	stream << string.m_Buffer;
	return stream;
}

void PrintString(String& string)//如果不加&，实际上会重新调用构造函数copy然后再delete
								//如果不加const，则可以允许string[2]对字符进行操作

				//注意！记得总是传const参数！
{
	std::cout << string << std::endl;
}

class Entity
{
public:
	void Print() const
	{
		std::cout << "Hello World!" << std::endl;
	}
};

class ScopedPtr
{
private:
	Entity* m_Obj;
public:
	ScopedPtr(Entity* entity)
		: m_Obj(entity)
	{

	}
	~ScopedPtr()
	{
		delete m_Obj;
	}
	//Entity* GetObject() { return m_Obj; }

	Entity* operator->()
	{
		return m_Obj;
	}

	const Entity* operator->() const
	{
		return m_Obj;
	}
};

struct Vector3
{
	float x, y, z;
};

int main()
{
	/*String string = "Cherno";
	std::cout << string << std::endl;
	String second = string;

	std::cout << second << std::endl;*/
	//String str = string;这样会crash，因为两个指针引用同时指向一个类的实例，不可以delete两次，浅拷贝
	//深拷贝拥有自己的引用和拷贝过的内容，成员有指针变量就得写深拷贝
    //std::cout << "Hello World!\n";
	/*Entity e;

	e.Print();

	Entity* ptr = &e;

	ptr->Print();*/

	const ScopedPtr entity = new Entity();
	//entity.GetObject()->Print();//要先变成引用在用指针，太繁琐
	entity->Print();//如果Entity中print函数没有const后缀修饰，则不能调用

	int offset = (int)&((Vector3*)nullptr)->z;
	std::cout << offset << std::endl;
	
	std::cin.get();
}



