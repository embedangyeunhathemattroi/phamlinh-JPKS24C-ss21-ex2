#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Ð?nh nghia c?u trúc sinh viên
    struct student {
        int age;
        char name[100];
        char phone[20];
    };

    // Kh?i t?o thông tin cho các sinh viên
    struct student student1 = {18, "Nguyen Van A", "09874477477"};
    struct student student2 = {19, "Nguyen Van C", "0987447444"};
    struct student student3;

    student3.age = 30;
    strcpy(student3.name, "Ma Kim Nguu");
    strcpy(student3.phone, "0976444229");

    // In thông tin ban d?u
    printf("Student 1: Age = %d, Name = %s, Phone = %s\n", student1.age, student1.name, student1.phone);
    printf("Student 2: Age = %d, Name = %s, Phone = %s\n", student2.age, student2.name, student2.phone);
    printf("Student 3: Age = %d, Name = %s, Phone = %s\n", student3.age, student3.name, student3.phone);

    // C?p nh?t tu?i c?a sinh viên 1
    student1.age = 53;
    printf("\nCap nhat lai tuoi cua sinh vien 1: Age = %d\n", student1.age);

    // Nh?p thông tin sinh viên m?i
    struct student student4;
    printf("\nMoi ban nhap vao ten sinh vien: ");
    fgets(student4.name, sizeof(student4.name), stdin);
    student4.name[strcspn(student4.name, "\n")] = '\0'; // Lo?i b? ký t? xu?ng dòng

    printf("Moi ban nhap vao tuoi sinh vien: ");
    scanf("%d", &student4.age);
    getchar(); // Xóa ký t? xu?ng dòng còn sót l?i

    printf("Moi ban nhap vao so dien thoai sinh vien: ");
    fgets(student4.phone, sizeof(student4.phone), stdin);
    student4.phone[strcspn(student4.phone, "\n")] = '\0'; // Lo?i b? ký t? xu?ng dòng

    // In thông tin sinh viên m?i
    printf("\nThong tin sinh vien vua nhap:\n");
    printf("Ten: %s\n", student4.name);
    printf("Tuoi: %d\n", student4.age);
    printf("So dien thoai: %s\n", student4.phone);

    return 0;
}

