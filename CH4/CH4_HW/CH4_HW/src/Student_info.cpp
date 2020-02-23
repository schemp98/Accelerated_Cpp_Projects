#include "Student_info.h"
using std::istream;		using std::vector;

bool compare(const Student_info& x, const Student_info& y)
{
	return x.name < y.name;
}


// read homework grades from an input stream into a vector<double>
istream& read(istream& is, Student_info& s)
{
	// read and store the name, midterm and final grades
	is >> s.name >> s.midterm >> s.final;

	read_hw(is, s.homework);  //read and store all of the student's homework grades

	return is;
}
// read homework grades from an input stream into a vector<double>
istream& read_hw(istream& in, vector<double>& hw)
{
	if (in) {
		//get rid of previous contents
		hw.clear();

		//read hw grades
		double x;
		while (in >> x)
			hw.push_back(x);

		// clear the stream so that input will work for the next studen
		in.clear();
	}
	return in;
}