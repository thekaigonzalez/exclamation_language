#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <Windows.h>
#include <tchar.h>


using namespace std;

vector <string> input_variables{ };

vector<int> val_int{ };

vector <string> functionexports{ };

vector <string> sessionparams{ };

vector <string> plates{ };

vector <string> aliases{ };

int main( int argc , char* argv[] )
{
	// Default Compiler Sights
	string function;
	string param;
	string delimiter;
	char wtp[300];
	// Pre-Installed Libraries
	string module;
	string operators;
	string operandss;
	string link;
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
	ifstream ifile;
	ifile . open( argv[ 1 ] );
	if ( ifile )
	{
		while ( ifile
				>> function )
		{
			if ( function == "gstring" )
			{
				ifile
						>> param;
				printf( "Created Gstring with %s as name\n" , param . c_str( ) );
				sessionparams . push_back( param );
			}
			else if ( function == "!print_raw" )
			{
				ifile . getline( wtp , 300 );
				printf( "%s" , wtp );
			}
			else if ( function == "!print_all" )
			{
				for ( auto & sessionparam : sessionparams )
				{
					cout
							<< sessionparam
							<< endl;
				}
			}
			else if ( function == "!print" )
			{
				ifile . getline( wtp , 300 );
				printf( "%s\n" , wtp );
			}
			else if ( function == "!pre_include" )
			{
				ifile
						>> module;
				if ( module == "umbrella" )
				{
					CreateDirectory( _T( "cbatch_packages" ) , nullptr );
					system( "git clone https://github.com/Kai-Builder/umbrella" );
				}
				else if ( module == "rcp" )
				{
					system( R"("Lib\RCP_dev-1.0.6\RCP\RCP1.0.4.exe")" );
				}
				else if ( module == "kobash" )
				{
				
				}
				else
				{
					printf( "Found unknown Module, '%s'" , module . c_str( ) );
				}
			}
			else if ( function == "$allocate" )
			{
				ifile
						>> dummy;
				
			}
			else if ( function == "!new" )
			{
				ifile
						>> param;
				sessionparams . push_back( param );
			}
			else if ( function == "!plate" )
			{
				ifile
						>> tag;
				plates . push_back( tag );
			}
			else if ( function == "call" )
			{
				ifile
						>> placement;
				ifile
						>> dummy; // Position
				if ( placement == "session" )
				{
					cout
							<< sessionparams[ dummy ];
				}
				else if ( placement == "plates" )
				{
					cout
							<< plates[ dummy ];
				}
				else if ( placement == "aliases" )
				{
					cout
							<< aliases[ dummy ];
				}
				else if ( placement == "io.variables" )
				{
					cout
							<< input_variables[ dummy ];
				}
			}
			else if ( function == "remember" )
			{
				ifile
						>> dummy;
				ifile
						>> delimiter;
				ifile
						>> param;
				aliases . push_back( param );
				val_int . push_back( dummy );
			}
			else if ( function == "io" )
			{
				ifile
						>> tag;
				ifile
						>> param;
				ifile
						>> dummy;
				if ( tag == "print" )
				{
					cout
							<< param
							<< endl;
				}
				else if ( tag == "warn" )
				{
					cout
							<< "Try to avoid using"
							<< param
							<< endl;
				}
				else if ( tag == "re_size" )
				{
					val_int . push_back( dummy );
				}
				else if ( tag == "alias?" )
				{
					ioalias = param;
				}
			}
			else if ( function == "//" )
			{
			
			}
			else if ( function == "$stdin.get" )
			{
				ifile
						>> delimiter;
				ifile
						>> tag;
				cin
						>> param;
				input_variables . push_back( tag );
			}
			else if ( function == "for" )
			{
				ifile
						>> param;
				ifile
						>> delimiter;
				ifile
						>> tag;
				ifile
						>> operators;
				if ( param == "word" )
				{
					for ( char i : tag )
					{
						cout
								<< i;
					}
				}
			}
			else if ( function == "rise" )
			{
				ifile
						>> param;
				if ( param == "FunctionExceptionError" )
				{
					cout
							<< "Error, Function Was Not Found, Aborting Process"
							<< endl;
					abort( );
				}
			}
			else if ( function == "!define" )
			{
				ifile
						>> param;
				sessionparams . push_back( param );
				if ( param == "VoidFinder" )
				{
					cout
							<< "Initialized VoidFinder"
							<< endl;
				}
			}
			else if ( function == "!.INCLUDE" )
			{
				ifile
						>> param;
				ifstream lol( param );
				
				lol
						>> initializer;
				if ( initializer == "exclamationExport" )
				{
					cout
							<< "Importing "
							<< param
							<< " To "
							<< argv[ 1 ]
							<< endl;
					lol
							>> export_;
					lol
							>> import_type;
					lol
							>> tag;
					if ( export_ == "!export" )
					{
						if ( import_type == "sessionvariable" )
						{
							sessionparams . push_back( tag );
						}
						else if ( import_type == "exportStorage" )
						{
							functionexports . push_back( tag );
						}
					}
				}
				else
				{
					cout
							<< "Incorrect Initializer."
							<< endl;
				}
				if ( ! lol )
				{
					cout
							<< "File Not Found"
							<< endl;
				}
			}
		}
	}
}