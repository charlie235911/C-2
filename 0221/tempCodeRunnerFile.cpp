int c = 0;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            for (int k = j + 1; k < 9; k++)
            {
                if (a[i][j] == a[i][k])
                {
                    cout << "row" << c << " #" << a[i][k] << endl;
                    c++;
                }
            }
        }
    }
    int d = 0;
    for (int j = 0; j < 9; j++)
    {
        for (int i = 0; i < 8; i++)
        {
            for (int k = i + 1; k < 9; k++)
            {
                if (a[i][j] == a[k][j])
                {
                    cout << "column" << d << " #" << a[k][j] << endl;
                    d++;
                }
            }
        }
    }
    int e = 0;
    for (int i = 0; i < 7; i + 3)
    {
        for (int j = 0; j < 7; j + 3)
        {
            for (int h = 0; h < i + 2; h++)
            {
                for (int k = 0; k < 2; k++)
                {
                    if (a[h][j] == a[h][j + k])
                    {
                        cout << "block" << e << " #" << a[h][j] << endl;
                        e++;
                        break;
                    }
                }
                break;
            }
        }
    }
    if (c == 0 && d == 0 && e == 0)
    {
        cout << "true" << endl;
    }