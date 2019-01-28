#include "IDemoClass.h"

namespace DemoClass {

class DemoClass : public IDemoClass {
 public:
    virtual int demoFunction(int a);
};

}