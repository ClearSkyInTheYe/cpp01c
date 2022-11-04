#include <iostream>
#include <fstream>
#include <string>

void ft_replace(std::string &s1, std::string &s2, std::ifstream &file, std:: string &filename)
{
	std::ofstream	file2(filename + ".replace");
	size_t v;
	std::string str;
	std::string s;
	std::string t;

	if (!file2.good())
	{
		if (file2.is_open())
			file2.close();

		std::cerr << "Error: cannot write to " << filename + ".replace" << std::endl;
		std::cerr  << "Please, check the file access rights" << std::endl;
		return ;
	}
	while (std::getline(file, str))
	{
		v = 0;
		while (str.find(s1, v) != std::string::npos)
		{
			v = str.find(s1, v);
			s.append(str.substr(0, v));
			s.append(s2);
			t = str.substr(v + s1.length());
			s.append(t);
			str = s;
			s.clear();
			t.clear();
			v = v + s2.length();
		}
		file2 << str;
		if (!file2.eof())
			file2 << std::endl;
	}
	file2.close();
	file.close();
}

int main(int argc, char **argv)
{
	std::string s1, s2, file;
	std::ifstream	File1;

	if (argc != 4)
	{
		std::cerr << "Error: need 3 arguments \n";
		return 1;
	}
	file = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (s1.empty())
	{
		std::cerr  << "Error: s1 empty\n";
		return 1;
	}
	File1.open(file);
	if (!File1.is_open())
	{
		std::cerr  << "Error: cannot open file\n";
		return 1;
	}
	ft_replace(s1, s2, File1, file);
}
