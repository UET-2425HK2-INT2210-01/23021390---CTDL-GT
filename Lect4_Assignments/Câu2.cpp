// h(i) = (2i + 5) mod 11
// i           h(i) = (2i+5) mod 11        
// 12          7
// 44          5
// 13          9
// 88          5
// 23          7
// 94          6
// 11          5
// 39          6
// 20          1
// 16          4
// 5           4

// Insert table
// a. Xử lý va chạm bằng chaining

// 0.
// 1.  20 
// 2.  
// 3.
// 4.  16 -> 5
// 5.  44 -> 88 -> 11
// 6.  94 -> 39
// 7.  12 -> 23
// 8.
// 9.  13
// 10. 23

// b. Xử lý va chạm linear probing

// 0.  11
// 1.  39
// 2.  20
// 3.  5
// 4.  16
// 5.  44
// 6.  88
// 7.  12 
// 8.  23
// 9.  13
// 10. 94