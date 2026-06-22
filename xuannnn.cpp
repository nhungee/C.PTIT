#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Product {
    int id;
    char name[100];
    int price;
    struct Product* next;
} Product;

// Hàm thêm sản phẩm vào đầu danh sách
void addProduct(Product** head, Product* newProduct) {
    newProduct->next = *head;
    *head = newProduct;
}

// Hàm sửa sản phẩm theo tên
void editProduct(Product* head, const char* targetName, Product* updatedProduct) {
    Product* current = head;
    while (current != NULL) {
        if (strcmp(current->name, targetName) == 0) {
            current->id = updatedProduct->id;
            strcpy(current->name, updatedProduct->name);
            current->price = updatedProduct->price;
            break;
        }
        current = current->next;
    }
}

// Hàm sắp xếp sản phẩm theo giá giảm dần
void sortProducts(Product** head) {
    if (*head == NULL || (*head)->next == NULL) return;

    Product* sorted = NULL;

    while (*head != NULL) {
        Product* maxPrev = NULL;
        Product* maxNode = *head;
        Product* prev = *head;
        Product* current = (*head)->next;

        while (current != NULL) {
            if (current->price > maxNode->price) {
                maxPrev = prev;
                maxNode = current;
            }
            prev = current;
            current = current->next;
        }

        // Gỡ node maxNode ra khỏi danh sách gốc
        if (maxNode == *head) {
            *head = (*head)->next;
        } else {
            maxPrev->next = maxNode->next;
        }

        // Thêm vào danh sách đã sắp xếp
        maxNode->next = sorted;
        sorted = maxNode;
    }

    *head = sorted;
}

// Hàm hiển thị danh sách sản phẩm
void printProducts(Product* head) {
    Product* current = head;
    while (current != NULL) {
        printf("%d %s %d\n", current->id, current->name, current->price);
        current = current->next;
    }
}

// Hàm tạo sản phẩm mới từ dữ liệu nhập vào
Product* createProduct(int id, const char* name, int price) {
    Product* p = (Product*)malloc(sizeof(Product));
    p->id = id;
    strcpy(p->name, name);
    p->price = price;
    p->next = NULL;
    return p;
}

int main() {
    Product* head = NULL;
    int choice;

    while (1) {
        scanf("%d", &choice);
        if (choice == 1) {
            int count;
            scanf("%d", &count);
            printf("%d\n", count);
            for (int i = 0; i < count; i++) {
                int id, price;
                char name[100];
                scanf("%d", &id);
                getchar();
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = '\0';
                scanf("%d", &price);
                Product* p = createProduct(id, name, price);
                addProduct(&head, p);
            }
        } else if (choice == 2) {
            char targetName[100];
            getchar();
fgets(targetName, sizeof(targetName), stdin);
            targetName[strcspn(targetName, "\n")] = '\0';
            printf("%s\n", targetName);
            int id, price;
            char newName[100];
            scanf("%d", &id);
            getchar();
            fgets(newName, sizeof(newName), stdin);
            newName[strcspn(newName, "\n")] = '\0';
            scanf("%d", &price);
            Product* updated = createProduct(id, newName, price);
            editProduct(head, targetName, updated);
            free(updated); // free sau khi copy
        } else if (choice == 3) {
            sortProducts(&head);
            printProducts(head);
            break;
        }
    }

    // Giải phóng bộ nhớ
    Product* current = head;
    while (current != NULL) {
        Product* tmp = current;
        current = current->next;
        free(tmp);
    }

    return 0;
}
