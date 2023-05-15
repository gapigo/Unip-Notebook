import json
path_database = './database.json'

def load_json() -> dict:
    try:
        with open('database.json') as f:
            data = json.load(f)
            return data
    except FileNotFoundError:
        with open(path_database, 'w') as f:
            json.dump({}, f)
            return dict()

def write_json(database: dict):
    with open(path_database, 'w') as f:
        json.dump(database, f)

def get_clientes():
    database: dict = load_json()
    return database.get('clientes') or {}

def update_clientes(clientes: dict):
    database = load_json()
    database['clientes'] = clientes
    write_json(database)

def get_produtos():
    ...

def update_produtos(produtos: dict):
    ...

def get_vendas():
    ...

def update_vendas(vendas: dict):
    ...