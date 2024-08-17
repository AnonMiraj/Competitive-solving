
import random

def generate_string(n):
    return ''.join(random.choice(['<', '>']) for _ in range(n))

strings = [generate_string(10) for _ in range(100)]

print(100)
for string in strings:
    print(10)
    print(string)
