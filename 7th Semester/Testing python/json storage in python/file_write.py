import json

database = {
    "clientes": {
        'ricardon': '1234',
        'guardion': '2469',
    },
    "produtos": {
        'abacate': 'no teo cool'
    },
    "vendas": {
        'abril': 'muitas vendas',
        'maio': 'falimos'
    }
}

with open('database.json', 'w') as f:
    json.dump(database, f)
