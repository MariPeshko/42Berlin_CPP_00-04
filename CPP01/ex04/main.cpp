#include <iostream>
#include <fstream>
#include <string>

// Forbidden functions : std::string::replace
// std::ifstream - input filestream

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "<filename> <String> <StringToReplace>";
		std::cerr << std::endl;
		return 1;
	}
	if(!argv[1] || !*argv[1])
		return 1;

	std::ifstream	ifs(argv[1]);
	std::string		filename = argv[1];
	// check exist and permissions
	if (!ifs) {
        std::cerr << "Error: Cannot open file 'example.txt'";
		std::cerr << filename << std::endl;
        return 1;
    }

	std::string line;
    while (std::getline(ifs, line)) {
        std::cout << line << std::endl;
    }

	// std::string		StringOccur(argv[2]);
	// std::string		StringReplace(argv[3]);

	// read from file and write to new file
	//std::getline(ifs, _sting_);
	// while (cin >> word)
	// ok: read operation successful . . .

	ifs.close();

	//-----------------------------------------
	// append name of file and '.replace'
	std::ofstream	ofs1(filename.append(".replace")); // why? .c_str()

	ofs1 << "copy content of <filename> into a new file" << std::endl;
	return 0;
}