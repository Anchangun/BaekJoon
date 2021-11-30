#pragma once
#include<iostream>
#include<string>
#define CROATIA_HARD_C "c="
#define CROATIA_SOFT_C "c-"
#define CROATIA_DZ "dz="
#define CROATIA_D "d-"
#define CROATIA_LJ "lj"
#define CROATIA_NJ "nj"
#define CROATIA_S "s="
#define CROATIA_Z "z="
class cl_solution{
private :
	const std::string cro_hard_c;
	const std::string cro_soft_c;
	const std::string cro_dz;
	const std::string cro_d;
	const std::string cro_lj;
	const std::string cro_nj;
	const std::string cro_s;
	const std::string cro_z;
	std::string fn_check(std::string user_data,std::string find_msg);
public :
	cl_solution();
	int fn_run(std::string user_data);
};

