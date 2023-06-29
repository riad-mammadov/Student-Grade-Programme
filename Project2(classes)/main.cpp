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

void print_student(ostream& out, const student& s) {

	streamsize prec = cout.precision();
	out << s.name() << ": " <<
		setprecision(3) << s.mark() << setprecision(prec) << '\n';
			

}



int main() {

	

	return 0;
}
