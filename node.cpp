#include "node.h"

// Hàm thực thi việc đúc ra một Node mới
Node* taoNode(int id, string hoTen, int namSinh, int namMat, string voChong) {
    // 1. Cấp phát động một vùng nhớ mới cho Node
    Node* p = new Node;
    
    // 2. Gán dữ liệu cá nhân vào phần "ruột"
    p->id = id;
    p->hoTen = hoTen;
    p->namSinh = namSinh;
    p->namMat = namMat;
    p->voChong = voChong;
    
    // 3. Khởi tạo các con trỏ
    // Người mới sinh ra/mới nhập vào chưa nối với ai cả, nên các sợi dây phải ngắt đi (gán nullptr)
    p->cha = nullptr;
    p->me = nullptr;
    p->next = nullptr;
    
    // Trả về địa chỉ của Node vừa tạo
    return p;
}