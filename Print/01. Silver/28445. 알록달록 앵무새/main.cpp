#include <iostream>
#include <map>
#include <vector>
#include<algorithm>

typedef struct parrot {
    std::string body_;
    std::string tail_;
}PARROT;

std::map<std::string, std::vector<std::string>> make_parrot(PARROT father, PARROT mother) {
    std::map<std::string, std::vector<std::string>> result;

    auto make = [&result](std::string key, std::string value) {
         auto iter = result.find(key);
        if (iter == result.end()) {
            result.insert(std::make_pair(key,std::vector<std::string>{value}));
        }
        else {
            if (std::find(result[key].begin(), result[key].end(), value) == result[key].end()) {
                result[key].push_back(value);
            }
        }
    };
    make(father.body_, father.tail_);
    make(father.tail_, father.body_);

    make(father.body_, father.body_);
    make(father.tail_, father.tail_);

    make(father.body_, mother.body_);
    make(father.body_, mother.tail_);

    make(father.tail_, mother.body_);
    make(father.tail_, mother.tail_);

    make(mother.body_, mother.tail_);
    make(mother.tail_, mother.body_);

    make(mother.body_, father.body_);
    make(mother.body_, father.tail_);

    make(mother.tail_,father.body_);
    make(mother.tail_, father.tail_);

    make(mother.body_, mother.body_);
    make(mother.tail_, mother.tail_);
    return result;
}

void print(std::map<std::string, std::vector<std::string>>& map) {
    for (auto& [key,value] : map) {
        std:sort(value.begin(), value.end());
        for (const auto& v : value) {
            std::cout<< key <<' ';
            std::cout << v << '\n';
        }
    }
}

void solution(PARROT father, PARROT mother) {
   std::map<std::string, std::vector<std::string>> map_child_color = make_parrot(father, mother);
    print(map_child_color);
}

int main() {
    PARROT father;
    PARROT mother;
    auto input = [](PARROT temp)-> PARROT {
        temp.body_="";
        temp.tail_="";
        while (temp.body_.length() < 1|| temp.body_.length() >20
            || temp.tail_.length() < 1|| temp.tail_.length() >20) {
            std::cin>> temp.body_ >> temp.tail_;
        }
        return temp;
    };
    father = input(father);
    mother = input(mother);
    solution(father, mother);
}