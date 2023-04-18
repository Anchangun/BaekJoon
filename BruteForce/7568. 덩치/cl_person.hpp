#pragma once
class cl_person{
private :
	int m_tall;
	int m_weight;
	int m_rank;
public :
	int fn_get_tall();
	int fn_get_weight();
	int fn_get_rank();
	void fn_set_tall(int tall);
	void fn_set_weight(int weight);
	void fn_set_rank(int rank);
};

