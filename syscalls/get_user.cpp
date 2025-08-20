#include <cstdlib>
#include <iostream>

int main() {
    const char* username = getenv("USER");
    if (username) {
        std::cout << "Username: " << username << std::endl;
    } else {
        std::cerr << "Failed to get username." << std::endl;
    }

    return 0;
}
