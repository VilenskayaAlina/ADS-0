// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
	if (b == 0) 
		return a;
	else 
		return main(b, a % b);
}
