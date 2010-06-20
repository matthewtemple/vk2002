#include "vkhtml.h"

int main() {
  vkhtmlPRE tag;

  string a("WIDTH");
  string b("100%");

  tag.modifyAttrib(a, b);
  tag.modifyAttrib("BORDER", "8");

  vkhtmlText* text1 = new vkhtmlText("(after text)");
  tag.append(text1);

  tag.insert("(before text)");

  tag.insertFile("test_vkhtml.C");

  cout << &tag << endl;
}
