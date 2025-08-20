#include <iostream>
#include <ctime>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <cstring>
#include <cstdlib>


// Ensures the ~/.log directory exists
bool ensure_log_directory(char* log_dir, size_t size) {
    const char* home = std::getenv("HOME");
    if (!home) {
        std::cerr << "  **** HOME environment variable not set ****\n";
        return false;
    }

    std::snprintf(log_dir, size, "%s/.log", home);

    struct stat st;
    if (stat(log_dir, &st) == -1) {
        if (mkdir(log_dir, 0755) == -1) {
            std::cerr << "  **** Failed to create .log directory ****\n";
            std::perror("mkdir");
            return false;
        }
    }

    return true;
}

