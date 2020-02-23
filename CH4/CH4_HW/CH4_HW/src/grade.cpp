#include <stdexcept>
#include <vector>
#include "grade.h"
#include "median.h"
#include "Student_info.h"

using std::domain_error;	using std::vector;

double grade(double mid, double  fin, double hw)
{
	return 0.2 * mid + 0.4 * fin + 0.4 * hw;
}

double grade(double mid, double  fin, const vector<double>& hw)
{
	if (hw.size() == 0)
		throw domain_error("this punk didn't do any homework?!?!");

	return grade(mid, fin, median(hw));
}

double grade(const Student_info& s)
{
	return grade(s.midterm, s.final, s.homework);
}