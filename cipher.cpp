#include <iostream>
using namespace std;
// This function receives text and shift and
// returns the encrypted text
string encrypt(string text, int s)
{
string result = ""; // traverse text
for (int i = 0; i < text.length(); i++) { // apply transformation to each character
// Encrypt Uppercase letters
if (isupper(text[i]))
result += char(int(text[i] + s - 65) % 26 + 65);
else // Encrypt Lowercase letters
result += char(int(text[i] + s - 97) % 26 + 97);
}
return result;// Return the resulting string
}// Driver program to test the above function
int main()
{
string text;
int s;
cout << "Text : "; cin>> text;
cout << "\nShift: "; cin>> s;
cout << "\nCipher: " << encrypt(text, s);
return 0;
}