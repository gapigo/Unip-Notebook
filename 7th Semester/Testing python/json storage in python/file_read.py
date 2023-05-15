import json

dicionario = dict()
with open('database.json', 'r') as f:
    dicionario = json.load(f)
print(dicionario)    