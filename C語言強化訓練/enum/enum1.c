#include <stdio.h>

enum Weekday {
    SUNDAY = 7,
    MONDAY = 1,
    TUESDAY = 2,
    WEDNESDAY = 3,
    THURSDAY = 4,
    FRIDAY = 5,
    SATURDAY = 6
};

int main() {
    enum Weekday today;

    today = SUNDAY;

    printf("Sunday is day %d of the week.\n", today);

    return 0;
}
