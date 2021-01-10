//
// Created by seymo on 1/5/2021.
//
#include "../la/launch/LauncherData/LauncherComponents/executeCommand.h"

#include <iostream>

using namespace std;

[[noreturn]] void deploy() {
    printf("ExclaMation 1.2 (c) Kai-Builder\n  Copyright 2021.\n");
    printf("To get started Type help()\n");
    while (true) {
        string ExecutedFirst;
        cout
                << ">>";
        cin
                >> ExecutedFirst;
        if (ExecutedFirst == "help()") {
            line_::Help("Exclamation");
            system("pause");
        }
        else if (ExecutedFirst == "compile") {
            string file;
            cin >> file;
            system(("excla " + file).c_str());
        }
        else if (ExecutedFirst == "template") {
            string temp;
            cin >> temp;
            cout << temp << endl;
        }
    }
}

int main() {
    deploy();
}