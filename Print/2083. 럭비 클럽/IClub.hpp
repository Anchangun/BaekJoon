#pragma once
#include <iostream>
namespace Gold {
	 class IClub{
		virtual void set_name(std::string) = 0;
		virtual void set_age(int age) = 0;
		virtual void set_weight(int wight) = 0;
	};
}