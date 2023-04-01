import requests

name = input("Enter the name of a Pokemon: ")
name = name.lower()

url = f"https://pokeapi.co/api/v2/pokemon/{name}"

response = requests.get(url)

if response.status_code == 200:
    data = response.json()
    print(f"Name:{data['name'].capitalize()}")
    print("Abilities:")
    for ability in data['abilities']:
        print(f"- {ability['ability']['name'].capitalize()}")
else:
    print("No Pokemon found!")


