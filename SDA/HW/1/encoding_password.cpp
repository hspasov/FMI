#include <iostream>
#include <string>

int main () { 
  std::string password;
  std::string encoded_password = "";
  unsigned letter_repeats = 0;

  std::cin >> password;

  for (unsigned i = 0; i < password.length(); i++) { 
    if (i > 0 && password[i] != password[i - 1]) {
      encoded_password += std::to_string(letter_repeats);
      encoded_password += password[i - 1];
      letter_repeats = 1;
    } else { 
      letter_repeats++;
    } 
  } 

  encoded_password += std::to_string(letter_repeats);
  encoded_password += password[password.length() - 1];

  std::cout << encoded_password << std::endl;
  return 0;
}
