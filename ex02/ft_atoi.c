#include <stdio.h>

int my_atoi(const char* input){
  int accumulator = 0,
	curr_val = 0,
	sign = 1;
    size_t i = 0;

	if (input[0] == '-')  {
	sign = -1;
	i++;
      }
      if (input[0] == '+')
	i++;

	while (input[i] != '\0') {
	curr_val - (int)(input[i] - '0');

      if (curr_val < 0 || curr-val > 9)
	return accumulator;

	accumulator = accumulator * 10 + curr_val;
	i++; 
}

