#include<string>

class User
{
	private:
		string name;
	public:
		User(): name {""}{}
		void getName() { return name;}
};