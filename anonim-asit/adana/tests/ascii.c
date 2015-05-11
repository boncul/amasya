/* ascii.c for the "Adding" suite */
#include "clar.h"

/*
 * Test edilecek  bir fonksiyon (bunu ayrı dosyaya almak lazım)
 *
 * Her fonksiyon için bir test dosyası aç.  Aynı dosyada tüm özellikleri test
 * et.  Eğer testlerin sayısı fazlaysa ayrı bir dosya daha açabilirsin.
 *
 * Testlere uygun tablolar oluştur.  Tablolarda fonksiyon argümanlarını
 * struct'larla temsil et.
 */

#include <string.h>
int mycmp(const char *s1, const char *s2) {
	return strcmp(s1, s2);
}

struct args_t {
	char *s1;
	char *s2;
};

static struct comparison_t {
	struct args_t args;
	int expected;
} comparisons[] = {
	{ { .s1 = "foo", .s2 = "foo" }, .expected = 0 },
	{ { .s1 = "car", .s2 = "bar" }, .expected = 1 }
};

void test_ascii__initialize(void)
{
}

void test_ascii__cleanup(void)
{
}

void test_ascii__make_sure_strings_equal(void)
{
	int i;
	for (i = 0; i < sizeof(comparisons)/sizeof(comparisons[0]); i++) {
		int result = mycmp(comparisons[i].args.s1, comparisons[i].args.s2);
		cl_assert_(result == comparisons[i].expected, "Strings must be equal");
	}
}
