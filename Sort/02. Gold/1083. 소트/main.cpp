#include <iostream>
#include <vector>
#include <algorithm>

bool user_input(int& user_data);
bool user_input(std::vector<int>& user_num_arr, int user_data);
bool user_input_sort(int& cnt);
void show(std::vector<int> user_num_arr, int user_data);

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int user_data = 0;
    if (!(user_input(user_data))) {
        return 0;
    }

    std::vector<int> user_num_arr(user_data);
    if (!(user_input(user_num_arr, user_data))) {
        return 0;
    }

    int cnt = 0;
    if (!(user_input_sort(cnt))) {
        return 0;
    }

    // Sort by the last form in dictionary order
    for (int i = 0; i < user_data - 1 && cnt > 0; i++) {
        int max_data = i; // Index of the largest element that can be exchanged at the current location
        for (int j = i + 1; j < user_data && j - i <= cnt; j++) {
            if (user_num_arr[j] > user_num_arr[max_data]) {
                max_data = j;
            }
        }
        // Exchange for the largest interchangeable element
        if (max_data != i) {
            // Swap elements from i to max_data in reverse order
            for (int j = max_data; j > i; j--) {
                std::swap(user_num_arr[j], user_num_arr[j - 1]);
            }
            cnt -= (max_data - i);
        }
    }

    show(user_num_arr, user_data);
    return 0;
}

bool user_input(int& user_data) {
    std::cin >> user_data;
    if (user_data > 50 || user_data <= 0) {
        return false;
    }
    return true;
}

bool user_input(std::vector<int>& user_num_arr, int user_data) {
    for (int i = 0; i < user_data; i++) {
        std::cin >> user_num_arr[i];
        if (user_num_arr[i] > 1000000 || user_num_arr[i] <= 0) {
            return false;
        }
    }
    return true;
}

bool user_input_sort(int& cnt) {
    std::cin >> cnt;
    if (cnt > 1000000 || cnt < 0) {
        return false;
    }
    return true;
}

void show(std::vector<int> user_num_arr, int user_data) {
    for (int i = 0; i < user_data; i++) {
        std::cout << user_num_arr[i] << ' ';
    }
}
