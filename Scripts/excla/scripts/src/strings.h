//
// Created by seymo on 1/10/2021.
//

#ifndef EXCLAMATION_LANGUAGE_STRINGS_H
#define EXCLAMATION_LANGUAGE_STRINGS_H









#include <string>
#include <iostream>

using namespace std;
// Default Compiler Sights
string function;
/**
 * @brief Comment Getlines
 */
char OUTCOMMENT[9000];
string param; // Parameter
string delimiter; // Delims (as, for, when, not, is, in)
// Include PATH For custom_preinclude
string INCLUDEPATH;
// WTP (what to print)
char wtp[300];
// Pre-Installed Libraries
string module;
string operators;
string operandss;
string link;
// Insert Different Var Types
bool AnyBool;
/*
 * Make Lists
 */
char ListORarray[500];
// PlaceHolder
string placement;
// Tags
string tag;
// IO Alias
string ioalias = "io";
// Define Integer Parameter
int dummy;
// Types
string typ;
// Include Handlers
string export_;
string initializer;
string value_f;
string import_type;
#endif //EXCLAMATION_LANGUAGE_STRINGS_H
