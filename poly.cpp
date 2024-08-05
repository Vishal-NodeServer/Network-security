#include <iostream>
#include <string>
using namespace std;
// Function to generate the Vigenère key
string generateKey(string plainText, string key) { // Function to generate the Vigenère key
int x = plainText.size(); 
for (int i = 0; i < x; i++) {// Loop to append the next character of the key in the key string

// key.push_back(key[i]); // Append the next character of the key in the key string
}
return key;
}
// Function to encrypt the plain text using Vigenère Cipher
string encryptVigenereCipher(string plainText, string key) {
string cipherText = "";
for (int i = 0; i < plainText.size(); i++) {
char x = (plainText[i] + key[i]) % 26;
x += 'A';
cipherText.push_back(x);
}
return cipherText;
}
// Function to decrypt the cipher text using Vigenère Cipher
string decryptVigenereCipher(string cipherText, string key) {
string plainText = "";
for (int i = 0; i < cipherText.size(); i++) {
char x = (cipherText[i] - key[i] + 26) % 26;
x += 'A';
plainText.push_back(x);
}
return plainText;
}
int main() {
string plainText, key;
cout << "Enter the plain text (uppercase letters only): ";
getline(cin, plainText);
cout << "Enter the key (uppercase letters only): ";
getline(cin, key);
// Generate the Vigenère key
string generatedKey = generateKey(plainText, key);
// Encrypt the plain text
string encryptedText = encryptVigenereCipher(plainText, generatedKey);
cout << "Encrypted text: " << encryptedText << endl;
// Decrypt the cipher text
string decryptedText = decryptVigenereCipher(encryptedText, generatedKey);
cout << "Decrypted text: " << decryptedText << endl;
return 0;
}