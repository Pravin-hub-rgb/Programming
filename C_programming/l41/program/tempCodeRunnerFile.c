    for (int i = strlen(string); i > 0; i--)
    {
        while(string[i]==' ')
        {
            string[i-1]='\0';
        }
    }