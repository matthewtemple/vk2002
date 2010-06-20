#ifndef vkpheSensor_h
#define vkpheSensor_h

#include "../vkmob/vkmobJect.h"
#include "vkpheIndiv.h"

// it has a proc that does what it does, differently based on variables, and
// descendants simply set those parameters?

// ...if the proc can be universally generic...which I doubt it can

// or maybe sensor provides building block methods that it uses in a default
// way, and descendants are given the opportunity to re-use those blocks in new
// ways, and extend or override the sensing blocks themselves

// there's a bit-level phenom
// there's a subsequent byte-level phenom
// there's a subsequent object or word-level phenom
// there's the possibility that the data stream is a serialized object of
//   higher dimensions

// delimited, fixed-width, or encapsulated
// uncompressed natural language is fixed-width at the byte level, delimited at the word level

// phenom needs to be able to auto find as well as just follow given instructions on how to chop the shit up

// either way, what it specified or what it discovered is the same: a vector of types that include a method of individuation, with params...fixed-width, what width; delimited, with what; encapsulated, with what two markers; ... same choices, level after level of magnification

class vkpheSensor : public vkmobJect {
  vector<vkpheIndiv> _indivs;
public:
  vkpheSensor();
  ~vkpheSensor();
  //void individuate();
  //void readStream();
  //void translate();  // from the neumenal to the phenomenal?
  // needs to be able to do this continuously, with moving streams...?
  // needs a way to return its objectmatrix output to the user
};

#endif
