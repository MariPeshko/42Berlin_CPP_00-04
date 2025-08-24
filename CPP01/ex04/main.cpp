#include <iostream>
#include <fstream>
#include <string>
#include <sys/stat.h>

// Forbidden functions : std::string::replace

void	search(std::string& line, 
			std::string const StringOccur,
				std::string const StringReplace) {

	std::string::size_type pos = 0;

	while ((pos = line.find(StringOccur, pos)) != std::string::npos) {
        line.erase(pos, StringOccur.length());
        line.insert(pos, StringReplace);
        pos = pos + StringReplace.length(); 
    }
}

void	readFile(std::ifstream& ifs, std::string filename,
		std::string const StringOccur, std::string const StringReplace) {

	std::string		line;
	std::ofstream	ofs1(filename.append(".replace").c_str());

    while (std::getline(ifs, line)) {
		search(line, StringOccur, StringReplace);
		ofs1 << line << std::endl;
    }
	ofs1.close();
}

/*
1. c_str()
	stat() requires a const char* 
	and .c_str() converts std::string → const char*
2. S_ISDIR
	S_ISDIR(path_stat.st_mode) is a macro that 
	checks whether the mode indicates a directory.
3. if (stat(path.c_str(), &path_stat) != 0)
	stat failed — possibly file doesn't exist or no permission.
*/
bool is_directory(const std::string& path) {

    struct stat	path_stat;
	if (stat(path.c_str(), &path_stat) != 0) {
        return false;
    }
    return S_ISDIR(path_stat.st_mode);
}

int	main(int argc, char **argv)
{

	if (argc != 4)	{
		std::cerr << "<filename> <String> <StringToReplace>";
		std::cerr << std::endl;
		return 1;
	}

	std::string		filename = argv[1];
	if (filename.empty())	{
		std::cerr << "<filename> is an empty string" << std::endl;
		return 1;
	}

	if (is_directory(filename)) {
		std::cerr << filename << " is a directory" << std::endl;
		return 1;
	}

	std::ifstream	ifs(argv[1]);

	// check exist and permissions
	if (!ifs.is_open()) {
        std::cerr << "Error: Cannot open file ";
		std::cerr << filename << std::endl;
        return 1;
    }
	std::string		StringOccur(argv[2]);
	if (StringOccur.empty())	{
		std::cerr << "<StringOccur> is an empty string" << std::endl;
		return 1;
	}
	std::string		StringReplace(argv[3]);

	readFile(ifs, filename, StringOccur, StringReplace);
	return 0;
}

/*

Notes:
About a stat()

if C file functions (stat, open, etc.) are forbidden, 
and you're restricted to pure C++, then in C++17 and 
later, you can use std::filesystem. But since you're in C++98, 
unfortunately:

❌ There is no standard C++98 way to check if a path 
is a file or a directory.

*/