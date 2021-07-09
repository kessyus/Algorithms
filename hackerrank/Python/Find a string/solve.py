def count_substring(string, sub_string):
    size_str = len(string)
    size_sub = len(sub_string)
    count = 0
    for i in range(size_str - size_sub + 1):
        if (sub_string == string[i:(i+size_sub)]):
            count += 1
    return count

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    count = count_substring(string, sub_string)
    print(count)