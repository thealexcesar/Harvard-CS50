import csv

file = open("phonebook.csv", "a")

name = input("Name: ")
name = name.capitalize()
number = input("Number: ")

writer = csv.writer(file)
writer.writerow([name, number])
file.close()