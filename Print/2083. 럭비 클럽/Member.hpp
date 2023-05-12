#pragma once
#include <iostream>
#include "IClub.hpp"
namespace Gold {
	class Member : public IClub{
	private:
		std::string name_;
		int age_;
		int weight_;
	public :
		void set_name(std::string) override;
		void set_age(int age) override;
		void set_weight(int wight) override;
		std::string get_name();
		int get_age();
		int get_wight();
	};
}