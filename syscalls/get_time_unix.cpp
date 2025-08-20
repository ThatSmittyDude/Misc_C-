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
