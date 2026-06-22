#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int maxX = -101, maxY = -101, minX = 101, minY = 101;
    for (int i = 0; i < 4; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        if (maxX < tmp)
            maxX = tmp;
        if (minX > tmp)
            minX = tmp;
        scanf("%d", &tmp);
        if (maxY < tmp)
            maxY = tmp;
        if (minY > tmp)
            minY = tmp;
    }

int result = ((maxX - minX) > (maxY - minY)) ? (maxX - minX) : (maxY - minY);
    printf("%d", result * result);
return 0;
}
