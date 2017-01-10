#include <stdio.h>
#include "first.h"

int cancer(int n, int res) { 
	if (1 >= n) {
		return res;
	} else {
		res *= n; 
		return cancer(n - 1, res);
	}
}
