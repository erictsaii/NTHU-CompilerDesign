void codegen();
int modulo(const int *a, const int *b);
int gcd(const int a, const int b);

void codegen()
{
  int a = gcd(12, 18); // a = 6
  int b = gcd(8, 9); // b = 1
  const int c6 = 6, c4 = 4;
  digitalWrite(26 + modulo(&c6, &c4), HIGH);
  delay(a * 1000);
  digitalWrite(26 + modulo(&c6, &c4), LOW);
  delay(b * 1000);
}

int modulo(const int *a, const int *b)
{
  if (*a < *b) {
    return *a;
  }

  int ret = *a;
  while (1) {
    ret = ret - *b;
    if (ret < *b) {
      break;
    }
  }
  return ret;
}

int gcd(const int a, const int b)
{
  if (b != 0) {
    return gcd(b, modulo(&a, &b));
  } else {
    return a;
  }
}

