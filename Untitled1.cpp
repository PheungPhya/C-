//#include <iostream>
//
//class A {
//public:
//    virtual void show() {
//        std::cout << "Base class A\n";
//    }
//};
//
//class B : public A {
//public:
//    void show() override {
//        std::cout << "Derived class B\n";
//    }
//};
//
//int main() {
//    B b;
//    b.show();  
//
//    A& a_ref = b;  // Reference of base class pointing to derived class object
//    a_ref.show();  // Will call the overridden function in class B through base class pointer
//
//    A* a_ptr = &b;  // Pointer of base class pointing to derived class object
//    a_ptr->show();  // Will call the overridden function in class B through base class pointer
//
//    return 0;
//}

#include <iostream>

class Animal {
public:
    virtual void speak() {
        std::cout << "Animal speaks" << std::endl;
    }
};

class Dog : public Animal {
public:
    void speak() {
        std::cout << "Dog barks" << std::endl;
    }
};

class Cat : public Animal {
public:
    void speak(){
        std::cout << "Cat meows" << std::endl;
    }
};

int main() {
    Animal* ptr;

    Dog dog;
    Cat cat;
	
    ptr = &dog;
    ptr->speak();  // Output: Dog barks

    ptr = &cat;
    ptr->speak();  // Output: Cat meows

    return 0;
}


