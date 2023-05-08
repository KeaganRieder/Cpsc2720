/*
 * @author keagan rieder <k.rieder@uleth.ca>
 */

#ifndef ENCRYPTER_H_INCLUDED
#define ENCRYPTER_H_INCLUDED
#include <ShiftLength.h>
#include <string>
#include <vector>
#include <iostream>

class Encryipter {
 public:
  /*
   * @breif default constructor
   */
  Encryipter() {
  }
  /*
   * @breif default destructor
   */
  virtual ~Encryipter();

  /*
   * @breif Add Step
   * @parm [in] step as aShiftLength pointers
   */
  void AddEncryiptSteps(ShiftLength *step) {
    encryiptionSteps.push_back(step);
  }
  /*
   * @breif clear the steps
   */
  void ClearSteps();
  /*
   * @breif encrypts word based on steps
   */
  void Encryipt(std::string word);
  /*
   * @breif returns EncryptedWord
   * @return EncryptedWord as string
   */
  std::string GetEncryptedWord() {
    return EncryiptedWord;
  }

 private:
  std::string EncryiptedWord;
  std::vector<ShiftLength*> encryiptionSteps;
};
#endif //ENCRYPTER_H_INCLUDED
