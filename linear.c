#include <stdio.h>
int serach(int a[], int n, int val)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == val)
        {
            return i + 1;
        }
    }
    return -1;
}

int main()
{
    int a[5], i;
    int val;
    int n = sizeof(a) / sizeof(a[0]);
    for (i = 0; i < n; i++)
    {
        printf("Enter the elements: ");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    printf("Enter the elemnt to search: ");
    scanf("%d", &val);
    int res = serach(a, n, val);
    printf("The element of array are- %d ", val);
    printf("\n");
    if (res == -1)
    {
        printf("The element is not in array");
    }
    else
    {
        printf("The element is in position of: %d", res);
    }
}
/*#include <stdio.h>

void search(int a[], int n, int val) {
    int positions[n];
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == val) {
            positions[count++] = i + 1;
        }
    }

    if (count == 0) {
        printf("The element %d is not in the array.\n", val);
    } else {
        printf("The element %d is found at positions: ", val);
        for (int i = 0; i < count; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    }
}

int main() {
    int a[5], i;
    int val;
    int n = sizeof(a) / sizeof(a[0]);

    for (i = 0; i < n; i++) {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("The elements of the array are: ");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");

    printf("Enter the element to search: ");
    scanf("%d", &val);

    search(a, n, val);

    return 0;
}
*/
void fun(){
    int a=10;
}
