#include "Left.h"
#include <cstring>
#include <sstream>

Left::Left()
{
	command = new char[strlen("left 50")+1];
	strcpy(command, "left 50");
}
Left::Left(int _val)
{
	std::stringstream sstream;
	sstream << "left " << _val;


	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());


}

double Left::get_delay()
{ 
	return 2; 
}