int main() {
	int Mas[10];
	unsigned int i;
	int* p;
	i = 0;
	p = Mas;
	for (i = 0; i < 9; i++, p++) {
		if (i < 7)
			*p = (8 * i) | 0x3;
		else
			*p = 25 * i / 3;
	}
	return 0;
}