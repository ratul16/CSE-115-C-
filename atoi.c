#include <stdio.h>
#include <string.h>

int s_atoi(char *s, int radix)
{
    int i,digit;
    int n = strlen(s);
    int m = 0;

    for (i=0; i<n; i++) {
        if (s[i]>='0' && s[i]<='9'){
            digit = s[i] - '0';
        }
        else if (s[i]>='A' && s[i]<='F') {
            digit = s[i] - 'A' + 10;
        }
        m = m*radix + digit;
    }
    return m;
}

char *itoa_s(int n, char *s, int radix)
{
    int i = 0;
    int digit;

    while (n!=0) {
        digit = n%radix;
        if (digit<10) s[i] = digit + '0';
        else {
            s[i] = digit - 10 + 'A';
        }
        n = n/radix;
        i=i+1;
    }
    s[i] = '\0';

    strrev(s);

    return s;
}

int main(void)
{
    char s[32];

    printf("%d\n", s_atoi("246",10));
    printf("%d\n", s_atoi("246",8));
    printf("%d\n", s_atoi("246",16));

    printf("%d\n", s_atoi("10101",2));
    printf("%d\n", s_atoi("1F8",16));
    printf("%d\n", s_atoi("FF",16));

    printf("\n\n%s\n",itoa_s(759,s,16));
    printf("%s\n",itoa_s(67,s,2));

    return 0;
}

// end of file
