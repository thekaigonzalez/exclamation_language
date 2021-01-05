//
// Created by seymo on 1/5/2021.
//

#ifndef EXCLAMATION_LANGUAGE_EXECUTECOMMAND_H
#define EXCLAMATION_LANGUAGE_EXECUTECOMMAND_H


#include <vector>

#include <string>

// Execute a Command From launch/Launcher/ex_command_init.cpp.

/*
 * Line_ Is the Line Properties.
 * Line_ Uses CMD, C, And The Vector To Store Information.
 */
namespace line_
{
	std::vector<int> StoredCache{ };
	
	void Help( std::string _name )
	{
		printf_s(
				"welcome to %c!\n\n\n\n\t\tcommands\n\t\t!excla <file>\n\t\tExecutes A .excla File.\n\t\t!fulllist\n\t\tExecutes the list.exe File."
		        );
	}
}
#endif //EXCLAMATION_LANGUAGE_EXECUTECOMMAND_H
