def calc_media(lista):
    sum = 0
    count = 0
    for item in lista:
        sum += item
        count += 1
    print('{:.2f}'.format(sum/count))


if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    calc_media(student_marks[query_name])
