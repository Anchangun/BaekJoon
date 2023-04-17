#include "cl_solution.hpp"

cl_solution::cl_solution() : max_weight(MAX_WEIGHT), min_weight(MIN_WEIGHT)
{
}

int cl_solution::fn_run(int user_data){
    int max_bag = user_data / max_weight;
    while (max_bag>=0){
        if ((user_data - (max_bag * max_weight)) % min_weight == 0){
            return max_bag + ((user_data - (max_bag * max_weight)) / min_weight);
        }
        max_bag--;
    }
    return -1;

}
