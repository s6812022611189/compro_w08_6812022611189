#include <stdio.h>

int main() {
    int i = 2;                      // เริ่มจาก 2

    while (i <= 10) {               // ตรวจว่าค่า i ยังไม่เกิน 10
        printf("%d", i);                // แสดงค่า i
        i += 2;                         // เพิ่มทีละ 2 (เลขคู่ถัดไป)
    }
    printf("\nEnd of loop\n");      // แสดงข้อความปิดท้าย

    return 0;
}