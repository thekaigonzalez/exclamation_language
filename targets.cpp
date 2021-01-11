//
// Created by seymo on 1/10/2021.
//

// Insert Basic Definitions

#include <string>
#include <iostream>

#define                                         COMPILER_ID                                         102009208

#define                                         FILE_EXT                                            ".excla"

#define                                         FILE_EXPORTER                                       ".exclaport"

#define                                         CXX_OBJECT                                              1

/*
 * Initialize Some basic Static Definitions
 */

void C_ARG();

void CXX_OBJECT_CATCH();

void NEW_OB();

void EXCLA_ARG();

#define                                          newarg(x, kwf)                                          C_ARG(x, kwf)

#define                                          _catch(x)                                          CXX_OBJECT_CATCH(x)

#define                                          NEW(x)                                              NEW_OB(x)

#define                                          EARG(x)                                             EXCLA_ARG(x)

using namespace std;

string xf;
string kw;

/*
 * OBJECT KEYMAPPING
 * Object Keymaps Begin with .objk
 * Creation of Arguments Through #define
 */

void C_ARG(const std::string &ARG, const string &KWORDS) {
	// Create a Sample Throwaway Figure
	std::cin >> xf;
	if (xf == KWORDS) {
		abort(); // Return
	}
	else {
		cout << "Argument Code Success" << endl;
	}
}