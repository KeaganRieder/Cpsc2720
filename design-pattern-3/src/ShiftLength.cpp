#include <ShiftLength.h>

int ShiftLength::ShiftOffset() {
  return LENGTH - shift;
}

std::string LengthThree::Shift(std::string word) {
  std::string result = "";
  for (int pos = 0; pos < word.size(); pos++) {
    if (isupper(word[pos])) {
      result += (((word[pos] - 'A') + ShiftOffset()) % LENGTH) + 'A';
    } else {
      result += (((word[pos] - 'a') + ShiftOffset()) % LENGTH) + 'a';
    }
  }
  //std::cout << result << std::endl;
  return result;
}

std::string LengthFour::Shift(std::string word) {
  std::string result = "";
  for (int pos = 0; pos < word.size(); pos++) {
    if (isupper(word[pos])) {
      result += (((word[pos] - 'A') + ShiftOffset()) % LENGTH) + 'A';
    } else {
      result += (((word[pos] - 'a') + ShiftOffset()) % LENGTH) + 'a';
    }
  }
  //std::cout << result << std::endl;
  return result;
}
std::string LengthSeven::Shift(std::string word) {
  std::string result = "";
  for (int pos = 0; pos < word.size(); pos++) {
    if (isupper(word[pos])) {
      result += (((word[pos] - 'A') + ShiftOffset()) % LENGTH) + 'A';
    } else {
      result += (((word[pos] - 'a') + ShiftOffset()) % LENGTH) + 'a';
    }
  }
  //std::cout << result << std::endl;
  return result;
}
