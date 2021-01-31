def sentence_maker(phrase):
    capitalized = phrase.capitalize()
    interrogative = ("who", "what", "when", "why", "how")
    if phrase.startswith(interrogative):
        return "{}?".format(capitalized)
    else:
        return "{}.".format(capitalized)


results = []

while True:
    user_input = input("Say something: ")
    if user_input == "\end":
        break
    else:
        results.append(sentence_maker(user_input))

print(" ".join(results))