#include "cl_solution.hpp"

std::string cl_solution::fn_run(){
    std::string a,b, result;
    std::vector<int> v_a,v_b;
    int carry_over=0 , lp=0, max=0 , min=0;
    a.empty();
    b.empty();
    result.empty();
    std::cin >> a >>b;
    std::reverse(a.begin(), a.end());
    std::reverse(b.begin(), b.end());
    max = (a.length() > b.length()) ? a.length() : b.length();
    min = (a.length() > b.length()) ? b.length() : a.length();
    while (lp < a.length()) {
        v_a.push_back(a.at(lp)-48);
        lp++;
    }
    lp = 0;
    while (lp < b.length()) {
        v_b.push_back(b.at(lp)-48);
        lp++;
    }
    lp = 0;
    if (v_a.size() > v_b.size()) {
        while (lp < v_a.size()) {
            if (v_b.size() <= lp) {
                int temp = v_a[lp] + carry_over;
                int remainder = temp;
                if (temp >= 10) {
                    temp = temp % 10;
                    carry_over = remainder / 10;
                }
                else
                    carry_over = 0;
                result += std::to_string(temp);
            }
            else {
                int temp = v_a[lp] + v_b[lp]+ carry_over;
                int remainder = temp;
                if (temp >= 10) {
                    temp = temp % 10;
                    carry_over = remainder / 10;
                }
                else 
                    carry_over = 0;
                result += std::to_string(temp);
            }
            lp++;
            if (lp == v_a.size() && carry_over != 0)
                result += std::to_string(carry_over);
        }
        lp = 0;
    }
    else if (v_a.size() < v_b.size()) {
        while (lp < v_b.size()) {
            if (v_a.size() <= lp) {
                int temp = v_b[lp] + carry_over;
                int remainder = temp;
                if (temp >= 10) {
                    temp = temp % 10;
                    carry_over = remainder / 10;
                }
                else
                    carry_over = 0;
                result+= std::to_string(temp);
            }
            else {
                int temp = v_a[lp] + v_b[lp] + carry_over;
                int remainder = temp;
                if (temp >= 10) {
                    temp = temp % 10;
                    carry_over = remainder / 10;
                }
                else
                    carry_over = 0;
                result += std::to_string(temp);
            }
            lp++;
            if (lp == v_b.size() && carry_over != 0)
                result += std::to_string(carry_over);
        }
        lp = 0;
    }
    else {
        while (lp < v_a.size()) {

                int temp = v_a[lp] + v_b[lp] + carry_over;
                int remainder = temp;
                if (temp >= 10) {
                    temp = temp % 10;
                    carry_over= remainder / 10;
                }
                else
                    carry_over = 0;
                result+= std::to_string(temp);
            lp++;

            if (lp == v_a.size()&& carry_over!=0)
                result += std::to_string(carry_over);
        }
        lp = 0;
    
    }
    std::reverse(result.begin(), result.end());
 

    return result;
}
