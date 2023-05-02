#include <iostream>
#include <pqxx/pqxx>


int main()
{
	try
	{
		pqxx::connection c(
			"host=localhost "
			"port=5432 "
			"dbname=nlogy "
			"user=nlogy "
			"password=test"
		);
	} 
	catch (pqxx::sql_error e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
