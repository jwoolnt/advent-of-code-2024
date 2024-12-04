#include <string>
#include <iostream>
#include <string.h>
#include <fstream>

std::string part1(std::ifstream &input);
std::string part2(std::ifstream &input);

int main(int count, char *args[])
{
	if (count != 3)
	{
		std::cerr << "invalid input: expected \"<PART_NUM> <INPUT_ID>\"" << std::endl;
		return 1;
	}
	else if (!strcmp(args[1], "1") && !strcmp(args[1], "2"))
	{
		std::cerr << "invalid input: <PART_NUM> must be \"1\" or \"2\"" << std::endl;
		return 1;
	}

	size_t n = 8;
	char file_name[n];
	int result = snprintf(file_name, n, "input%s", args[2]);
	if (result > n)
	{
		std::cerr << "invalid input: <INPUT_ID> must be 2 characters or less";
		return 1;
	}
	else if (result == -1)
	{
		std::cerr << "input error: unable to read <INPUT_ID>";
		return 1;
	}

	std::ifstream file(file_name);
	if (!file.is_open())
	{
		std::cerr << "file error: cannot open \"" << file_name << "\"" << std::endl;
		return 1;
	}
	else
	{
		std::cout << (strcmp(args[1], "1") == 1 ? part1(file) : part2(file)) << std::endl;
		return 0;
	}
}

std::string part1(std::ifstream &input)
{
	return "part1";
}

std::string part2(std::ifstream &input)
{
	return "part2";
}
