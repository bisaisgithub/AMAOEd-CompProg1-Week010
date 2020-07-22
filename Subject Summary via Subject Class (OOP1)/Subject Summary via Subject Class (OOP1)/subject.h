#include<string>
#include<sstream>

using namespace std;

class Subject {
private:
	string sTitle, sCode;
	short sUnits;

public:
	Subject(string sTitle, string sCode, short sUnits) {
		this->sTitle = sTitle;
		this->sCode = sCode;
		this->sUnits = sUnits;
	}

	string getSummary() {
		ostringstream s;
		s << "[" << sCode << "] " << sTitle;
		s << " (" << sUnits << ")" << " sUnits";
		return s.str();

	}
	
};
