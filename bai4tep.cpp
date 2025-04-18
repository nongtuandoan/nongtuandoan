#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char HoTen[201];
    int Tuoi;
    double DiemTB;
} SinhVien;

typedef struct Node {
    SinhVien data;
    struct Node *next;
} Node;

typedef struct {
    Node *first;
    Node *last;
} Linkedlist;


Linkedlist *create_list() {
    Linkedlist *list = malloc(sizeof(Linkedlist));
    if (!list) {
        perror("Khong cap phat duoc bo nho cho danh sach");
        exit(EXIT_FAILURE);
    }
    list->first = NULL;
    list->last = NULL;
    return list;
}


Node *create_node(SinhVien data) {
    Node *node = malloc(sizeof(Node));
    if (!node) {
        perror("Khong cap phat duoc bo nho cho node");
        exit(EXIT_FAILURE);
    }
    node->data = data;
    node->next = NULL;
    return node;
}

void insert_to_last(Linkedlist *list, Node *node) {
    if (list->first == NULL) {
        list->first = node;
        list->last = node;
    } else {
        list->last->next = node;
        list->last = node;
    }
}


Node *search_node(Linkedlist *list, const char *HoTen) {
    Node *node = list->first;
    while (node != NULL) {
        if (strcmp(node->data.HoTen, HoTen) == 0)
            return node;
        node = node->next;
    }
    return NULL;
}


void input_SinhVien(SinhVien *SV) {
    printf("Nhap ho ten sinh vien: ");
    while (getchar() != '\n' && !feof(stdin)); 
    fgets(SV->HoTen, sizeof(SV->HoTen), stdin);
    SV->HoTen[strcspn(SV->HoTen, "\n")] = '\0';

    printf("Nhap tuoi: ");
    scanf("%d", &SV->Tuoi);

    printf("Nhap diem trung binh: ");
    scanf("%lf", &SV->DiemTB);
}


void input_list(Linkedlist *list, int n) {
    for (int i = 0; i < n; i++) {
        SinhVien SV;
        printf("\nSinh vien %d:\n", i + 1);
        input_SinhVien(&SV);
        insert_to_last(list, create_node(SV));
    }
}


void print_list(const Linkedlist *list) {
    int i = 1;
    Node *node = list->first;
    printf("\n%-5s %-25s %-10s %-10s\n", "STT", "Ho ten", "Tuoi", "Diem TB");
    while (node != NULL) {
        printf("%-5d %-25s %-10d %-10.2f\n", i++, node->data.HoTen, node->data.Tuoi, node->data.DiemTB);
        node = node->next;
    }
}


void write_binary_file(const Linkedlist *list, const char *filename) {
    FILE *f = fopen(filename, "wb");
    if (!f) {
        perror("Khong the mo file de ghi");
        return;
    }
    for (Node *node = list->first; node != NULL; node = node->next) {
        fwrite(&node->data, sizeof(SinhVien), 1, f);
    }
    fclose(f);
}

// C?p nh?t thông tin sinh viên theo tên
void update_student(Linkedlist *list) {
    char HoTen[201];
    printf("\nNhap ten sinh vien can sua: ");
    while (getchar() != '\n' && !feof(stdin)); // Xóa b? d?m
    fgets(HoTen, sizeof(HoTen), stdin);
    HoTen[strcspn(HoTen, "\n")] = '\0';

    Node *found = search_node(list, HoTen);
    if (!found) {
        printf("Khong tim thay sinh vien: %s\n", HoTen);
        return;
    }

    printf("1. Sua tuoi\n2. Sua diem trung binh\nNhap lua chon: ");
    int choice;
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Nhap tuoi moi: ");
        scanf("%d", &found->data.Tuoi);
    } else if (choice == 2) {
        printf("Nhap diem trung binh moi: ");
        scanf("%lf", &found->data.DiemTB);
    } else {
        printf("Lua chon khong hop le.\n");
    }
}


void add_student_to_end(Linkedlist *list) {
    printf("\nNhap thong tin sinh vien moi:\n");
    SinhVien SV;
    input_SinhVien(&SV);
    insert_to_last(list, create_node(SV));
}


void free_list(Linkedlist *list) {
    Node *current = list->first;
    while (current) {
        Node *tmp = current;
        current = current->next;
        free(tmp);
    }
    free(list);
}


int main() {
    int n;
    Linkedlist *list = create_list();

    printf("So luong sinh vien can nhap: ");
    scanf("%d", &n);

    input_list(list, n);
    print_list(list);
    write_binary_file(list, "DSACH.C");

    update_student(list);
    print_list(list);

    add_student_to_end(list);
    print_list(list);
    write_binary_file(list, "DSACH.C");

    free_list(list);
    return 0;
}
