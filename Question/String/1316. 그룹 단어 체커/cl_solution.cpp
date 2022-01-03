#include "cl_solution.hpp"

bool cl_solution::fn_word_checker(std::string msg){
    std::vector<int> check_msg;
    int lp_split = 0, lp_check=0;
    int alphabet[26];
    memset(alphabet, 0, sizeof(alphabet));

    while (lp_split < msg.length()) {
        check_msg.push_back(msg.at(lp_split));
        lp_split++;
    }
    
    while (lp_check < check_msg.size()-1) {
        if (check_msg[lp_check] != check_msg[lp_check + 1]){
            //int temp = check_msg[lp_check];
            //alphabet[temp-97]++;
            int lp_same_data = lp_check+1;
            while (lp_same_data<check_msg.size()) {
                if (check_msg[lp_check]== check_msg[lp_same_data]) {
                    return false;
                }
                lp_same_data++;
            }
        }
        else {
            int temp = check_msg[lp_check];
            alphabet[temp - 97]++;
        }
        lp_check++;
    }
    //
   /* lp_check = 0;
    while (lp_check< sizeof(alphabet)/sizeof(int)) {
        if (alphabet[lp_check]>1) {
            return false;
        }
        lp_check++;
    }*/
    return true;
}

int cl_solution::fn_run(int num_size){
    int num_lp = 0;
    int group_msg=0;
    while (num_lp < num_size) {
        std::string temp_msg;
        std::cin >> temp_msg;
        if (fn_word_checker(temp_msg))
            group_msg++;
        num_lp++;

    }
    return group_msg;
}
