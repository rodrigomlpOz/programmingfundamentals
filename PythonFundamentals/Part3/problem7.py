#Create a dictionary with names and phone numbers
#Ask user for a name
#If name in the dictionary, print their phone number

people = {
    "Brian": "+1-617-495-1000",
    "David": "+1-949-468-2750"
}

name = input("Name: ")
if name in people:
    print(f"Number: {people[name]}")