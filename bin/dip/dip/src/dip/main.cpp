#include <iostream>

#include <fstream>
#include <vector>
#include <tchar.h>
#include <string>
#include <limits>
#include "fsv.h"
#include <windows.h>

using namespace std;

int main() {
	cout << "Running Dip 1.4.3" << endl;
	cout << "What would you like to do with dip?" << endl;
	while (true) {
		string module;
		string action;
		string param;
		string SCRIPT;
		int x;
		string package;
		string basic_arg;
		
		/*
		 * Default File Paths
		 */
		string path;
		string session;
		cout << ">";
		cin >> basic_arg;
		if (basic_arg == "dip") {
			cin >> action;
			if (action == "install") {
				cin >> module;
				system(("git clone https://github.com/Kai-Builder/" + module).c_str());
			}
			else if (action == "webpack") {
				cout << "Enter the Repository Name. (e.g > Kai-Builder/reeveforvs)" << endl;
				cin >> module;
				system(("git clone https://github.com/" + module).c_str());
				system("cls");
			}
			else if (action == "help") {
				cout << "Dip is a package managing Framework That Uses Git To install Exclamation Packages." << endl;
				cout << "Dip Packages are mostly modified edits of https://github"
				        ".com/Kai-Builder/exclamation_language." << endl;
				cout << "Most Install Packages are looked for at https://github.com/Kai-Builder First." << endl;
				cout << "IF you have made a package and published it to git, Use dip webpack <hurl>" << endl;
				cout << "If you want to install a Official Package, Use dip install." << endl;
				cout << "(Packages Are Installed To the Current Script Directory And Written to A Folder Called "
				        "cbatch_packages!)" << endl;
				cout << "For a Full List of commands type dip commands" << endl;
			}
			else if (action == "commands") {
				cout << "LOC" << endl;
				cout << "dip install <package> || Installs a Exclamation Package." << endl;
				cout << "dip webpack <hurl> || Installs a Third-Party API/Package." << endl;
				cout << "dip help || Shows the Help Menu." << endl;
				cout << "dip commands || Brings you here." << endl;
				cout << "dip $settings$ || Edits dipconfig.cfg. If dipconfig Is not found it will Create one for you"
				        "." << endl;
				cout << "dip new <type> <name> <extra> || Creates a New DipPackage." << endl;
				cout << "dip doc <int> || Shows Documentation Pages 1-20." << endl;
				cout << "dip path <path> || Uses dipconfig to Write a Default Package installation Path." << endl;
				cout << "dip affil OR dip friends || Shows Companies & Programs That Dip Is affiliated/Friends with."
				     << endl;
			}
			else if (action == "prompt") {
				cin >> param;
				if (param == "quit") {
					abort();
				}
				else if (param == "color") {
					cin >> x;
					system(("color " + to_string(x)).c_str());
				}
				else if (param == "run") {
					getline(cin, SCRIPT);
					ofstream ifile(R"("out\a.excla")", fstream::app);
					ifile << SCRIPT << endl;
					ifile.close();
					CreateDirectory(_T("out"), nullptr);
					system("cd out");
					system("excla a.excla");
				}
			}
			else if (action == "$settings$") {
				cout << "Looking for Settings..." << endl;
				ifstream ifilef("dipconfig.cfg");
				if (ifilef) {
					cout << "Found dipconfig, Reading for Settings." << endl;
					ifilef >> session;
					if (session == "!doctype") { // Walks Until Find That Document is Dip Document
						ifilef >> path;
						if (path == "dip") {
							cout << "Document is DipConfig File." << endl;
						}
					}
					else if (session == "using dip") {
						cout << "Returned DIPCONFIG." << endl;
					}
				}
				else {
					cout << "WRNING:1090 -> Dipconfig Not Found." << endl;
					ofstream dip("dipconfig.cfg", fstream::app);
					dip << "!doctype dip\n\nusing dip\n!dip DEFAULT_PATH dipfiles\\dip_packages\n!dip TRUE true\n!dip"
					       " session yes" <<
					    endl;
					dip.close();
				}
			}
		}
		else {
			Bad();
		}
	}
}
