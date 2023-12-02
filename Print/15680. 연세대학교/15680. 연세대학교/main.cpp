#include <iostream>
#define D_YONSEI "YONSEI"
#define D_SLOGAN "Leading the Way to the Future"
namespace Contants{
	enum class Yonsei{
		NAME = 0,
		SLOGAN
	};
}


int main() {
	int N = 0;
	std::cin >> N;
	switch (static_cast<Contants::Yonsei>(N))
	{
	case Contants::Yonsei::NAME: 
		std::cout << D_YONSEI << '\n';
		break;
	case Contants::Yonsei::SLOGAN:
		std::cout << D_SLOGAN << '\n';
		break;
	default:
		break;
	}
	return 0;
}