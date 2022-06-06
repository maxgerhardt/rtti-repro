#include <Arduino.h>
#include <MyLib.h>

class Base { public: virtual void vf(){} };

class Derived : public Base { };

void setup() {
	Base b;
	Derived d;

    const std::type_info& ti1 = typeid(d);
    Serial.begin(9600);
    Serial.println(ti1.name());
}
void loop() {

}