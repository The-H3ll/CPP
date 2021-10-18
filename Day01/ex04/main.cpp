

#include <fstream>
#include <iostream>

using namespace std;

int main(int ac, char **av)
{
	fstream file;
	fstream	replaceFile;
	string		line;
	string		take;
	string 		str = av[3];
	string 		str1 = av[2];
	size_t		pos = 0;
	size_t		move = 0;

	if (ac < 4 || ac > 5)
		cout << "Error\n";
    file.open(av[1], ios::in);
	replaceFile.open("FILENAME.replace", ios::out);
	while (getline(file, line))
	{
		while ((pos = line.find(av[2], pos)) != string::npos)
		{
			take += line.substr(move, pos - move);
			take.append(str);
			move = pos + str1.length() + 1;
			pos += 1;
			take += " ";
		}
		if (move < line.length())
			take += line.substr(move);
		replaceFile << take << endl;
		pos = 0;
		move = 0;
		take.clear();
	}
	file.close();
}

