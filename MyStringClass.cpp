#include "MyHeader.h"
using namespace std;

class str_type {
	char string[80];
private:
	str_type(char* str = "") { strcpy_s(string, str); }

	str_type operator+(str_type str);
	str_type operator+(char* str);

	str_type operator=(str_type str);
	str_type operator=(char* str);

	void show_str() { cout << string; }
};

str_type str_type::operator+(str_type str)
{
	str_type temp;

	strcpy(temp.string, string);
	strcat(temp.string, str.string);
	return temp;
}

str_type str_type::operator=(str_type str)
{
	strcpy(string, str.string);
	return *this;
}

str_type str_type::operator+(char* str)
{
	str_type temp;

	strcpy(temp.string, string);
	strcat(temp.string, str);
	return temp;
}

str_type str_type::operator=(char* str)
{
	str_type temp;

	strcpy(string, str);
	strcpy(temp.string, string);
	return temp;
}

int main() 
{
	str_type a("Hello"), b("World"), c;
	c = a + b;

	return 0;

}