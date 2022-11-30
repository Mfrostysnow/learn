#define  _CRT_SECURE_NO_WARNINGS 1
void shadespace() 
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d\n", 5000 - 50 * (100 - x + y));
}