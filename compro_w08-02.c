#include <stdio.h>

 int main() {
        int start, stop; // ประกาศตัวแปรเก็บค่าเริ่มต้นและค่าสุดท้าย

        // รับค่าจากผู้ใช้
        printf("Enter start number: ");
        scanf("%d", &start); // อ่านค่าเริ่มต้นจากแป้นพิมพ์

        printf("Enter stop number: ");
        scanf("%d", &stop); // อ่านค่าสุดท้ายจากแป้นพิมพ์

        // แสดงข้อความยืนยันค่าเริ่มต้นและค่าสุดท้าย
        printf("Start number is %d and stop number is %d\n", start, stop);

        // แสดงข้อความบรรทัด separator (ตามตัวอย่าง)
        printf("1ーーーーーーーーーーーーー\n");

        // แสดงลำดับตัวเลขจากค่าเริ่มต้นถึงค่าสุดท้าย
        printf("Sequence from start to stop: ");
        for (int i = start; i <= stop; i++) { // ใช้ for loop เพิ่มทีละ 1
            printf("%d ", i); // แสดงค่าแต่ละตัวในบรรทัดเดียวกัน
        }
        printf("\n"); // ขึ้นบรรทัดใหม่หลังแสดงลำดับตัวเลข

        // แสดงข้อความปิดท้าย
        printf("Thank you.\n");

        return 0;
}
