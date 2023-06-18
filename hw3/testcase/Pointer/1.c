void codegen();

void codegen() {
  int a = 58 / 17; /* a = 3 */
  int b = a * 2 + 10; /* b = 16 */
  int *c = &a; /* *c = 3 */
  *c = *c + 1; /* *c = 4, a = 4 */
  c = &b; /* *c = 16 */
  *c = b / a; /* *c = 4, b = 4 */
  digitalWrite(29, HIGH);
  delay(a * 1000 + 1000); /* 5 seconds */
  digitalWrite(29, LOW);
  delay(b * 1000 - 250 * 8); /* 2 seconds */
}
