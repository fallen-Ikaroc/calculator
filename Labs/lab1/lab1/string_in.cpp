#include "core.h"

std::string in(std::string path) {
	ifstream file;
	string str="";
	file.open(path);
	if (!file.is_open()) {
		cout << "‘айл не открыт! ¬ведите другой путь!"<<endl;
		return "Eror 404!";
	}
	else {
		while (!file.eof()) {
			string s="";
			getline(file, s);
			str += s+'\n';
		}
		return str;
	}
}