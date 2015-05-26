/* ascii_isupper.c for the "Adding" suite */

/* Test için gerekli kütüphaneler */

#include "clar.h"
#include <string.h>

/* Fonksiyon için gerekli kütüphaneler */

#if HAVE_CONFIG_H
# include "config.h"
#endif

#include <stdio.h>
#include <stdlib.h>
#include "ascii.h"

int ascii_isupper (int c)
{
  return (c >= 'A') && (c <= 'Z');
}

struct args_t {
        char *s1;
        char *s2;
};

static struct comparison_t {
        struct args_t args;
        int expected;
} comparisons[] = {
        { { .s1 = "foo", .s2 = "FOO" }, .expected = 1 }, // Büyükse (doğruysa) 1 dönmeli
        { { .s1 = "bar", .s2 = "BAr" }, .expected = 0 }  // Halen küçükse (yanlışsa) 0 dönmeli
};

void test_ascii_isupper__initialize(void)
{
}

void test_ascii_isupper__cleanup(void)
{
}

void test_ascii_isupper__must_be_upper(void)
{
        int i;
	//char *a = ascii_isupper(comparisons.args.s1[i];
        for (i = 0; i < sizeof(comparisons)/sizeof(comparisons[0]); i++) {
                int result = ascii_isupper(comparisons.args.s1[i]);
                cl_assert_(result == comparisons.args.s2[i], "String is upper");
        }
}
