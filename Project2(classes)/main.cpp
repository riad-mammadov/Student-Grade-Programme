#include "stats.h"
#include "student.h"
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>


using namespace std;

int main() {

	student s1("Bill", 72.5);
	s1.add_task(34.6);
	s1.add_task(88.4);
	student s2("James", 54.6);
	s2.add_task(43.2);
	s2.add_task(55.3);
	vector<student> students;
	students.push_back(s1);
	students.push_back(s2);
	for (const auto &s : students)
	cout << s.name() << ": " << s.mark() << '\n';



	return 0;
}