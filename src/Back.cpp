#include "Back.h"
#include <cstring>
#include <sstream>

Back::Back()
{
	command = new char[strlen("back 50")+1];
	strcpy(command, "back 50");
}
Back::Back(int _val)
{
	std::stringstream sstream;
	sstream << "back " << _val;


	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());


}

double Back::get_delay()
{ 
	return 2; 
}