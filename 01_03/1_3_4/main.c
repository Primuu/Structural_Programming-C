#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%i\n%i",&a,&b);
    if(abs(a) >= abs(b)) printf("%i",a);
        else printf("%i",b);
    return 0;
}
