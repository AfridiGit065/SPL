#include <stdio.h>

// Define a structure for time
struct Time {
    int hour;
    int minute;
    int second;
};

int main() {
    struct Time t;
    printf("Enter time in format (hour minute second): ");
    scanf("%d %d %d", &t.hour, &t.minute, &t.second);

    // Calculate time interval in hour
    float timeInHour = t.hour + t.minute / 60.0 + t.second / 3600.0;
    printf("Time interval in hour: %.2f\n", timeInHour);

    // Calculate time interval in minute
    float timeInMinute = t.hour * 60.0 + t.minute + t.second / 60.0;
    printf("Time interval in minute: %.2f\n", timeInMinute);

    // Calculate time interval in second
    int timeInSecond = t.hour * 3600 + t.minute * 60 + t.second;
    printf("Time interval in second: %d\n", timeInSecond);

    return 0;
}
