#Create a file called days.txt with days of the week, one at each line
#Open the file and read the first line
days_file = open('days.txt','r')
print(days_file.readline(), end="")
days_file.close()


