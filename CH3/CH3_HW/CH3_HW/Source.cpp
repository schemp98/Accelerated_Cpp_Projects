#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::cin;				using std::sort;
using std::cout;			using std::streamsize;
using std::endl;			using std::string;
using std::setprecision;	using std::vector;

int main()
{
	// ask for read the student's name
	cout << "what's the guys name??";
	string name;
	cin >> name;
	cout << "Hello, " << name << "!" << endl;

	// ask for mid and fginal grades
	cout << "Enter the mid and final grades:";
	double midterm, final;
	cin >> midterm >> final;

	//enter hw
	cout << " Enter hw grades (Ctrl+D when done)" << endl;
	vector<double> homework;
	double x;

	while (cin >> x) 
		homework.push_back(x);

	//check size of hw
	typedef vector<double>::size_type vec_sz;
	vec_sz size = homework.size();

	if (size == 0) {
		cout << "you suck...";
		return 1;
	}

	//sort grades
	sort(homework.begin(), homework.end());

	//compute median
	vec_sz mid = size / 2;
	double median;
	median = size % 2 == 0 ? (homework[mid] + homework[mid] - 1) / 2 : homework[mid];

	// compute final grade
	streamsize prec = cout.precision();
	cout << name << "'s final grade is " << setprecision(3)
		<< 0.2 * midterm + 0.4 * final + 0.4 * median
		<< setprecision(prec) << endl;
	return 0;
	



}