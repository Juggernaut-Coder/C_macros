#pragma once
#include <stdio.h>

#define LOG_LEVEL_ERROR   0
#define LOG_LEVEL_WARN    1
#define LOG_LEVEL_INFO    2
#define LOG_LEVEL_DEBUG   3
#define LOG_LEVEL_TRACE   4

#ifdef LOG_LEVEL

#if LOG_LEVEL >= LOG_LEVEL_ERROR
#define error_log(format, ...) fprintf(stderr, "[ERROR] " format "\n", ##__VA_ARGS__)
#else
#define error_log(format, ...) ((void)0)
#endif

#if LOG_LEVEL >= LOG_LEVEL_WARN
#define warn_log(format, ...) fprintf(stderr, "[WARN] " format "\n", ##__VA_ARGS__)
#else
#define warn_log(format, ...) ((void)0)
#endif

#if LOG_LEVEL >= LOG_LEVEL_INFO
#define info_log(format, ...) fprintf(stderr, "[INFO] " format "\n", ##__VA_ARGS__)
#else
#define info_log(format, ...) ((void)0)
#endif

#if LOG_LEVEL >= LOG_LEVEL_DEBUG
#define debug_log(format, ...) fprintf(stderr, "[DEBUG] " format "\n", ##__VA_ARGS__)
#else
#define debug_log(format, ...) ((void)0)
#endif

#if LOG_LEVEL >= LOG_LEVEL_TRACE
#define trace_log(format, ...) fprintf(stderr, "[TRACE] " format "\n", ##__VA_ARGS__)
#else
#define trace_log(format, ...) ((void)0)
#endif

#endif