#include <Encryipter.h>

Encryipter::~Encryipter() {
  ClearSteps();
}
void Encryipter::Encryipt(std::string word) {
  EncryiptedWord = word;
  for (int pos = 0; pos < encryiptionSteps.size(); pos++) {
    EncryiptedWord = encryiptionSteps[pos]->Shift(EncryiptedWord);
  }
}
void Encryipter::ClearSteps() {
  for (int pos = 0; pos < encryiptionSteps.size(); pos++) {
    delete encryiptionSteps[pos];
  }
  encryiptionSteps.clear();
}
