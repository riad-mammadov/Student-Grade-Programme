#include "student.h"

using namespace std;

student::student(const std::string& name, double e) :
	n(name), exam(e) {}

void student::add_task(double m) { tasks.push_back(m); }