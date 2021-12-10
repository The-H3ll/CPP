

#include <fstream>
#include <iostream>


void	replace(int ac, char **av)
{
	std::fstream file;
	std::fstream	replaceFile;
	std::string		line;
	std::string		take;
	size_t		pos = 0;
	size_t		move = 0;

	if (ac < 4 || ac >=5)
	{
		std::cout << "Error\n";
		return ;
	}
	file.open(av[1], std::ios::in);
	if (errno == EACCES || errno == 2)
	{
		std::cout << strerror(errno) << std::endl;
		return ;
	}
	replaceFile.open("FILENAME.replace", std::ios::out);
	std::string 		str = av[3];
	std::string 		str1 = av[2];
	while (getline(file, line))
	{
		while ((pos = line.find(av[2], pos)) != std::string::npos)
		{
			take += line.substr(move, pos - move);
			take.append(str);
			move = pos + str1.length();
			pos += 1;
		}
		if (move < line.length())
			take += line.substr(move);
		replaceFile << take << std::endl;
		pos = 0;
		move = 0;
		take.clear();
	}
	file.close();

}


int main(int ac, char **av)
{
	replace(ac, av);
	return (0);
}

