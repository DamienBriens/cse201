class Base {
public:
  int x;
  int y;
  double z;

  Base(int a, int b, double c ) {
    this->x = a;
    this->y = b;
    this->z = c;
  }
};

class Derived : public Base {
public:
  double w;

  // Make sure you understand how this contructor works:
  Derived(int a, int b, double c, double d)
    : Base(a, b, c)
  {
    this->w = d;
  }
};
