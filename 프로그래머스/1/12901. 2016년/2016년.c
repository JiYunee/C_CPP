#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b) {
    
     char* answer = (char*)malloc(4);
    int daysInMonth[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int count = (b - 1) % 7;

    for (int i = 1; i < a; i++) {
        count += daysInMonth[i];
    }

    int dayOfWeek = (5 + count) % 7;

    switch (dayOfWeek) {
        case 0: strcpy(answer, "SUN"); break;
        case 1: strcpy(answer, "MON"); break;
        case 2: strcpy(answer, "TUE"); break;
        case 3: strcpy(answer, "WED"); break;
        case 4: strcpy(answer, "THU"); break;
        case 5: strcpy(answer, "FRI"); break;
        case 6: strcpy(answer, "SAT"); break;
    }

    return answer;
}