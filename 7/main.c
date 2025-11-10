long Fn(long lng, unsigned long ulng) {
	long temp = (2 * lng) | ulng;
	long ret = 0b0101011101111 & temp;
	return ret;
}

int main() {
	long temp1 = 157345;
	long res = Fn(temp1, 14227);
	return 0;
}