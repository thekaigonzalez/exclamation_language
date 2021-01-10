#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <Windows.h>
#include <tchar.h>
#include "strings.h"

using namespace std;
/*
 * Define Basic IO Containers
 */
vector<string> input_variables{};

vector<bool> Booleans{};
/*
 * Define Debug Modes
 */
vector<string> Modes{"The Mode, Debug, Debugs the Current file\n", // NOLINT(cert-err58-cpp)
                     "[NewLine_edit] NewLine Edit Forces User To Write NewLine at the End of file\n",
                     "[ScriptEdit] -- Funnier Script Editing.\n"
};


vector<string> Lists{};

vector<int> val_int{};

vector<string> functionexports{};

vector<string> sessionparams{};

vector<string> plates{};

vector<string> aliases{};

vector<string> pre_include_user{};

vector<string> buildIdeas{};

/*
 * After Io Initiate Main With Command Line Arguments
 */
int main(int argc, char *argv[]) {
	ifstream ifile;
	ifile.open(argv[1], fstream::binary);
	if (ifile) {
		while (ifile
				>> function) {
			if (function == "gstring") {
				ifile
						>> param;
				printf("Created Gstring with %s as name\n", param.c_str());
				sessionparams.push_back(param);
			}
			else if (function == "!print_raw") {
				ifile.getline(wtp, 300);
				printf("%s", wtp);
			}
			else if (function == "!print_all") {
				for (
					auto &sessionparam : sessionparams
						) {
					cout
							<< sessionparam
							<< endl;
				}
			}
			else if (function == "!print") {
				ifile.getline(wtp, 300);
				printf("%s\n", wtp);
			}
			else if (function == "!pre_include") {
				ifile
						>> module;
				if (module == "umbrella") {
					CreateDirectory(_T("cbatch_packages"), nullptr);
					ofstream lists("cbatch_packages\\make.txt");
					lists << "[n] Umbrella" << endl;
					lists.close();
					system("git clone https://github.com/Kai-Builder/umbrella");
				}
				else if (module == "rcp") {
					system(R"("Lib\RCP_dev-1.0.6\RCP\RCP1.0.4.exe")");
				}
				else if (module == "exportHandler") {
					cout << "Primary Source: ExportHandler.\nGS: ESHandler\nLint/Debug: Excla_Lint_redux" << endl;
				}
				else {
					printf("Found unknown Module, '%s'", module.c_str());
				}
			}
			else if (function == "$allocate") {
				ifile
						>> dummy;
				
			}
			else if (function == "!new") {
				ifile
						>> param;
				sessionparams.push_back(param);
			}
			else if (function == "!plate") {
				ifile
						>> tag;
				plates.push_back(tag);
			}
			else if (function == "call") {
				ifile
						>> placement;
				ifile
						>> dummy; // Position
				if (placement == "session") {
					cout
							<< sessionparams[dummy];
				}
				else if (placement == "plates") {
					cout
							<< plates[dummy];
				}
				else if (placement == "aliases") {
					cout
							<< aliases[dummy];
				}
				else if (placement == "io.variables") {
					cout
							<< input_variables[dummy];
				}
				else if (placement == "integers") {
					cout
							<< val_int[dummy];
				}
				else if (placement == "modelists@") {
					cout
							<< Modes[dummy];
				}
				else if (placement == "%lists%") {
					cout
							<< Lists[dummy];
				}
			}
			else if (function == "remember") {
				ifile
						>> dummy;
				ifile
						>> delimiter;
				ifile
						>> param;
				aliases.push_back(param);
				val_int.push_back(dummy);
			}
			else if (function == "io") {
				ifile
						>> tag;
				ifile
						>> param;
				ifile
						>> dummy;
				if (tag == "print") {
					cout
							<< param
							<< endl;
				}
				else if (tag == "warn") {
					cout
							<< "Try to avoid using"
							<< param
							<< endl;
				}
				else if (tag == "re_size") {
					val_int.push_back(dummy);
				}
				else if (tag == "alias?") {
					ioalias = param;
				}
			}
			else if (function == "//") {
				ifile.getline(OUTCOMMENT, 9000);
			}
			else if (function == "$stdin.get") {
				ifile
						>> delimiter;
				ifile
						>> tag;
				cin
						>> param;
				input_variables.push_back(tag);
			}
			else if (function == "for") {
				ifile
						>> param;
				ifile
						>> delimiter;
				ifile
						>> tag;
				ifile
						>> operators;
				if (param == "word") {
					for (
						char i : tag
							) {
						cout
								<< i;
					}
				}
			}
			else if (function == "rise") {
				ifile
						>> param;
				if (param == "FunctionExceptionError") {
					cout
							<< "Error, Function Was Not Found, Aborting Process"
							<< endl;
					abort();
				}
			}
			else if (function == "!define") {
				ifile
						>> param;
				sessionparams.push_back(param);
				if (param == "VoidFinder") {
					cout
							<< "Initialized VoidFinder"
							<< endl;
				}
			}
			else if (function == "!.INCLUDE") {
				ifile
						>> param;
				ifstream lol(param);
				lol
						>> initializer;
				if (initializer == "exclamationExport") {
					cout
							<< "Importing "
							<< param
							<< " To "
							<< argv[1]
							<< endl;
					lol
							>> export_;
					lol
							>> import_type;
					lol
							>> tag;
					if (export_ == "!export") {
						if (import_type == "sessionvariable") {
							sessionparams.push_back(tag);
						}
						else if (import_type == "exportStorage") {
							functionexports.push_back(tag);
						}
					}
				}
				else {
					cout
							<< "Incorrect Initializer."
							<< endl;
				}
				if (!lol) {
					cout
							<< "File Not Found"
							<< endl;
				}
			}
			else if (function == "pre_include<int>") { // pre_include<template> (pre) <alias> as <value>
				ifile >> param;
				ifile >> INCLUDEPATH;
				ifile >> delimiter;
				ifile >> dummy;
				sessionparams.push_back(param);
				pre_include_user.push_back(INCLUDEPATH);
				
			}
			else if (function == "!custom_preinclude") {
				ifile >> dummy;
				CreateDirectory(_T("exclaMation_cache"), nullptr);
				cout << "Getting " << pre_include_user[dummy] << " At Position " << dummy << endl;
			}
			else if (function == "++") {
				ifile >> dummy;
				dummy++;
			}
			else if (function == "!GlobalInterpretation") {
				cin.getline(ListORarray, 400);
				Lists.emplace_back(ListORarray);
			}
			else if (function == "using") { // Using (list;array) <name>
				ifile >> param;
				ifile >> tag;
				ifstream ifil;
				ifil.open(tag);
				if (param == "list") {
					ifil.getline(ListORarray, 900);
					cout << "Found " << ListORarray << " In " << tag << "." << endl;
					Lists.push_back(ListORarray);
				}
			}
			else if (function == "*flists") {
				cout << __LINE__ << endl;
				cout << __DATE__ << endl;
				cout << argv[1] << endl;
				cout << __TIME__ << endl;
			}
			else if (function == "demomode") {
				cout << "Demomode is not in The ModeLists. Say !modelist For all available." << endl;
			}
			else if (function == "!modelist") {
				for (
					auto &Mode : Modes
						) {
					cout << Mode << endl;
				}
			}
			else if (function == "!set") {
				ifile >> param;
				ifile >> tag;
				if (param == "build") {
					const string &build = tag;
					buildIdeas.push_back(build);
				}
				else if (param == "_current") {
					string uscript = "currentscript";
					sessionparams.push_back(uscript);
				}
			}
			else if (function == "newline") {
				cout << "\n\n" << endl;
			}
			else if (function == "!port") {
				ifile >> param;
				ifile >> tag;
				cout << "Ported " << tag << " To " << param << " With No Errors.";
			}
			else if (function == "!exportable") {
				ifile >> param;
				sessionparams.push_back(param);
				ofstream mfile(".exports", fstream::app);
				mfile << param << endl;
				mfile.close();
			}
			else if (function == "!ifndef") {
				ifile >> param;
				sessionparams.push_back(param);
				bool def = true;
				Booleans.push_back(def);
			}
			else if (function == "!endif") {
				ifile >> param;
				ifile >> dummy;
				cout << "Ended process " << param << " With exit fcode " << dummy << endl;
			}
			else if (function == "!endl") {
				cout << "Finished Compiling !ifndef statement." << endl;
			}
			else if (function == "!overflow") { // !overflow X <string> <int>
				ifile >> param;
				ifile >> tag;
				ifile >> dummy;
			}
			else if (function == "LIST=(") { // LIST=( MyStrings! )
				getline(cin, param);
				ifile >> tag;
			}
			else if (function == "end" || function == "end)") {
				cout << "end" << endl;
			}
			else if (function == "EXTENSTR") {
				ifile >> param;
				ifile.getline(wtp, 300);
				sessionparams.push_back(param);
				functionexports.emplace_back(wtp);
			}
			else if (function == "return") {
				ifile >> dummy;
				return dummy;
			}
			else if (function == "umbrella") {
				ifile >> param;
				if (param == "init") {
					try {
						system(R"("umbrella\Umbrella.py")");
					}
					catch (int a) {
						cout << "Umbrella Files not found. Initializing Failed." << endl;
					}
				}
			}
			else if (function == "program.sleep") {
				ifile >> dummy;
				Sleep(dummy);
			}
			else if (function == "if") { // if <param> is <value> then (keyword) or if param is value print foo
				ifile >> param;
				ifile >> delimiter;
				ifile >> tag;
				ifile >> delimiter;
				ifile >> initializer;
				if (initializer == "print") {
					cin.getline(wtp, 500);
				}
				else if (initializer == "quit") {
					abort();
				}
			}
			else { // Declaration: <unknown> = <val>
				ifile >> param;
				ifile >> tag;
				if (param == "=") {
					sessionparams.push_back(tag);
				}
			}
		}
	}
	else {
	
	}
}