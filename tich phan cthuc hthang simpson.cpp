double quytachinhthang (double a, double b, int n){
	double h = fabs(b-a)/n;
	double s = f(a)+f(b);
	for (i=1; i<n; i++){
		x = a + i*h;
		s = s + (2*f(x));
	}
	s = s*h/2;
	return (s);
}

double quytacsimpson (double a, double b, int n){
	double h = fabs(b-a)/n;
	double s = f(a)+f(b);
	for (i=1; i<n; i++){
		x = a + i*h;
		s = s + 2*f(x);
		if (i%2!=0) s = s + 2*f(x);
	}
	s = s*h/2;
	return (s);
}
