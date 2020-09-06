responses = ['Welcome to smart calculator.','My name is darcia:)','Thank you! Do revisit us.','Sorry, i was unable to solve your query:(']

def getVal(text):
    l = []
    for w in text.split(' '):
        try:
            l.append(float(w))
        except ValueError:
            pass
    return l
def add(a,b):
    return a+b
def mult(a,b):
    return a*b
def div(a,b):
    return a/b
def sub(a,b):
    return a-b
def oops():
    print(responses[3])
def close():
    print(responses[2])
    input("Press Enter to quit ")
    exit()
def name():
    print(responses[1])
def hcf(a,b):
    h = min(a,b)
    while h >= 1:
        if a%h==0 and b%h==0:
            return h
        h-=1
def lcm(a,b):
    l = max(a,b)
    while l <= a*b:
        if l%a==0 and l%b==0:
            return l
        l+=1
def functions():
    print("The functions which we are providing are:-")
    print("1. LCM and HCF of two numbers.")
    print("2. Addition and Subtraction between two numbers.")
    print("3. Division and Multiplication of two numbers.")
    print("We expect some logical queries from the user which involves functions mentioned.")
    print("We hope that the user gets all their queries clear.")
    print()
operations = {'lcm':lcm,'hcf':hcf,'addition':add,'add':add,'plus':add,'minus':sub,'subtract':sub,'subtraction':sub,'div':div,'divide':div,'division':div,'multiply':mult,'multiplication':mult}
commands = {'exit':close,'close':close,'quit':close,'name':name}

print(responses[0])
print(responses[1])
functions()

while True:
    print()
    query = input("Enter your Query ")
    for q in query.split(' '):
        if q.lower() in operations.keys():
            try:
                l = getVal(query)
                r = operations[q.lower()](l[0],l[1])
                print(r)
            except:
                print("Something went Wrong:( Please try again later!")
            finally:
                break
        elif q.lower() in commands.keys():
            commands[q.lower()]()
    else:
        oops()
