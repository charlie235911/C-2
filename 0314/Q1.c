#include <stdio.h>

int main(int argc, char const *argv[])
{
    int j, r, x = 0, ans[100000] = {0};
    while (scanf("%d %d", &j, &r))
    {
        if (j == 0 && r == 0)
        {
            break;
        }
        else
        {
            int vs[512] = {0};
            int winner = 0;
            int game = 0;
            for (int i = 0; i < j*r; ++i)
            {
                scanf("%d", &game);
                int current = i % j;
                vs[current] += game;
                if (vs[current] >= vs[winner]){
                    winner = current;
                }
            }
            ans[x] = winner + 1;
            x++;
        }
    }
    for (int i = 0; i < x; i++)
    {
        printf("%d\n", ans[i]);
    }
    return 0;
}
