#include <stdio.h>
#include <math.h>
int main() {
    int a = 12345;
    int b = 0, backup_a;
    int j;
    backup_a = a;  // 保存原始值
    
    // 循环获取每一位数字并输出
    while (a > 0)
    {
        int digit = a % 10;  // 获取当前最后一位数字
        printf("%d\n", digit);  // 输出当前位
        b = b * 10 + digit;  // 将数字累加到b中，实现还原
        // b = pow(10, j) * digit + b;
        a = a / 10;  // 去掉最后一位
        // j++;
    }
    
    // 输出结果验证
    printf("还原后的b值: %d\n", b);
    printf("原始backup_a值: %d\n", backup_a);
    
    return 0;
}