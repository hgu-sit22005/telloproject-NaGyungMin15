#include "Down.h"
#include <cstring>
#include <sstream>

Down::Down()
{
	command = new char[strlen("down 50")+1];
	strcpy(command, "down 50");
}
Down::Down(int _val)
{
	std::stringstream sstream;
	sstream << "down " << _val;


	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());


}

double Down::get_delay()
{ 
	return 2; 
}