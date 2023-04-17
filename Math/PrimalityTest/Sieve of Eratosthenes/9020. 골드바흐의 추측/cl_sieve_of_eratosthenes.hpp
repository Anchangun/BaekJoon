#pragma once
#include <cstring>
class cl_sieve_of_eratosthenes
{
private:
	const int m_size;
public:
	cl_sieve_of_eratosthenes(int size);
	bool* fn_run();
	int fn_get_size();
};
