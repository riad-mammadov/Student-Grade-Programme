#ifndef STUDENT_H
#define STUDENT_H

#include <vector>
#include <string>


class student {

	std::string n;
	double exam;
	std::vector<double> tasks;

public:
	student(const std::string& name, double e);
	

	void add_task(double m);

	const std::string& name() const{ return n; }

	double mark() const;



private:
	double coursework() const;


};





#endif