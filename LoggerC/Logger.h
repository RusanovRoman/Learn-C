#pragma once

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>

void Logger(const char* message);
void ErrorLogger(const char* message, int errorNum);
char* concat(const char* s1, const char* s2);



