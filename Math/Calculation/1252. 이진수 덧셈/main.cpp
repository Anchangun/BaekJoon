#include <iostream>
#include <string>

std::string add_binary(std::string a, std::string b) {
    int carry = 0;
    std::string result;
    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;

        if (i >= 0)
            sum += a[i--] - '0';

        if (j >= 0)
            sum += b[j--] - '0';

        result = char((sum & 1) + '0') + result;
        carry = sum >> 1;
    }

    // ����� 0�� ��� 1�� �����ϵ��� ó��
    if (result.empty() || result == "0") {
        result = "0";
    }
    else if (result[0] == '0') {
        if (result.find('1') != std::string::npos) {
            result = result.substr(1);
        }
        else {
            result = "0";
        }
    }

    return result;
}

int main() {
    std::string a, b;
    std::cin >> a >> b;

    std::string result = add_binary(a, b);
    std::cout << result << std::endl;

    return 0;
}