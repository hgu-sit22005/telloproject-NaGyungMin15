#include "Up.h"
#include <cstring>
#include <sstream>

Up::Up()
{
	command = new char[strlen("up 50")+1];
	strcpy(command, "up 50");
}
Up::Up(int _val)
{
	std::stringstream sstream;
	sstream << "up " << _val;


	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());


}

double Up::get_delay()
{ 
	return 2; 
}