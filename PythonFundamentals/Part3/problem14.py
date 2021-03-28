#Create a file called numbers.txt 
#Write numbers 1 to 100, at each line
num_files = open('numbers.txt','w')
for i in range(1, 101):
    num_files.write(f"{str(i)}\n")
num_files.close()

