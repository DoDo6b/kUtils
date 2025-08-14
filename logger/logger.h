#ifndef LOGGER_H
#define LOGGER_H


#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>

#include "EscSeq.h"
#include "htmlTags.h"

#define SPECIFICATOR '$'
#define SPEC_CLOSE '/'

#define SPEC_RST '0'
#define SPEC_BLD '#'
#define SPEC_ITA '*'

#define SPEC_BLK 'x'
#define SPEC_RED 'r'
#define SPEC_GRN 'g'
#define SPEC_YLW 'y'
#define SPEC_BLU 'b'
#define SPEC_MGN 'm'
#define SPEC_CYN 'c'
#define SPEC_WHT 'w'
#define SPEC_DFT 'd'


FILE* log_start (const char* fname);

int log_string (const char* format, ...) __attribute__((format(printf, 1, 2)));

void log_close();

const char* get_log();


#define print_stderr(class, description, ...)  fprintf\
    (\
        stderr,\
        "%s:%d: %s: " ESC_BOLD ESC_RED class ":" ESC_DEFAULT " " description ESC_BOLD_CLOSE "\n",\
        __FILE__,\
        __LINE__,\
        __func__,\
        ##__VA_ARGS__\
    )

#define log_err(class, description, ...)  log_string \
    (\
        "%s:%d: %s: $#$r" class ":$d " description "$/#\n",\
        __FILE__,\
        __LINE__,\
        __func__,\
        ##__VA_ARGS__\
    )


#endif