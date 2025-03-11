#include <iostream>
class A {
private:
    std :: string status;
public:
    A() {
       std :: cout << "A!" << std :: endl;
    }
    virtual ~A() {
       std :: cout << "A!" << std :: endl;
    } 
    void setter(std :: string nume) {
        status = nume;
    }
    std :: string getter () {
        return status;
    }
};
class B  : public A {
public:
    B() {
        std :: cout << "B!" << std :: endl;
    }
    virtual ~B() {
       std :: cout << "B!" << std :: endl;
    }
};


class Printable {
    virtual void DrawMe() = 0;
};

class Shape : public Printable{

};

class Square : public Shape {

};






int main()
{
    A* A_ptr = new A();
    A* B_ptr = new B();
    A_ptr->setter("Cristi");
    B_ptr->setter("Ionut");
    std::cout << A_ptr->getter() << std::endl;
    std::cout << B_ptr->getter() << std::endl;
    delete A_ptr;
    delete B_ptr;
    Printable p;

}


