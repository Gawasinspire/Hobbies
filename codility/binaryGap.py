# you can write to stdout for debugging purposes, e.g.
# print("this is a debug message")
# https://codility.com/media/train/Iterations.pdf
def solution(N):
    # write your code in Python 3.6
    
    # check inputs
    if not isinstance(N, int):
        raise TypeError("Give Integer")
    if N < 1:
        raise TypeError("input should be positive")
    if N > 2147483647:
        raise TypeError("input out of range")

    # N to bin_num
    temp = N
    bit_list = []
    while temp != 0:
        bit_list.append(temp%2)
        temp = temp//2
    bit_list.reverse()
    #print(bit_list)

    # variables assignment
    max_counter = None
    temp_counter = 0
    last_bit = None
    flag = 0
    
    for i in range(len(bit_list)):
        check_bit = bit_list[i]    #assigning last bit is true
        #print(bit_list[i],'t' ,temp_counter, 'm:',max_counter, last_bit, check_bit)
        if last_bit == None:
            max_counter = 0
        
        if last_bit == 1 and check_bit == 0:
            flag = 1
        elif last_bit == 0 and check_bit == 1:
            flag = 0
            if temp_counter > max_counter:
                max_counter = temp_counter
            elif max_counter == None:
                max_counter = 0
            temp_counter = 0        
        
        if flag == 1 and check_bit == 0: 
            temp_counter += 1
        
        last_bit = check_bit

    #print(max_counter)
    if max_counter is None:
        return 0
    else:
        return max_counter
