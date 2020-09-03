// To output clang static analyzer to text file do:
// clang++ --analyze main.cpp &> output.txt
// To set the include directory
// clang++ --include-directory <include path from current location>

//*** Dereference of Null Ptr
class C {
public:
  int x;
};

void test() {
  C *pc = 0;
  int k = pc->x; // warn
}
//***

//*** undefined results of binary operators
void test2() {
  int x;
  int y = x + 1; // warn: left operand is garbage
}
//**

//*** Variable Length Arrays of undefined or zero size
void test3() {
  int x;
  int vla1[x]; // warn: garbage as size
}

void test4() {
  int x = 0;
  int vla2[x]; // warn: zero size
}
//***

//*** uninitialized values used as array subscripts &
//    uninitialized values used as branch conditions &
int test5() {
  int i, a[10], y;
  int x = a[i]; // warn: array subscript is undefined

  if (i) // warn
    i = 2;

  return y;
}
//***

//*** uninitialized values being returned to the caller
int test6() {
  int x;
  return x; // warn
}
//***

//*** double-free and use-after-free problems
void f(int *p){}

void testUseMiddleArgAfterDelete(int *p) {
  delete p;
  f(p); // warn: use after free
}

class SomeClass {
public:
  void f2(){}
};

void test7() {
  SomeClass *c = new SomeClass;
  delete c;
  c->f2(); // warn: use after free
}

void test8() {
  int *p = new int;
  delete p;
  delete p; // warn: attempt to free released
}

void test9() {
  int i;
  delete &i; // warn: delete address of local
}

void test10() {
  int *p = new int[1];
  delete[] (++p);
    // warn: argument to 'delete[]' is offset by 4 bytes
    // from the start of memory allocated by 'new[]'
}
//***

int main() 
{
  return 0;
}

