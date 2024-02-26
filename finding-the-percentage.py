if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
  ## code from here
    ans=0.00
    for i in student_marks.keys():
        if query_name==i:
            ans=(sum(student_marks[i])/len(student_marks[i]))
    print("%.2f" %ans) ## printing till 2 decimal places
