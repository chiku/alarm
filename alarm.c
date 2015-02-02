#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

const int HOUR_TO_MIN = 60;
const int MIN_TO_SEC = 60;
const int HOUR_TO_SEC = 3600;

int main(int argc, char **argv)
{
    int duration_in_sec = (argc > 1) ? atoi(argv[1]) : (MIN_TO_SEC * 7);

    for (int remaining_time_time_in_sec = duration_in_sec; remaining_time_time_in_sec >= 0; remaining_time_time_in_sec -= MIN_TO_SEC) {
        int h = (remaining_time_time_in_sec / HOUR_TO_SEC);
        int m = (remaining_time_time_in_sec - h * HOUR_TO_SEC) / HOUR_TO_MIN;
        int s = (remaining_time_time_in_sec - h * HOUR_TO_SEC - m * MIN_TO_SEC);

        printf("\nTime remaining till alarm %02d:%02d:%02d", h, m, s);
        fflush(stdout);
        sleep(MIN_TO_SEC);
    }

    system("vlc alarm.wav --volume=400  --repeat");
    printf("\nTime up..\n");
    return 0;
}
