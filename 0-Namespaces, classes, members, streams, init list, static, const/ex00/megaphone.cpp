#include <iostream>

int main(int argc, char **argv) {

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			for (int k = 0; argv[i][k]; k++)
				argv[i][k] = toupper(argv[i][k]);
			std::cout << argv[i];
		}
		std::cout << std::endl;
	}
	return (0);
}