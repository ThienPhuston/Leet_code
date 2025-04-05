 Main Idea (Ý tưởng chính):
Bài toán yêu cầu tìm căn bậc hai của một số nguyên không âm x mà không sử dụng hàm căn bậc hai có sẵn trong thư viện. Kết quả trả về phải là phần nguyên của căn bậc hai (ví dụ: nếu căn bậc hai của 8 là 2.828, kết quả trả về sẽ là 2).

Cách giải quyết:
Dùng phương pháp tìm kiếm nhị phân:

Khởi tạo hai chỉ số l (left) và r (right) là 0 và x tương ứng.

Tiến hành tìm kiếm nhị phân để xác định căn bậc hai của x.

Trong mỗi lần lặp:

Tính middle là phần tử ở giữa đoạn [l, r].

Nếu middle * middle == x, thì middle chính là căn bậc hai của x.

Nếu middle * middle < x, ta cần tìm trong đoạn bên phải, cập nhật l = middle + 1.

Nếu middle * middle > x, ta cần tìm trong đoạn bên trái, cập nhật r = middle - 1.

Khi kết thúc vòng lặp, nếu không tìm thấy chính xác căn bậc hai, trả về r (bởi vì r sẽ là giá trị gần nhất dưới căn bậc hai của x).

Chú ý:

Sử dụng kiểu dữ liệu 1ll để tránh tràn số khi tính middle * middle.

🧾 Ví dụ minh họa:
Ví dụ 1:
cpp
Sao chép
Chỉnh sửa
x = 8
→ Tìm căn bậc hai của 8.
→ Lặp qua các giá trị của `middle`: 0, 1, 2, 3.
→ Kết quả cuối cùng: `2` (vì căn bậc hai của 8 là khoảng 2.828, và phần nguyên là 2).
Ví dụ 2:
cpp
Sao chép
Chỉnh sửa
x = 16
→ Tìm căn bậc hai của 16.
→ Lặp qua các giá trị của `middle`: 0, 1, 2, 3, 4.
→ Kết quả cuối cùng: `4` (vì căn bậc hai của 16 là 4).
Ví dụ 3:
cpp
Sao chép
Chỉnh sửa
x = 10
→ Tìm căn bậc hai của 10.
→ Kết quả cuối cùng: `3` (vì căn bậc hai của 10 là khoảng 3.162, và phần nguyên là 3).
✅ Kết luận:
Độ phức tạp thời gian: O(log x), vì mỗi lần lặp, ta cắt đôi khoảng tìm kiếm.

Độ phức tạp không gian: O(1), vì chỉ sử dụng một số biến tạm.

Phương pháp này hiệu quả và chính xác, giúp tính căn bậc hai nhanh chóng mà không cần sử dụng thư viện hỗ trợ.
