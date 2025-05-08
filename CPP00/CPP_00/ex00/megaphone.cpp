#include <iostream>
#include <string>
#include <cctype> // for std::toupper

int	main(int argc, char **argv)
{
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	} else {
		for(int j = 1; j < argc; j++)
		{
			std::string str(argv[j]);
			for (size_t i = 0; str[i] != '\0'; i++)
			{
				str[i] = toupper(str[i]);
			}
			std::cout << str;
            }
		std::cout << std::endl;
		}
		return 0;
}
