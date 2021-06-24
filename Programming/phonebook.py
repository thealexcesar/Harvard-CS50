people = {
    "Alex": "+1479-658-6662",
    "David": "+1949-468-2750",
    "Bryan": "+1949-467-1000"
}

name = input("Name: ")
name = name.capitalize()
if name in people:
    print(f"Number: {people[name]} Name: {name}")
    
else:
    print("Not found!")
