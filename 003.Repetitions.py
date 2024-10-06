dna = input()

counter = 1
max_repetition_len = 1

for index in range(1, len(dna)):
    if dna[index] == dna[index - 1]:
        counter += 1
    else:
        counter = 1
    if counter >max_repetition_len:
        max_repetition_len = counter

print(max_repetition_len)
