#include <ShiftLength.h>
#include <Encryipter.h>
#include <string>
#include <iostream>
#include <ostream>

int main() {
  std::string word = "Hello";
  Encryipter chiper1;
  /*
   * Encrypting by 3
   */
  std::cout << "encrypting " << word << " by 3" << std::endl;
  //Encrypting word
  chiper1.AddEncryiptSteps(new LengthThree());
  chiper1.Encryipt(word);

  std::cout << "encrypted " << chiper1.GetEncryptedWord() << " by 3"
      << std::endl << std::endl;

  /*
   * Encrypting by 3 then 3
   */
  // word = "Hello";
  std::cout << "encrypting " << word << " by 3 twice" << std::endl;
  //Encrypting word
  chiper1.AddEncryiptSteps(new LengthThree());
  chiper1.Encryipt(word);

  std::cout << "encrypted " << chiper1.GetEncryptedWord() << " by 3 twice"
      << std::endl << std::endl;

  /*
   * Encrypting by 3 then 7
   */
  std::cout << "encrypting " << word << " by 3 then 7" << std::endl;
  //Encrypting word
  chiper1.ClearSteps();
  chiper1.AddEncryiptSteps(new LengthThree());
  chiper1.AddEncryiptSteps(new LengthSeven());
  chiper1.Encryipt(word);

  std::cout << "encrypted " << chiper1.GetEncryptedWord() << " by 3 then 7"
      << std::endl << std::endl;

  /*
   * Encrypting by 3 then 7 then 4
   */
  std::cout << "encrypting " << word << " by 3, then 7, then 4" << std::endl;
  //Encrypting word
  chiper1.ClearSteps();
  chiper1.AddEncryiptSteps(new LengthThree());
  chiper1.AddEncryiptSteps(new LengthSeven());
  chiper1.AddEncryiptSteps(new LengthFour());
  chiper1.Encryipt(word);

  std::cout << "encrypted " << chiper1.GetEncryptedWord()
      << " by 3, then 7, then 4" << std::endl << std::endl;

  return 0;
}
