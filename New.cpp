#include <iostream>
#include <string>
using namespace std;
class MyString
{
private:
	string text;

public:
	MyString(const string string = "")
		:text(string)
	{
	}

	string operator()(int index, int length)
	{
		string print;
		for (int count = 0; count < length; ++count)
			print += text[index + count];
		return print;
	}
};

int main()
{
	MyString string("Follow for your dreams");
	cout << string(16, 6)<<endl; 

	return 0;
}