#include <stdio.h>

int main () {
    for (int i = 2; i<= 10; i+=2) {  // เริ่มจาก 2, ทำจนกว่า i <= 10, เพิ่มทีละ 2
        printf ("%d\n", i);          // แสดงค่า i  
    }
    printf("\nEnd of loop\n");      // แสดงข้อความปิดท้าย
    return 0;
}