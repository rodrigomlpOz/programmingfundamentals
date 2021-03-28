#create a spreadsheet file and put 10 of your favorite desserts in the first column
#download file with .csv extension
#open CSV file
#print the elements of the file
import csv

with open("desserts.csv", "r") as file:
    reader = csv.reader(file)
    for row in reader:
        print(row[0])