
#include <iostream>
#include "loops.h"
int main()
{
	//f7(1, 4);
	std::cout << f14(4) <<std:: endl;
}
void f7(int a, int b) {
	for (; a < b; a++) {
		std::cout << a << " ";
	}
}
