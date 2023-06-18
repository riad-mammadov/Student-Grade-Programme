#include "student.h"
#include "stats.h"


using namespace std;

const double exam_weight = 0.7;

const double pass_mark = 40.0;



student::student(const std::string& name, double e) :
	n(name), exam(e) {}

void student::add_task(double m) { tasks.push_back(m); }

double student::mark() const {

	return exam_weight* exam + (1 - exam_weight) * coursework();

}

double student::coursework() const {

	double largest = 0;
	for (double x : tasks)
		if (x > largest)
			largest = x;
	return largest;
			
		
	);
}

bool passed(const student& s) {

	return s.mark() >= pass_mark;

}

