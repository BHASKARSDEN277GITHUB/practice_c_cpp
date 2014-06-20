void KMPSearch(char *pat, char *txt)
{
    int m = strlen(pat);
    int n = strlen(txt);
    int i=0, len=0;
    computeLPSArray(pat, m, lps);
    while (i<n)
    {
        while (len!=0 && txt[i]!=pat[len]) len=b[len]; //backtrack
        if(pat[len] == txt[i]) { len++;} //if pattern matches , incr len
        i++; //to match next pattern
        if (len==m)
        {
            //print pattern found at i;
            len=lps[len]; //backtrack to last match position
        }
    }
}
void computeLPSArray(char *pat, int M, int *lps)
{
    int i=1, len=0;
    lps[0]=0;
    while (i<m)
    {
        while (len!=0 && pat[i]!=pat[len]) len=lps[len]; //backtrack
        if (pat[i]==pat[len]) { len++; } //if pattern matches ,incr len
                lps[i]=len;
                i++;
    }
}
