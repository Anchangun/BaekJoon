#include <iostream>

int main() {
    std::string user_data;
    
    float main_score = 0;

    std::cin >> user_data;
    if (user_data.length() > 2) {
        std::cout << "0.0";
        return 0;
    }

    switch (user_data[0]){
    case 'A': main_score = (float)4.0; break;
    case 'B': main_score = (float)3.0; break;
    case 'C': main_score = (float)2.0; break;
    case 'D': main_score = (float)1.0; break;
    default:
        break;
    }
    switch (user_data[1]){
    case '+': main_score+= (float)0.3; break;
    case '-': main_score-= (float)0.3; break;
    default:
        break;
    }
    std::cout.precision(1);
    std::cout << std::fixed;
    std::cout << main_score;

    return 0;
}
