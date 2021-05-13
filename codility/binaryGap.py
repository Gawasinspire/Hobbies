# you can write to stdout for debugging purposes, e.g.
# print("this is a debug message")
# https://codility.com/media/train/Iterations.pdf

## problem description:

'''
A binary gap within a positive integer N is any maximal sequence of consecutive zeros that is surrounded by ones at both ends in the binary representation of N.

For example, number 9 has binary representation 1001 and contains a binary gap of length 2. The number 529 has binary representation 1000010001 and contains two binary gaps: one of length 4 and one of length 3. The number 20 has binary representation 10100 and contains one binary gap of length 1. The number 15 has binary representation 1111 and has no binary gaps. The number 32 has binary representation 100000 and has no binary gaps.

Write a function:

    def solution(N)

that, given a positive integer N, returns the length of its longest binary gap. The function should return 0 if N doesn't contain a binary gap.

For example, given N = 1041 the function should return 5, because N has binary representation 10000010001 and so its longest binary gap is of length 5. Given N = 32 the function should return 0, because N has binary representation '100000' and thus no binary gaps.

Write an efficient algorithm for the following assumptions:

        N is an integer within the range [1..2,147,483,647].

'''

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
