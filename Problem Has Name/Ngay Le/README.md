# NGÀY LỄ

-   Một số ngày lễ được kỷ niệm vào một ngày tháng cố định nào đó trong năm như ngày tình nhân luôn luôn là ngày 14/02 hàng năm. Tuy nhiên cũng có một số ngày kỷ niệm được gắn với "ngày thứ" và tuần của mỗi tháng. Ví dụ như ngày của mẹ (Mother's day) là ngày chủ nhật thứ nhì trong tháng 5. Với năm 2017, ngày của mẹ là ngày 14/05/2017 nhưng trong năm 2016 lại là ngày 08/05/2016.

## YÊU CẦU

-   Hãy viết chương trình tính ngày tháng năm cho ngày kỷ niệm.

-   Input gồm 4 con số nguyên dương trên một hàng với ý nghĩa và thứ tự lần lượt là:

    -   Số x, cho biết ngày lễ được kỷ niệm vào lần mấy trong tháng của "ngày thứ" đó.
    -   Số y, cho biết ngày lễ kỷ niệm vào "thứ" mấy trong tuần. y sẽ mang các giá trị lần lượt từ 2 đến 8. Tương ứng với, thứ hai, thứ ba, thứ tư, thứ năm, thứ sáu, thứ bảy và chủ nhật.
    -   Số i, cho biết ngày đó được kỷ niệm vào tháng mấy.
    -   Số j, cho biết năm nay là năm bao nhiêu.

-   Output
    -   Cho biết ngày lễ sẽ được kỷ niệm vào ngày bao nhiêu của tháng i - năm j. Nếu không có ngày như vậy thì kết quả là -1.

# VÍ DỤ

|        INPUT         | OUTPUT | GIẢI THÍCH                                                                                           |
| :------------------: | :----: | :--------------------------------------------------------------------------------------------------- |
| 3<br>4<br>11<br>2016 |   16   | Tháng 11, năm 2016 có 5 ngày thứ tư. Trong đó thứ tư thứ 3 là ngày 16.                               |
| 5<br>5<br>11<br>2016 |   -1   | Tháng 11 năm 2016 chỉ có 4 ngày thứ năm. Như vậy lễ kỷ niệm vào ngày thứ năm thứ 5 sẽ không diễn ra. |
