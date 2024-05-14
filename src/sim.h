#ifndef __SIMULATOR
#define __SIMULATOR
// system libraries
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

// data types
typedef struct sim_sched_entry {
	bool valid;			// define if the entry is used or not
	uint8_t pipe_stage;		// define the operation to perform
	uint16_t duration;		// define the duration of the operation in clock ticks
} sim_sched_entry_t;

typedef struct sim_sched {
	uint16_t len;			// the max size of the schedule (total number of entries)
	uint16_t valid_cnt;		// counts how many entries are used
	sim_sched_entry_t* schedule;	// the schedule FIFO
} sim_sched_t;

// function prototypes

#endif
