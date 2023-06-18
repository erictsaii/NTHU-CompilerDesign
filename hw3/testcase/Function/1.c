void codegen();
int dp_fib(int *dp, const int fi);

void codegen() {
  int dp[5];
  int i;
  for (i = 0; i < 5; i = i + 1) { /* initialize dp */
    *(dp + i) = 0;
  }
  const int a = dp_fib(dp, 6); /* a = 8 */
  const int b = dp_fib(dp, 4); /* b = 3 */
  digitalWrite(26, HIGH);
  delay(a * 1000);
  digitalWrite(26, LOW);
  delay(b * 1000);
}

int dp_fib(int *dp, const int fi) {
  if (fi == 0) {
    return 0;
  }
  if (fi == 1) {
    return 1;
  }
  const int shifted_fi = fi - 2;
  if (dp[shifted_fi] == 0) {
    const int ret = dp_fib(dp, fi - 2) + dp_fib(dp, fi - 1);
    dp[shifted_fi] = ret;
    return ret;
  } else {
    return dp[shifted_fi];
  }
}
