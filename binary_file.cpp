#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

const char * filename = "BINARY.txt";

int main(int argc, char const *argv[])
{
	float height[4] = {175.5,153.0,167.25,160.70};
	ofstream outfile;
	outfile.open(filename);

	outfile.write((char *) &height,sizeof(height));
	outfile.close();

	for (int i = 0; i < 4; ++i)
	{
		height[i] = 0;
	}

	ifstream infile;
	infile.open(filename);
	infile.read((char *) &height,sizeof(height));

	for (int i = 0; i < 4; ++i)
	{
		cout << height[i] << "\t";
	}

	infile.close();	
	return 0;
}