#include <iostream>
#include <typeinfo>

int main(){
	int a=-1, b=1;
	unsigned int c=1;
	auto res1=a*b;
	std::cout<<res1<<std::endl;
	auto res2=a*c;
	std::cout<<res2<<std::endl;

	short sa=-1, sb=1;
	unsigned short sc=1;
	auto res3=sa*sb;
	std::cout<<res3<<std::endl;
	auto res4=sa*sc;
	std::cout<<res4<<std::endl;
	return 0;
}