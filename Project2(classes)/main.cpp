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

	student s("Riad", 72.5);
	s.add_task(34.6);
	s.add_task(88.4);
	cout << s.name() << '\n';



	return 0;
}