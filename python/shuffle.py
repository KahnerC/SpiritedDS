import random

decksize = 30
deck1 = [0] * (decksize + 2)
deck2 = [0] * (decksize + 2)

deckshuffle = [0] * (decksize + 2)

for i in range(decksize):
    deckshuffle[i] = i + 1

print(deckshuffle)


swap1 = 0
swap2 = 0
swapcard1 = 0
swapcard2 = 0

for i in range(200):
    swap1 = random.randrange(300) % decksize;
    swap2 = random.randrange(300) % decksize;
    swapcard1 = deckshuffle[swap1]
    swapcard2 = deckshuffle[swap2]
    deckshuffle[swap1] = swapcard2
    deckshuffle[swap2] = swapcard1

for i in range(15):
    deck1[i] = deckshuffle[2 * i]

for i in range(15):
    deck2[i] = deckshuffle[2 * i + 1]

decktotal = deck1 + deck2
decktotal.sort()

print(deck1)
print(deck2)
print(decktotal)
