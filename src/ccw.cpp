#include "ccw.h"
#include <cstring>
#include <sstream>

ccw::ccw()
{
	command = new char[strlen("ccw 90")+1];
	strcpy(command, "ccw 90");
}
ccw::ccw(int _val)
{
	std::stringstream sstream;
	sstream << "ccw " << _val;


	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());


}

double ccw::get_delay()
{ 
	return 2; 
}