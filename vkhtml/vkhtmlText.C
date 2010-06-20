#include "vkhtmlText.h"

vkhtmlText::vkhtmlText() {}

vkhtmlText::vkhtmlText(string text_) {
  _text = text_;
}

vkhtmlText::~vkhtmlText() {}

string vkhtmlText::get() {
  return _text;
}

string vkhtmlText::getHTML() {
  return _text;
}

void vkhtmlText::set(string text_) {
  _text = text_;
}
