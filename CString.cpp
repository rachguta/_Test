#include <iostream>
#include <cctype>
#include <fstream>
char* ñhangeTheCase(char* destination, char* source)
{
	int i = 0;
	while (source[i] != '\0')
	{
		if (isupper(source[i]) != 0 && (source[i] >= 'A' || source[i] <= 'Z'))
		{
			destination[i] = tolower(source[i]);
		}
		else
		{
			destination[i] = source[i];
		}
		i++;
	}
	destination[i] = '\0';
	return destination;
}
int main()
{
	const int legthOfString = 100;
	
	char destination[legthOfString];
	char source[legthOfString];
	std::ifstream fin;
	std::ofstream fout;
	fin.open("text.txt");
	fout.open("result.txt");
	
	
	std::cout << "result.txt:\n";
	while (!fin.eof())
	{
		fin.getline(source, 100);
		std::cout << ñhangeTheCase(destination, source) << '\n';
		fout << ñhangeTheCase(destination, source) << '\n';

	}
		



	

	
	fin.close();
	fout.close();
	
	



	return 0;
}