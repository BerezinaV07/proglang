#include <iostream>
#include <vector>
#include <string>

int main(){
	typedef std::vector<std::string> StringList;
	StringList names;
	names.push_back("Masha");
	names.push_back("Misha");
	std::cout<<"First name: "<<names[0]<<std::endl;

	auto number = 100;
	auto num = 5.5;
	std::cout<<number<<" "<<num<<std::endl;

	decltype (number + num) result = number+num;
	std::cout<<result<<std::endl;

	double val=20.89;
	int int_val= static_cast<int>(val);
	std::cout<<int_val<<std::endl;

	std::cout<<sizeof(int)<<std::endl;
	std::cout<<sizeof(double)<<std::endl;
	std::cout<<sizeof(names)<<std::endl;
	
}