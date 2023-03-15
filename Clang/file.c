#include <stdio.h>

int main()
{
    FILE *fp;
    struct product
    {
        int num;
    };
    struct product p[3] = {1,2,3};
    // struct product *k;
    // k = &p;
    fp = fopen("a.txt","w");
    fwrite(p,sizeof(p),3,fp);
    rewind(fp);
    for(int i = 0;i<3;i++)
    {
        fread(&p,sizeof(p),1,fp);
        printf("%d",p->num);
    }


}