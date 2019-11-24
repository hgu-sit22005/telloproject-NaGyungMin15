#include "cw.h"
#include <cstring>
#include <sstream>

cw::cw()
{
	command = new char[strlen("cw 90")+1];
	strcpy(command, "cw 90");
}
cw::cw(int _val)
{
	std::stringstream sstream;
	sstream << "cw " << _val;


	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());


}

double cw::get_delay()
{ 
	return 2; 
}