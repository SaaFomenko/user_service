#include <iostream>
#include <fstream>
#include <pqxx/pqxx>
#include "lib/config/config.h"


int main()
{
	const std::string connect_str = get_connect;

	try
	{
		pqxx::connection c(
		);
	} 
	catch (pqxx::sql_error e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
