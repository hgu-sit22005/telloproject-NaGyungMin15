#include "Right.h"
#include <cstring>
#include <sstream>

Right::Right()
{
	command = new char[strlen("right 50")+1];
	strcpy(command, "right 50");
}
Right::Right(int _val)
{
	std::stringstream sstream;
	sstream << "right " << _val;


	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());


}

double Right::get_delay()
{ 
	return 2; 
}