//
// Created by seymo on 1/4/2021.
//
#include <iostream>
#include <fstream>
#include <tchar.h>
#include <vector>
#include <windows.h>


/*
 * ExclamationLanguage .exclaport Handler
 * ExclaLang Has a Semi-Export Compiler But this one contains its own CLI.
 */
using namespace std;


int main(int argc, char *argv[]) {
    string Export;
    const char *file = argv[1];
    ifstream exporter(file);
    exporter >> Export;
    string param;
    if (Export == "!export_main") {
        CreateDirectory(_T(".exportback"), nullptr);
        ofstream ifile(".exportback\\Exclass.excla");
        ifile << param << endl;
        ifile.close();
    }
    else if (Export == "!export") {
        exporter >> param;
        if (param.empty()) {
            cout << "Warning, !Export Must Be A Valid String Value." << endl;
        }
        else {
            ofstream exportable(".exportback\\Exclass.excla", fstream::app);
            exportable << "// " << param << " Exported.\n// Excla.exe Reads these Files.\n!export sessionvariable "
                       << param << endl;
            exportable.close();
        }
    }
}