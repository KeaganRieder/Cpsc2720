/*
 * @author keagan rieder <k.rieder@uleth.ca>
 */

#ifndef SHIFT_LENGTH_H_INCLUDED
#define SHIFT_LENGTH_H_INCLUDED
#include <string>
#include <iostream>

const int LENGTH = 26;

class ShiftLength {
 public:
  /*
   * @breif shifts word by an amount
   * @parm[in] word to shift
   * @return encrypted word as a string
   */
  virtual std::string Shift(std::string word) = 0;

 protected:
  /*
   * @breif Calculates shift offset
   * @return  shiftOffset as int
   */
  int ShiftOffset();
  int shift;
};

class LengthThree : public ShiftLength {
 public:
  /*
   * @breif default constructor
   */
  LengthThree() {
    shift = 3;
  }
  /*
   * @breif default destructor
   */
  virtual ~LengthThree() {
  }
  /*
   * @breif shifts word by 3
   * @parm[in] word to shift
   * @return encrypted word as a string
   */
  std::string Shift(std::string word);
};

class LengthFour : public ShiftLength {
 public:
  /*
   * @breif default constructor
   */
  LengthFour() {
    shift = 4;
  }
  /*
   * @breif default destructor
   */
  virtual ~LengthFour() {
  }
  /*
   * @breif shifts word by 4
   * @parm[in] word to shift
   * @return encrypted word as a string
   */
  std::string Shift(std::string word);
};

class LengthSeven : public ShiftLength {
 public:
  /*
   * @breif default constructor
   */
  LengthSeven() {
    shift = 7;
  }
  /*
   * @breif default destructor
   */
  virtual ~LengthSeven() {
  }
  /*
   * @breif shifts word by 7
   * @parm[in] word to shift
   * @return encrypted word as a string
   */
  std::string Shift(std::string word);
};
#endif //ENCRYPTER_H_INCLUDED
