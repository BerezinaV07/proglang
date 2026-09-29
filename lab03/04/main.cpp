#include <iostream>
#include <typeinfo>

int main(){
	bool x = true, y = false;
	auto z = x + y;
	std::cout<<typeid(z).name()<<std::endl;
	auto a = x & y;
	std::cout << typeid(a).name() << std::endl;
	auto b = x && y;
	std::cout << typeid(b).name() << std::endl;
}
