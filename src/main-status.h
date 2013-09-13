#ifndef MAIN_STATUS_H
#define MAIN_STATUS_H
#include <stdint.h>
#include <time.h>

struct Status
{
    struct {
        double clock;
        time_t time;
        uint64_t count;
    } last;
    uint64_t timer;
    unsigned charcount;

    double last_rates[8];
    unsigned last_count;
};


void status_print(struct Status *status, uint64_t count, uint64_t max_count, double x);
void status_finish(struct Status *status);
void status_start(struct Status *status);


#endif
