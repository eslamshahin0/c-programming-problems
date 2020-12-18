#include <stdio.h>
#include <stdlib.h>

long long lcm(long* a,long *b) {

  for (long l = 1; l <= (long long) (*a) * (*b); ++l)
    if ((l % *a == 0) && (l % *b == 0))
      return l;

  return (long long) *a * *b;
}

int main() {
  long a, b;
 scanf("%ld %ld",&a,&b);
  long long c= lcm(&a, &b);
  printf("%lld" ,c );
  return 0;
}