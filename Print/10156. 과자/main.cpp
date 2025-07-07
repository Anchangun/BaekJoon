#include <iostream>
#include <string.h>

#include "include/domain/UserData.hpp"

int main () {
    auto get_valid_input = []( int min_val, int max_val)->int {
        int l_value = 0;
        while (true) {
            std::cin >> l_value;
            if ( l_value >= min_val && l_value < max_val ) {
                return l_value;
            }
        }
    };

    UserData data;
    memset(&data,0,sizeof(UserData));
    data.snack_money_ = get_valid_input(1,1000);
    data.snack_count_ = get_valid_input(0,1000);
    data.cur_money_ = get_valid_input(1,100000);

    int result =  [=](UserData l_ud)->int {
        int temp= (l_ud.snack_money_*l_ud.snack_count_)-l_ud.cur_money_;
        return temp >0 ? temp : 0;
    }(data);
    std::cout << result;
    return 0;
}
