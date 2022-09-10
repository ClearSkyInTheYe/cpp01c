#include <iostream>
#include <fstream>

void ft_replace(std::string &s1, std::string &s2, std::ifstream &file, std:: string &filename)
{
	std::ifstream	file2(filename + ".replace");
	size_t x = 0;
	size_t v = 0;
	std::string strbuf;
	std::string tmp;

//	file2.open(filename + ".replace");
	if (!file2.is_open()) {
		std::cout << "Error: cannot write to " << filename + ".replace" << std::endl;
		std::cout << "Please, check the file access rights" << std::endl;
		return ;
	}
	while (file.eof())
	{
		getline(file, tmp);
		if (!tmp.compare(s1))
		{
			while (tmp.compare(s2))
			{
				file2 << tmp;
			}
		}
		tmp.clear();
	}

}

int main(int argc, char **argv)
{
	std::string s1, s2, file;
	std::ifstream	File1(file);

	if (argc != 4)
	{
		std::cout << "Error: need 3 arguments \n";
		return 1;
	}
	file = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (s1.empty())
	{
		std::cout << "Error: s1 empty\n";
		return 1;
	}
	File1.open(file);
	if (!File1.is_open())
	{
		std::cout << "Error: cannot open file\n";
		return 1;
	}
	ft_replace(s1, s2, File1, file);
}
