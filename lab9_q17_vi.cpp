//implementation of strstr
#include <iostream>
using namespace std;

// returns true if X and Y are same
int compare(const char *X, const char *Y)
{
	while (*X && *Y)
	{
		if (*X != *Y)
			return 0;
		X++;
		Y++;
	}

	return (*Y == '\0');
}

// Function to implement strstr() function
const char* strstri(const char* X, const char* Y)
{
	while (*X != '\0')
	{
		if ((*X == *Y) && compare(X, Y))
			return X;
		X++;
	}
	return NULL;
}

// Implement strstr function in C++
int main()
{
	char X[50];
	cout<<"string X: ";
	cin.getline(X,50);
	char Y[50];
	cout<<"string Y: ";
    cin.getline(Y,50);
	cout<<"using strstr : "<<strstri(X, Y);

	return 0;
}