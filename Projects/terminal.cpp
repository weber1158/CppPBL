// A Fallout-inspired terminal hacking game
#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>

int calculateLikeness(const std::string& guess, const std::string& secret) {
// Likeness score for each password guess
//  i.e., Calculates the number of letters guessed in the correct position
  int likeness{0};
  for(std::size_t i=0; i<guess.size(); ++i) {
    if(guess[i]==secret[i]) {
      ++likeness;
    }
  }
  return likeness;
}

int main() {
  // Initiation message
  std::cout<<"===================================\n";
  std::cout<<"Fallout-style Terminal Hacking Game\n";
  std::cout<<"===================================\n";

  std::srand(static_cast<unsigned int>(std::time(nullptr)));
  std::vector<std::string> words = {
    "HOUSES","MOTHER","ROCKET","PEOPLE","PLANET",
    "POCKET","FATHER","MARKET","TEXTER","NAPKIN"
  };
  int secretIndex = std::rand() % words.size();
  std::string secret = words[secretIndex];

  const int maxAttempts{4};
  int attemptsLeft = maxAttempts;

  std::cout<<"Possible passwords:\n";
  for(const std::string& word : words) {
  // ^^ This for-loop is read as:
  //    For each element in words, call it word, and run the loop
    std::cout<<word<<'\n';
  }
  std::cout<<'\n';

  bool guessedCorrectly = false;

  while(attemptsLeft>0 && !guessedCorrectly) {
    std::cout<<"> Enter the password: ";
    std::string guess;
    std::cin>>guess;

    for(char& c : guess) {
    // ^^This for loop reads:
    //   Loop through each char element in guess and modify the element
      c=static_cast<char>(std::toupper(static_cast<unsigned char>(c)));
    }

    bool found=false;
    for(const std::string& word : words) {
    // ^^ This for-loop is read as:
    //    For each element in words, call it word, and run the loop
      if(guess==word) {
        found=true;
        break;
      }
    }

    if(!found) {
      std::cout<<"> Invalid guess.\n\n";
      continue;
    }

    if(guess==secret) {
      std::cout<<"> Access granted. Password accepted.\n";
      guessedCorrectly=true;
    } else {
      int likeness=calculateLikeness(guess,secret);
      attemptsLeft--;
      std::cout<<"> Entry denied.\n";
      std::cout<<"> "<<likeness<<"/6 "<<"correct."<<"\n";
      std::cout<<"> Attempts remaining: "<<attemptsLeft<<"\n\n";
    }
  }

  if(!guessedCorrectly) {
    std::cout<<"> Terminal locked. The password was: "<<secret<<"\n";
  }
