#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int numbers[], size_t numbers_len) {
    int answer = 0;
    
    for (int i = 0; i < 10; i++) {
        bool found = false;

        for (size_t j = 0; j < numbers_len; j++) {
            if (numbers[j] == i) {
                found = true;
                break;
            }
        }

        if (!found)
            answer += i;
    }
    
    return answer;
}