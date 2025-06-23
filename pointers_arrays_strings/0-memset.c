#include "main.h"

/**
 * _memset - Bellek alanını sabit bir bayt ile doldurur.
 * @param s: Doldurulacak bellek alanının başlangıç adresi (işaretçi).
 * @param b: Bellek alanına yazılacak sabit bayt değeri.
 * @param n: Doldurulacak bayt sayısı.
 *
 * @return: Bellek alanı s'ye bir işaretçi döndürür.
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
    {
        s[i] = b;
    }

    return (s);
}

