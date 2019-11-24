#include <boost/python.hpp>

#include "TelloPro.h"
#include "takeoff.h"
#include "land.h"
#include "Up.h"
#include "Down.h"//추가됨.
//#include "Flip.h"

TelloPro* get_instance(boost::python::str _inst, int _val)
{
	std::string instance = boost::python::extract<std::string>(_inst);

	if(instance == "takeoff")
	   return new Takeoff;
	else if(instance == "land")//여기서 부터 수정
		return new Land;
	else if(instance == "up")
		return new Up(_val);
	else if(instance == "down")
		return new Down(_val);
	else if(instance == "left")
		return new Down(_val);
	else if(instance == "right")
		return new Down(_val);
	else if(instance == "forward")
		return new Down(_val);
	else if(instance == "back")
		return new Down(_val);
	else
		return nullptr;//여기까지 수정)보여주심.
}

BOOST_PYTHON_MODULE(TelloPro)
{
	def("get_instance", get_instance,
			      boost::python::return_value_policy<boost::python::manage_new_object>());
	//생겨나는 에러를 ㅓㄴ가 알아서 제거하도록,
	boost::python::class_<TelloPro>("TelloPro")//해당함수에
		.def("get_command", &TelloPro::get_command)//어떤 변수가 있음을 알려줌.
		.def("get_delay", &TelloPro::get_delay);
}//파이선과 c++을 연결해주는 부분.

