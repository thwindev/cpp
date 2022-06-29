#include <iostream>
#include <string>

//const string& var_name == const char* var_name

class Example {
public:
	Example() {
		std::cout << "Created Entity!" << std::endl;
	}

	Example(int x) {
		std::cout << "Created Entity with" << x << "!" << std::endl;
	}
};

class Entity
{
private:
	std::string m_Name;
	int m_Score;
	Example m_Example;
public:
	//first initialize way
	//Entity() {
	//	m_Name = "Unknown";
	//}

	//Entity(const char* name) {
	//	m_Name = name;
	//}
	
	//second initialize way
	// note : initialize order
	Entity() 
		:m_Example(90)
	{
		//default constructor
		m_Name = std::string("Unknown");
		//default constructor with other class memeber => std::string("value");
		//m_Example = Example(90);
	}
		
	Entity(const char* name)
		:m_Name(name)
	{}

	const std::string& GetName() const { return m_Name; }
};

int main()
{
	Entity e0;
	//std::cout << e0.GetName() << std::endl;

	//Entity e1("Harry");
	//std::cout << e1.GetName() << std::endl;

	std::cin.get();
	return 0;
}