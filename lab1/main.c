#include <stdio.h>

int main() {
    
    
    File* fp;
    int a[3] = {1, 2, 3};
    int arr_read[5];
    
    if ((fp = fopen("a.bin", "wb+")) == NULL) {
       
        exit(1);
    }
    
    fwrite(a, sizeof (a), 1, fp);
    
    fseek(fp, 0, SEEK_SET);
    fread(arr_read, sizeof(arr_read), 1, fp);
    
    return 0;
}

