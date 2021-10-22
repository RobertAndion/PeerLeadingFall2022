import json
import requests as rq
# https://www.thecocktaildb.com/api.php?ref=apilist.fun

def searchByDrinkName(name):
    try:
        res = rq.get('http://www.thecocktaildb.com/api/json/v1/1/search.php?s=' + name)
        return res.json()
    except:
        print("API failed to find anything.")

def getRandomDrink():
    try:
        res = rq.get('http://www.thecocktaildb.com/api/json/v1/1/random.php')
        return res.json()
    except Exception as error:
        print("API failed to find anyting")

def printDrinkInfo(jsonPackage):
    print('\n\n\n\n')
    print("Drink: " + jsonPackage['drinks'][0]['strDrink'])
    print("Has alcohol: " + jsonPackage['drinks'][0]['strAlcoholic'])
    print("Ingredients:")
    for i in range(1,21):
        try:
            if(jsonPackage['drinks'][0]['strIngredient' + str(i)]) != None:
                print('\t' + jsonPackage['drinks'][0]['strIngredient' + str(i)] + ' : ' + jsonPackage['drinks'][0]['strMeasure' + str(i)])
        except:
            break
    print("\nHow to make: \n" + jsonPackage['drinks'][0]['strInstructions'] + '\n')

def run():
    while True:
        selection = input("Please select from the following: \n1 - Search by name\n2 - Random drink\n")
        if selection == '1':
            selection = input("Please enter the name to search.\n")
            printDrinkInfo(searchByDrinkName(selection))
        elif selection == '2':
            printDrinkInfo(getRandomDrink())
        else:
            print("Please enter a valid number.")
        cont = input('Enter y to search again, anything else to quit.')
        if cont != 'y':
            break

if __name__ == "__main__":
    run()