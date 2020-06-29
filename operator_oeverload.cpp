#include <iostream>

class MyNum
{
public:
	MyNum(int num = 0) : m_num(num) {};

	// pre
	MyNum& operator++()
	{
		std::cout << "pre-increment " << std::endl;
		m_num += 1;
		return (*this);
	}
	// post
	MyNum operator++(int)
	{
		std::cout << "post-increment " << std::endl;
		MyNum temp(m_num);

		m_num++;

		return temp;
	}

	// pre
	MyNum& operator--()
	{
		std::cout << "pre-decrement " << std::endl;
		m_num -= 1;
		return (*this);
	}
	
	// post
	MyNum operator--(int)
	{
		std::cout << "post-decrement " << std::endl;
		MyNum temp(m_num);
		m_num -= 1;
		return temp;
	}

	friend std::ostream& operator<<(std::ostream& out, const MyNum& n)
	{
		out << n.m_num;
		return out;
	}

private:
	int m_num;
};


int main()
{
	int ref_num = 5;
	std::cout << "Reference operator: " << std::endl;
	std::cout << "pre inc \t\t"  << ++ref_num << std::endl;
	std::cout << "post inc\t\t" << ref_num++ << std::endl;
	std::cout << "pre dec \t\t"  << --ref_num << std::endl;
	std::cout << "post dec\t\t" << ref_num-- << std::endl;

	MyNum	num(5);
	std::cout << "Custom overload: " << std::endl;
	std::cout << "pre inc \t\t"  << ++num << std::endl;
	std::cout << "post inc\t\t" << num++ << std::endl;
	std::cout << "pre dec \t\t"  << --num << std::endl;
	std::cout << "post dec\t\t" << num-- << std::endl;

	return 0;
}
