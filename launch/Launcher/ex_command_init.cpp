//
// Created by seymo on 1/5/2021.
//
#include "../la/launch/LauncherData/LauncherComponents/executeCommand.h"

#include <iostream>

using namespace std;

void deploy( )
{
	printf( "ExclaMation 1.2 (c) Kai-Builder\n  Copyright 2021.\n" );
	printf( "To get started Type help()\n" );
	while ( true )
	{
		string ExecutedFirst;
		cout
				<< ">>";
		cin
				>> ExecutedFirst;
		if ( ExecutedFirst == "help()" )
		{
			line_::Help( "Exclamation" );
			system("pause");
			break;
		}
	}
}

int main() {
	deploy();
}