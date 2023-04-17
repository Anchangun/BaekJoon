#include "cl_sieve_of_eratosthenes.hpp"

cl_sieve_of_eratosthenes::cl_sieve_of_eratosthenes(int size) : m_size(size)
{

}

bool* cl_sieve_of_eratosthenes::fn_run()
{
	int lp = 2;
	bool* prime_num = new bool[m_size + 1];
	memset(prime_num, true, sizeof(bool) * (m_size + 1));
	prime_num[0] = prime_num[1] = false;
	while (lp * lp <= m_size) {
		if (prime_num[lp]) {
			int lp_prime = lp * lp;
			while (lp_prime <= m_size) {
				prime_num[lp_prime] = false;
				lp_prime += lp;
			}
		}
		lp++;
	}
	return prime_num;
}

int cl_sieve_of_eratosthenes::fn_get_size(){
	return m_size;
}
