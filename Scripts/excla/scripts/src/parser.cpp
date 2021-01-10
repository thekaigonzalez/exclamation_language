//
// Dynamic Parser Exclamation
// Copyright (c) Kai-Builder 2020
//

/**************
 * Base Defs  *
 *************/

#include <iostream>

using namespace std;

int a() {
    return 0;
}

int main(int argc, char *argv[]) {
    cout << "Work In Progress." << endl;
    cout << "Exclamation Parser Help 2020" << endl;
    cout << "parse -- Parses a File From @excla.exe" << endl;
    cout << "resolve -- Resolves any Exclamation Errors" << endl;
    cout << "edb.exe OR edb -- Exclamation Debugger" << endl;
    cout << "gen <scripttype> OR gen <string> -- Generates a .excla Script With a .exclaPort to go with it."
         << endl;
    cout << "dip <action> OR dip help -- Uses The Pre-Package Manager Dip.";

    if (argv[1] == "parse") {
        string files;
        cin >> files;
        system(("excla " + files).c_str());
    }
    else if (argv[1] == "dip") {
        string wtd;
        cin >> wtd;
        if (wtd == "mac") {
            printf("k");
        }
    }
}

