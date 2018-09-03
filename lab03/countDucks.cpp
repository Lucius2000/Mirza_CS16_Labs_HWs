// countDucks.cpp 
// P. Conrad for CS16, Winter 2015
// Example program to read from file and count occurences

#include <iostream> // for printf()
#include <cstdlib> // for exit(), perror()
#include <fstream> // for ifstream
#include <string>


using namespace std;

ifstream fin;
string duck = "duck";
string animal;
char symbol;
char check;

int main(int argc, char *argv[])
{
  int count=0, c=0;

	if (argc!=2) {
    // if argc is not 2, print an error message and exit
    cerr << "Usage: "<< argv[0] << " inputFile" << endl;
    exit(1); // defined in cstdlib
  }
	
	string file_name = argv[1];
	
	fin.open(file_name);

	// The commented part below  is for the fisrt part of the lab
	/*
	do{
	fin.get(symbol);
	if (symbol == 'u')
		count ++;
	}while(!fin.eof());
	*/
	
	// The part below is for the second task.
	do{
	fin.get(symbol);
	if (symbol == '\n')
		count ++;
	}while(!fin.eof());

	fin.clear();
	fin.seekg(0);	

	
	while (getline(fin,animal)){
		if (animal==duck){
		c ++;		
		}
	}
	
	
	fin.close();
	cout << "Animal count:    "<< count-1 << endl;
	cout << "Duck count:      "<< c << endl;
	cout << "Non duck count:  "<< count - c-1 <<endl;
  return 0;
}
