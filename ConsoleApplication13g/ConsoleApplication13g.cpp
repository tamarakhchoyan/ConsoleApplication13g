#include <iostream>
int main()
{
	unsigned int r;
	int x, y;
	std::cin >> r;
	std::cin >> x >> y;
	if(x>r || y>r)
	{
	std:: cout << "YES";
	}
	else { std::cout << "NO"; }
	return 0;
}