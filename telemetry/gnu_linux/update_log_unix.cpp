#include <iostream>
#include <ctime>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <cstring>
#include <cstdlib>

// Gets the current local time as a formatted string
void get_current_time(char* buffer, size_t size) {
    struct timespec ts;
    if (clock_gettime(CLOCK_REALTIME, &ts) == -1) {
        std::perror("clock_gettime");
        std::strncpy(buffer, "UNKNOWN_TIME", size);
        return;
    }

    struct tm timeinfo;
    if (!localtime_r(&ts.tv_sec, &timeinfo)) {
        std::perror("localtime_r");
        std::strncpy(buffer, "UNKNOWN_TIME", size);
        return;
    }

    strftime(buffer, size, "%a %b %d %H:%M:%S %Z %Y", &timeinfo);
}

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

// Writes a timestamp to ~/.log/update.log
void write_update_log() {
    char log_dir[512];
    if (!ensure_log_directory(log_dir, sizeof(log_dir))) {
        return;
    }

    char file_path[600];
    std::snprintf(file_path, sizeof(file_path), "%s/update.log", log_dir);

    int fd = open(file_path, O_WRONLY | O_CREAT | O_APPEND, 0644);
    if (fd == -1) {
        std::cerr << "  **** Error opening file ****\n";
        std::perror("open");
        return;
    }

    char time_buffer[100];
    get_current_time(time_buffer, sizeof(time_buffer));

    char line[128];
    int len = std::snprintf(line, sizeof(line), "%s\n", time_buffer);

    if (write(fd, line, len) == -1) {
        std::perror("write");
    }

    close(fd);

    std::cout << line;
    std::cout << "Written to file: " << file_path << "\n";
}

int main() {
    write_update_log();
    return 0;
}
