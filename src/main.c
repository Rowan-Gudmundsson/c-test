typedef struct {
  int x;
  int y;
} Tuple;

typedef int Integer;

int square(int x) { return x * x; }

int main(void) {
  int y = square(2);
  Tuple t;
  t.x = 4;
  t.y = 3;

  for (int i = 0; i < 10; ++i) {
  }

  while (y != 4) {
  }


  int* y_ptr = &y;

  int* heap_var = (int*)malloc(10 * sizeof(int));

  for (int i = 0; i < 10; ++i) {
    heap_var[i] = square(i);
  }

  for (int i = 0; i < 10; ++i) {
    printf("%d squared is %d\n", i, heap_var[i]);
  }

  printf("y memory addres is %d\n", *y_ptr);

  free(heap_var);

  return 0;
}
