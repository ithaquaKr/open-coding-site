# STACKQUEUE0019 - Tính giá trị của biểu thức tiền tố

"""
 Gap loi gi do roi
"""

def is_operand(c):
    return c.isdigit()
 
 
def evaluate(str):
    stack = []
    # iterate over the string in reverse order
    for c in str[::-1]:
        # push operand to stack
        if is_operand(c):
            stack.append(int(c))
        else:
            # pop values from stack can calculate the result
            # push the result onto the stack again
            o1 = stack.pop()
            o2 = stack.pop()
            if c == '+':
                stack.append(o1 + o2)
            elif c == '-':
                stack.append(o1 - o2)
            elif c == '*':
                stack.append(o1 * o2)
            elif c == '/':
                stack.append(o1 / o2)
    return stack.pop()

if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        str = input()
        print(evaluate(str))
