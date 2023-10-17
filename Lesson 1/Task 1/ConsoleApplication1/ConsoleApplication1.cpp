#include <iostream>
#include <fstream>

int main()
{
	int size_1 = 0;
	int size_2 = 0;

	std::ifstream filein("in.txt");
	std::ofstream fileout("out.txt");

	filein >> size_1;
	int* num_1 = new int[size_1];

	for (int i = 0; i < size_1; ++i) {
		filein >> num_1[i];
	}

	filein >> size_2;
	int* num_2 = new int[size_2];

	for (int i = 0; i < size_2; ++i) {
		filein >> num_2[i];
	}
	
	fileout << size_2 << "\n";
	fileout << num_2[size_2 - 1] << " ";
	for (int i = 0; i < size_2 - 1; ++i) {
		fileout << num_2[i] << " ";
	}

	fileout << "\n" << size_1 << "\n";
	
	for (int i = 1; i < size_1 ; ++i) {
		fileout << num_1[i] << " ";
	}
	fileout << num_1[0] << " ";

	delete[] num_1;
	delete[] num_2;
	filein.close();
	fileout.close();
}

