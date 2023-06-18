#include "stats.h"
#include "student.h"
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>


using namespace std;

vector<student> read_students(istream& in) {
	vector<student> v;
	string line;
	while (getline(in, line)) {
		istringstream line_s(line);
		string name;
		double x;
		if (in >> name >> x) {
			v.push_back(student(name,x));
			student& s = v.back();
			while (in >> x)
				s.add_task(x);
		}
	}

	return v;


}

int main() {

	vector<student> students;

	student s1("Bill", 34);
	s1.add_task(45);
	student s2("Jack", 53);
	s2.add_task(67);
	students.push_back(s1);
	students.push_back(s2);

	for (const auto &s : students)
	cout << s.name() << ": " << s.mark() << '\n';

	cout << count_if(students.cbegin(), students.cend(), passed) << " students passed \n";



	return 0;
}