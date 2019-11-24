#include "Forward.h"
#include <cstring>
#include <sstream>

Forward::Forward()
{
	command = new char[strlen("forward 50")+1];
	strcpy(command, "forward 50");
}
Forward::Forward(int _val)
{
	std::stringstream sstream;
	sstream << "forward " << _val;


	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());


}

double Forward::get_delay()
{ 
	return 2; 
}