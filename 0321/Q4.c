#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int a = 0, b = 0;
    while(scanf("%d %d", &a, &b) != EOF){
        char num[100000];
        int x, y, add, tempt;
        scanf("%s", &num);
        for (int i = 0; i < strlen(num); i++)
        {
            if (num[i] < 0)
            {
                num[i] *= -1;
            }
        }
        for (int i = 0; i < strlen(num) - 1; i++)
        {
            for (int j = i + 1; j < strlen(num); j++)
            {
                
                add = i + j;
            }
            
        }
        
    }
    return 0;
}
