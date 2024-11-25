#include <stdio.h>

int main() {
    float a, b;
    int choice;
    printf("Nhap so thu nhat: ");
    scanf("%f", &a);
    printf("Nhap so thu hai: ");
    scanf("%f", &b);
    do {
    printf("\nCALCULATOR\n");
    printf("1. Tong 2 so\n");
    printf("2. Hieu 2 so\n");
    printf("3. Tich 2 so\n");
    printf("4. Thuong 2 so\n");
    printf("5. Thoat\n");
	printf("Lua chon cua ban: ");
    scanf("%d", &choice);
    switch (choice) {
    case 1:
    printf("Tong 2 so la: %.2f\n", a+b);
    break;
    case 2:
    printf("Hieu 2 so la: %.2f\n", a-b);
    break;
    case 3:
    printf("Tich 2 so là: %.2f\n", a*b);
    break;
    case 4:
    printf("Thuong 2 so la: %.2f\n", a/b);
    break;
	case 5:
    printf("Thoat chuong trinh!\n");
    break;
    default:
    printf("Lua chon không hop le! Vui long chon lai.\n");
    }
    } while (lua_chon != 5); 
    return 0;
}

