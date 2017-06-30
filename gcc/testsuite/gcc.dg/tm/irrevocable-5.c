/* { dg-do compile } */
/* { dg-options "-fgnu-tm -fdump-ipa-tmipa -O" } */

int a;

void foo(void) __attribute__((transaction_safe));
void bar(void) __attribute__((transaction_safe));
void danger(void) __attribute__((transaction_unsafe));

void wildthing()
{
  /* All blocks should be propagated as irrevocable.  */
  __transaction_relaxed {
    if (a)
      foo();
    else
      bar();
    danger();
  }
}

/* { dg-final { scan-ipa-dump-times "GTMA_DOES_GO_IRREVOCABLE" 1 "tmipa" } } */
/* { dg-final { scan-ipa-dump-times "bb 3 goes irr" 1 "tmipa" } } */
/* { dg-final { scan-ipa-dump-times "bb 4 goes irr" 1 "tmipa" } } */
/* { dg-final { scan-ipa-dump-times "bb 5 goes irr" 1 "tmipa" } } */
/* { dg-final { scan-ipa-dump-times "bb 6 goes irr" 1 "tmipa" } } */
/* { dg-final { cleanup-ipa-dump "tmipa" } } */
