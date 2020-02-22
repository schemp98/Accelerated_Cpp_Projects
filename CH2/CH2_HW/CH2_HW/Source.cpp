#include<iostream>
#include <string>

//say what standard library names we use
using std::cin;		using std::endl;
using std::cout;	using std::string;

int main()
{

	// Some temp code for problem 6
	int i = 10;
	while (i >= -5) {
		
		cout << i << endl;
		i -= 1;
	}

	//
	//ask for person's name
	cout << "Please enter your name you filthy animal: ";

	//read the name
	string name;
	cin >> name;

	// build the message that we intend to write
	const string greeting = "Hello, " + name + "!";

	// the number of clnaks surround the greeting
	cout << "Gimme a pad value: ";

	//read the name
	int pad;
	cin >> pad;



	

	// the number of rows and columns to write
	const int rows = pad * 2 + 3;
	const string::size_type cols = greeting.size() + pad * 2 + 2;

	// write a blank line to separate junk
	cout << endl;

	// write rows rows of output
	// invariant: we have written x rows so far
	for (int r = 0; r != rows; ++r) {

		string::size_type c = 0;

		//invariant: we have written c characters so far int eh current row
		while (c != cols) {

			// is it time to write the greeting
			if (r == pad + 1 && c == pad + 1) {
				cout << greeting;
				c += greeting.size();
			}
			else {
				// are we on the border?
				if (r == 0 || r == rows - 1 ||
					c == 0 || c == cols - 1)
					cout << "*";
				else
					cout << " ";
				++c;
			}
		}
		cout << endl;
	}

	return 0;
}