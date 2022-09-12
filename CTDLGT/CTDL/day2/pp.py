
def fibo(k):
    if k == 1:
        return k,0;
    else:
        (i,j) = fibo(k-1);
        return i+j,i


if __name__ == "__main__":
    k = int(input())
    print(fibo(k))