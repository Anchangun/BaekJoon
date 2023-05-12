#include "Member.hpp"

void Gold::Member::set_name(std::string name){
	name_ = name;
}

void Gold::Member::set_age(int age){
	age_ = age;
}

void Gold::Member::set_weight(int wight){
	weight_ = wight;
}

std::string Gold::Member::get_name()
{
	return name_;
}

int Gold::Member::get_age()
{
	return age_;
}

int Gold::Member::get_wight()
{
	return weight_;
}
