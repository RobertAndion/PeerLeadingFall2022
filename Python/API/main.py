import json
import requests as rq

# Example for the full version in main-finished.py
def run():
    resp = rq.get('http://www.thecocktaildb.com/api/json/v1/1/random.php')
    # print(json.dumps(resp.json(), indent=4, sort_keys=True))
    data = resp.json()
    print(data["drinks"][0]["strDrink"])
    print(data["drinks"][0]["strInstructions"])

if __name__ == "__main__":
    run()