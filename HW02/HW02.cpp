#include <iostream>
using namespace std;

// 기본 클래스: Animal
class Animal {
public:
    // 가상 함수: 자식 클래스에서 재정의 가능
    virtual void makeSound() = 0;

    // 소멸자
    virtual ~Animal() {}
};

// 파생 클래스: Dog
class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog barks: Woof! Woof!" << endl;
    }
};

// 파생 클래스: Cat
class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat meows: Meow! Meow!" << endl;
    }
};

// 파생 클래스: Cow
class Cow : public Animal {
public:
    void makeSound() override {
        cout << "Cow mooo: Mooo! Mooo!" << endl;
    }
};

int main() {
    // Animal 타입 포인터로 다양한 객체를 가리킴
    Dog myDog;
    Cat myCat;
    Cow myCow;

    //myAnimal[0] = &myDog;
    //myAnimal[1] = &myCat;
    //myAnimal[2] = &myCow;

    Animal* myAnimal[3] = { &myDog, &myCat, &myCow };

    for (int i = 0; i < size(myAnimal); i++) {
        // 동물 사운드 override 출력
        myAnimal[i]->makeSound();
    }

    return 0;
}
