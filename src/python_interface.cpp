#include <boost/python.hpp>

#include "TelloPro.h"
#include "takeoff.h"
#include "land.h"
#include "Up.h"
#include "Down.h"
#include "Left.h"
#include "Right.h"
#include "Forward.h"
#include "Back.h"
#include "cw.h"
#include "ccw.h"

TelloPro* get_instance(boost::python::str _inst, int _val)
{
	std::string instance = boost::python::extract<std::string>(_inst);

	if(instance == "takeoff")
	   return new Takeoff;
	else if(instance == "land")
		return new Land;
	else if(instance == "up")
		return new Up(_val);
	else if(instance == "down")
		return new Down(_val);
	else if(instance == "left")
		return new Left(_val);
	else if(instance == "right")
		return new Right(_val);
	else if(instance == "forward")
		return new Forward(_val);
	else if(instance == "back")
		return new Back(_val);
	else if(instance == "cw")
		return new cw(_val);
	else if(instance == "ccw")
		return new ccw(_val);
	else
		return nullptr;
}

BOOST_PYTHON_MODULE(TelloPro)
{
	def("get_instance", get_instance,
			      boost::python::return_value_policy<boost::python::manage_new_object>());
	
	boost::python::class_<TelloPro>("TelloPro")
		.def("get_command", &TelloPro::get_command)
		.def("get_delay", &TelloPro::get_delay);
}

