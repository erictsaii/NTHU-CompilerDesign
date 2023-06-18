void codegen();

void codegen() {
  int input_data[17];
  int i;
  for (i = 0; i < 17; i = i + 1) {
    input_data[i] = i;
  }

  int end = 0;
  int data[17];
  for (i = 0; i < 17; i = i + 1) {
    int *id = input_data + i;
    
    int slot = end;
    int cont = slot != 0;
    while (cont) {
      const int parent = (slot - 1) / 2;
      if (data[parent] < *id) {
        *(data + slot) = *(data + parent);
        slot = parent;
      } else {
        cont = 0;
      }
      if (slot == 0) {
        cont = 0;
      }
    }
    data[slot] = *id;
    end = end + 1;
  }

  digitalWrite(26, HIGH);
  delay((data[0] - data[2]) * 1000); /* data[0] - data[2] = 3 */
  digitalWrite(26, LOW);
  delay((end - data[0]) * 1000); /* end - data[0] = 1 */
}
