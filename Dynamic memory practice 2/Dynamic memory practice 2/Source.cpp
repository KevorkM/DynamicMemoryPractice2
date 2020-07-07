#include <iostream>
#include <cstring>

using namespace std;

char* ReverseCopy(char* phrase);

int main() {

	cout << "Exercises for Dynamic memory\n" << endl;

	/*
	Read a phrase from the user and output it again
	*/

	const int MAX_BUFFER_LENGTH = 256;

	char buffer[MAX_BUFFER_LENGTH];

	cout << "Please enter a phrase: ";

	cin.get(buffer, MAX_BUFFER_LENGTH - 1);

	cout << "Your input was: \n" << buffer << endl;

	/*
	Using problem 1, make a function that will take in the input phrase
	and returns a reverse copy of the phrase
	*/

	char* optrReversePhrase = ReverseCopy(buffer);

	cout << "The reverse sentence is: \n" << optrReversePhrase << endl;
	delete[]optrReversePhrase;

	return 0;
}

char* ReverseCopy(char* phrase)
{
	int Legth = strlen(phrase);

	char* ReverseString = new char[Legth + 1];//+1 for the null character

	int j = 0;

	for (int i = Legth - 1; i >= 0; i--) {
		ReverseString[j] = phrase[i];

		j++;
	}

	ReverseString[j] = '\0';

	return ReverseString;
}