#create a spreadsheet file and put 10 of your favorite desserts in the first column (with some repetitive ones)
#in the first row of the column put the title of the column as dessert
# download file with .csv extension
#open CSV file
#print each dessert using the name of the column
import csv

desserts_count = dict()
with open("desserts.csv", "r") as file:
    reader = csv.DictReader(file)
    for row in reader:
       print(row['dessert'])
