# STACKQUEUE005 - PREFIX TO POSTFIX


def pre_to_pos(str):
    res = []  # Luu gia tri toan tu
    operators = set(['+', '-', '*', '/'])
    str = str[::-1]  #dao nguoc chuoi dau vao
    for i in str:
        if i in operators:
            # pop() 2 gia tri tu res
            a = res.pop()
            b = res.pop()
            # ket hop operand1 + operand2 + operator
            temp = a + b + i
            res.append(temp)
        else:
            res.append(i)


    return res

if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        str = input()
        print(*pre_to_pos(str))