# NGÀY THÁNG

-   Bộ phận chống buôn lậu và làm hàng giả chặn được một thông báo đã mã hóa của nhóm nghi can đang bị theo dõi. Chìa khóa giải mã thông báo nằm ở đoạn thông báo ngày tháng năm và có dạng YYYY MM DD, trong đó Y, M, D là các ký tự số. Khóa để giải mã là một ngày, tháng năm đúng nhận được bằng cách đổi chổ các ký tự số trong đoạn nói trên.

-   Một ngày tháng năm là đúng nếu 3 số nhận được đều lớn hơn không và tương ứng với một ngày trong lịch đang dùng. Với năm nhuận tháng 2 có 29 ngày. Năm nhuận là năm chia hết cho 400 hoặc không chia hết cho 100 nhưng chia hết cho 4. Riêng những năm lớn hơn 0 và là bội của 3328 là những năm nhuận đặc biệt, tháng 2 sẽ có 30 ngày.

## YÊU CẦU

-   Cho đoạn thông báo tách được. Hãy xác định số lượng ngày tháng hợp lý có thể rút ra từ thông báo và đưa ra các ngày tháng đó theo thứ tự tăng dần trên lịch. Ngày tháng năm đưa ra dưới dạng YYYY MM DD (xem ví dụ).

-   Dữ liệu: Vào từ thiết bị nhập chuẩn gồm một dòng chứa xâu 10 ký tự dạng:

    -   YYYY MM DD.

-   Kết quả: Đưa ra thiết bị xuất chuẩn:

    -   Dòng đầu tiên chứa một số nguyên – số lượng ngày tháng hợp lệ,
    -   Mỗi dòng trong các dòng sau – một ngày tháng hợp lệ tìm được. Thông tin đưa ra theo thứ tự tăng dần trên lịch.

## VÍ DỤ

| INPUT       | OUTPUT       |
| ----------- | ------------ |
| `001 01 01` | `16`         |
|             | `0001 01 01` |
|             | `0001 01 10` |
|             | `0001 10 01` |
|             | `0001 10 10` |
|             | `0010 01 01` |
|             | `0010 01 10` |
|             | `0010 10 01` |
|             | `0010 10 10` |
|             | `0100 01 01` |
|             | `0100 01 10` |
|             | `0100 10 01` |
|             | `0100 10 10` |
|             | `1000 01 01` |
|             | `1000 01 10` |
|             | `1000 10 01` |
|             | `1000 10 10` |
