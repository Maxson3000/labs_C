#include <stdio.h>
int count_bits_long(unsigned long num) {
    int count=0;
    while (num>0) {
        if (num &1) {
            count++;
        }
        num=num>>1;
    }
    
    return count;
}
int count_bits_double(double num) {
    unsigned char *byte_ptr= (unsigned char*)&num;
    int total_bits=0;
    int i, j;
    for (i = 0;i<sizeof(double);i++) {
        unsigned char current_byte=byte_ptr[i];
        for (j=0;j<8;j++) {
            if (current_byte&1) {
                total_bits++;
            }


            current_byte=current_byte >>1;
        }
        
    }
    
    return total_bits;
}
int main() {
    long long_val;
    double double_val;
    int bits_long, bits_double;
    printf("long=");
    scanf("%ld", &long_val);
    printf("double ");
    scanf("%lf", &double_val);
    bits_long = count_bits_long((unsigned long)long_val);
    bits_double = count_bits_double(double_val);
    printf("Chisl %ld sodergit %d bit chislo1000\n", long_val, bits_long);
    
    printf("Chislo %lf sodergit%d bit chislo%s\n", double_val, bits_double);
     printf("\nBin long: ");
    for (int i=sizeof(long)*8-1;i>=0;i--) 
        if ((unsigned long)long_val>> i& 1) printf("1");
        else if (i==sizeof(long)*8-1)continue;
        else printf("0");
    
    printf("\nBin double: ");
    unsigned char *p = (unsigned char*)&double_val;
    for (int i = 7;i >=0;i--)
        for (int j= 7;j>=0;j--)
            printf("%d",(p[i]>>j)&1);
    
    


}