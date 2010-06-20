#include "vkiceApp.h"
#include "vkiceAlgoSymmHydrogen.h"

vkiceApp::vkiceApp(int argc_, char* argv_[]) : vkappShell(argc_, argv_) {
  _paramAction = getArg(1);
  _paramFilename = getArg(2);
}

vkiceApp::~vkiceApp() {}

void vkiceApp::displayHelp() {
  cout << "help info..." << endl;
}

void vkiceApp::displaySlug() {
  cout << "[*virtuak ice 1-1] [unbreakable]" << endl;
}

void vkiceApp::go() {
  if (
       (_paramAction != "help") &&
       (_paramAction != "freeze") &&
       (_paramAction != "thaw")
     ) {
    displayHelp();
    exit(1);
  };

  ifstream f(_paramFilename.c_str());
  if (!f) {
    cerr << "file does not exist" << endl;
    exit(1);
  }

  displaySlug();

  if (_paramAction == "help") {
    displayHelp();
    exit(0);
  }

  readKey();

  readFile();
  vkiceAlgoSymm* algo(new vkiceAlgoSymmHydrogen);
  if (_paramAction == "freeze") {
    cout << "freezing " << _paramFilename << "...";
    _newText = algo->encrypt(_oldText, _key);
  }
  if (_paramAction == "thaw") {
    cout << "thawing " << _paramFilename << "...";
    _newText = algo->decrypt(_oldText, _key);
  }
  delete algo;
  writeFile();
  cout << "done." << endl;
}

void vkiceApp::readFile() {
  char ch;
  ostringstream st;
  ifstream f(_paramFilename.c_str());
  if (f) {
    while (f.get(ch)) {
      st.put(ch);
    }
    f.close();
    _oldText = st.str();
  } else {
    // make this a masked log
    cerr << "cannot open file for reading" << endl;
  }
}

void vkiceApp::readKey() {
  cout << "key : ";
  cin >> _key;
}

void vkiceApp::writeFile() {
  char ch;
  istringstream st(_newText.c_str());
  ofstream f(_paramFilename.c_str());
  if (f) {
    while (st.get(ch)) {
      f.put(ch);
    }
    f.close();
  } else {
    // make this a masked log
    cerr << "cannot open file for writing" << endl;
  }
}
