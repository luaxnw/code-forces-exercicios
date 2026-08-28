#include <iostream>
#include <string>

int main()
{
	std::string p;
	std::string isTrue = "NO\n";

	std::cin >> p;

	for (int i = 0; i < p.size(); i++)
	{
		if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9')
		{
			isTrue = "YES\n";
			break;
		}
	}

	std::cout << isTrue;

	return 0;
}
