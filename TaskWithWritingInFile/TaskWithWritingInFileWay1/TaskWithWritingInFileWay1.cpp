#include <iostream>
#include <fstream> 
#include <Windows.h>
#include <string>
using namespace std;

int main()
{
	ofstream file;
	file.open("D:\\������������\\TestFile.txt");
	file << "Hello, world!";
	file.close();

	ofstream file("D:\\������������\\TestFile.txt", ios::app);
	file << "Hello, new world!" << endl;
	file.close();

	return 0;
}