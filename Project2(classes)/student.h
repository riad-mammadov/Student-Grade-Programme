#ifndef STUDENT_H
#define STUDENT_H

#include <vector>
#include <string>


class student {

	std::string n;
	double exam;
	std::vector<double> tasks;

public:
	student(const std::string &name, double e) :
	n(name), exam(e) {}

	const std::string& name() const{ return n; }



private:

};





#endif