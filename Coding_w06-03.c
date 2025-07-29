#include <stdio.h> // สำหรับฟังก์ชัน printf

int main() {
    // กำหนดค่าเริ่มต้นของตัวแปรตามโจทย์
    int x = 12;
    int y = 7;
    int z = 12;

    printf("โจทย์: กำหนดให้ x = 12, y = 7, z = 12;\n\n");

    // ข้อ 1: x > y
    int expression_1 = (x > y);
    printf("1. x > y\n");
    printf("   วิธีคิด: %d > %d คือ %d\n", x, y, expression_1);
    printf("   ผลลัพธ์: %s\n\n", expression_1 ? "True" : "False"); // แสดงเป็น True/False

    // ข้อ 2: x < z
    int expression_2 = (x < z);
    printf("2. x < z\n");
    printf("   วิธีคิด: %d < %d คือ %d\n", x, z, expression_2);
    printf("   ผลลัพธ์: %s\n\n", expression_2 ? "True" : "False");

    // ข้อ 3: x == z
    int expression_3 = (x == z);
    printf("3. x == z\n");
    printf("   วิธีคิด: %d == %d คือ %d\n", x, z, expression_3);
    printf("   ผลลัพธ์: %s\n\n", expression_3 ? "True" : "False");

    // ข้อ 4: x != y
    int expression_4 = (x != y);
    printf("4. x != y\n");
    printf("   วิธีคิด: %d != %d คือ %d\n", x, y, expression_4);
    printf("   ผลลัพธ์: %s\n\n", expression_4 ? "True" : "False");

    // ข้อ 5: !(2*5 >= y) || (5 != (5/3))
    // ใน C: ! คือ NOT, || คือ OR
    // 5/3 ใน C จะเป็นการหารจำนวนเต็ม ผลลัพธ์คือ 1 (ไม่ใช่ 1.66...)
    // (5 != (5/3)) คือ (5 != 1) ซึ่งคือ True (1)
    // (2*5 >= y) คือ (10 >= 7) ซึ่งคือ True (1)
    // !(True) คือ False (0)
    // False || True คือ True (1)
    int part1_expr5 = (2 * 5 >= y);
    int part2_expr5 = (5 != (5 / 3)); // 5 / 3 = 1 (Integer division)
    int expression_5 = (!part1_expr5 || part2_expr5);

    printf("5. !(2*5 >= y) || (5 != (5/3))\n");
    printf("   วิธีคิด: \n");
    printf("     ส่วนแรก: (2*5 >= y) คือ (10 >= %d) ซึ่งคือ %d\n", y, part1_expr5);
    printf("     !(ส่วนแรก) คือ !%d ซึ่งคือ %d\n", part1_expr5, !part1_expr5);
    printf("     ส่วนที่สอง: (5 != (5/3)) คือ (5 != %d) ซึ่งคือ %d (เนื่องจาก 5/3 ใน C คือ 1)\n", (5/3), part2_expr5);
    printf("     ผลรวม: %d || %d คือ %d\n", !part1_expr5, part2_expr5, expression_5);
    printf("   ผลลัพธ์: %s\n\n", expression_5 ? "True" : "False");

    // ข้อ 6: !(x < y)
    int part1_expr6 = (x < y);
    int expression_6 = !(x < y);
    printf("6. !(x < y)\n");
    printf("   วิธีคิด: \n");
    printf("     (x < y) คือ (%d < %d) ซึ่งคือ %d\n", x, y, part1_expr6);
    printf("     !(%d) คือ %d\n", part1_expr6, expression_6);
    printf("   ผลลัพธ์: %s\n\n", expression_6 ? "True" : "False");

    // ข้อ 7: (x + y) > (z * 2)
    int part1_expr7 = (x + y);
    int part2_expr7 = (z * 2);
    int expression_7 = (part1_expr7 > part2_expr7);
    printf("7. (x + y) > (z * 2)\n");
    printf("   วิธีคิด: \n");
    printf("     (x + y) คือ (%d + %d) = %d\n", x, y, part1_expr7);
    printf("     (z * 2) คือ (%d * 2) = %d\n", z, part2_expr7);
    printf("     เปรียบเทียบ: %d > %d คือ %d\n", part1_expr7, part2_expr7, expression_7);
    printf("   ผลลัพธ์: %s\n\n", expression_7 ? "True" : "False");

    // ข้อ 8: (x % 2 == 0) || (y % 2 == 1)
    int part1_expr8 = (x % 2 == 0);
    int part2_expr8 = (y % 2 == 1);
    int expression_8 = (part1_expr8 || part2_expr8);
    printf("8. (x %% 2 == 0) || (y %% 2 == 1)\n"); // ใช้ %% เพื่อพิมพ์ %
    printf("   วิธีคิด: \n");
    printf("     ส่วนแรก: (x %% 2 == 0) คือ (%d %% 2 == 0) ซึ่งคือ %d (12 หาร 2 ลงตัว คือ True)\n", x, part1_expr8);
    printf("     ส่วนที่สอง: (y %% 2 == 1) คือ (%d %% 2 == 1) ซึ่งคือ %d (7 หาร 2 เหลือเศษ 1 คือ True)\n", y, part2_expr8);
    printf("     ผลรวม: %d || %d คือ %d\n", part1_expr8, part2_expr8, expression_8);
    printf("   ผลลัพธ์: %s\n\n", expression_8 ? "True" : "False");

    // ข้อ 9: (x > y) && (z < y)
    int part1_expr9 = (x > y);
    int part2_expr9 = (z < y);
    int expression_9 = (part1_expr9 && part2_expr9);
    printf("9. (x > y) && (z < y)\n");
    printf("   วิธีคิด: \n");
    printf("     ส่วนแรก: (x > y) คือ (%d > %d) ซึ่งคือ %d (12 > 7 คือ True)\n", x, y, part1_expr9);
    printf("     ส่วนที่สอง: (z < y) คือ (%d < %d) ซึ่งคือ %d (12 < 7 คือ False)\n", z, y, part2_expr9);
    printf("     ผลรวม: %d && %d คือ %d\n", part1_expr9, part2_expr9, expression_9);
    printf("   ผลลัพธ์: %s\n\n", expression_9 ? "True" : "False");

    return 0; // บอกว่าโปรแกรมทำงานเสร็จสมบูรณ์
}