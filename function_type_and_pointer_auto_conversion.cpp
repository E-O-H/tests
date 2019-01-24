typedef bool (*FunType)(int);
bool f(int);
int main() {
  FunType a = f;
  //FunType b = &a; // Sure, here's an error.
  FunType c = &f; // This is not an error, though.
                  // It's equivalent to the statement without "&".
                  // So we have c equals a.
  return 0;
}
