#include <stdio.h>
#include <math.h>

int main() {
	// initializing variables
	int total_num;
	double input;
	double total_sum = 0.0;
	double multiplication = 1.0;

	scanf("%d", &total_num);

	int num = 0;

	while (num < total_num) {
		scanf("%lf", &input);
		if (input <= 0) {
			return 1;
		}
		total_sum += input;
		multiplication *= input;
		num++;
	}

	double arithmetic_mean = total_sum / total_num;

	double geometric_mean = pow(multiplication, 1.0 / total_num);

	printf("%f\n", arithmetic_mean);
	printf("%f\n", geometric_mean);

	return 0;
}
