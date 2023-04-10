def cb(row, inp):
    count = 0
    for i in range(len(inp)):
        legit = True
        for j in range(row + 1):
            if inp[j][i] == 2:
                legit = False
            elif i - j >= 0 and inp[row - j][i - j] == 2:
                legit = False
            elif i + j < len(inp) and inp[row - j][i + j] == 2:
                legit = False

        if legit and inp[row][i] != 1:
            cp = [row[:] for row in inp]
            cp[row][i] = 2
            if row == 7:
                count += 1
            else:
                count += cb(row + 1, cp)
    return count

if __name__ == "__main__":
    vct = []

    for i in range(8):
        in_str = input()
        tm = []
        for j in range(len(in_str)):
            if in_str[j] == '*':
                tm.append(1)
            else:
                tm.append(0)
        vct.append(tm)

    print(cb(0, vct))