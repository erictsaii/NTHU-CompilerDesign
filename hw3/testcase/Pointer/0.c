void codegen();

void codegen() {
  int a = 42 - 53 * 2; /* a = -64 */
  int *b = &a; /* *b = -64 */
  *b = -a / 8; /* a = 8, *b = 8 */
  a = *b - 4; /* a = 4, *b = 4 */
  digitalWrite(28, HIGH);
  delay(a * 1000);
  digitalWrite(28, LOW);
  delay(*b * 1000);
}
