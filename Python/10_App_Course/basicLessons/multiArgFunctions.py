# two args

def add(a, b):
    return a + b


print(add(4, 5))


# arbitrary number of of args, returns a tuple of the args
def mean(*args):
    return sum(args) / len(args)


print(mean(1, 2, 3, 4, 5, 6))


# arbitrary number of keyword args, returns a dictionary of the args
def find_winner(**kwargs):
    return kwargs


print(find_winner(Andy=17, Marry=19, Sim=45, Kae=34))
