#include<iostream>
using namespace std;
int main(int argc,char* argv[])
{
	int c;
	int a = 1;
	int b = 2;
	c = a + b;
	cout << argc << "  " << argv[argc - 1] << endl;
	getchar();
	return c;
}