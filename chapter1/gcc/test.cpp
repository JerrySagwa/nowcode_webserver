#include <iostream>

using namespace std;

int main() {
	int a = 10;
	/* -D 为程序指定宏 */
#ifdef DEBUG
	std::cout << "DEBUG mode" << std::endl;
#endif
	std::cout << "Help ..." << std::endl;
	return 0;
}
