#include <iostream>
#include "math.h"

//Ctrl + M, M
//Ctrl + M, O;
//Ctrl + M, L;

//菜单-调试-窗口

using namespace std;
int	main()
{
	//int* p = (int*)malloc(4);
	/*int size = sizeof(int) * 10;
	int* p = (int*)malloc(size);
	if (!p)
	{
		exit(OVERFLOW);
	}
	memset(p, 0, size);
	cout << *p << endl;*/

	int* p1 = new int{};
	int* p2 = new int();
	int* p3 = new int(5);
	cout << "p1 = " << *p1 << endl;
	cout << "p2 = " << *p2 << endl;
	cout << "p3 = " << *p3 << endl;

	cout << sum(1, 1) << endl;
	cout << sub(1, 1) << endl;
	return	0;
}