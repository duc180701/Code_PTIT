import itertools


s = input()

for i in itertools.permutations(s, len(s)):
    print(''.join(i))
