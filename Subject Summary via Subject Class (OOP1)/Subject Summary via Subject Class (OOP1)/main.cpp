#include<cstdlib>
#include<iostream>
#include "subject.h"

int main() {
	Subject comp("Computer Programming 1", "IT0001", 3);

	cout << "Subject Summary: " << comp.getSummary() << endl;

	cout << endl;
	system("pause");
	return EXIT_SUCCESS;


}