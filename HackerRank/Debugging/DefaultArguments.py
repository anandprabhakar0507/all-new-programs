'''
Title     : Default Arguments
Subdomain : Debugging
Domain    : Python
Author    : Ahmedur Rahman Shovon
Created   : 08 July 2018
Problem   : https://www.hackerrank.com/challenges/default-arguments/problem
'''
def print_from_stream(n, stream=EvenStream()):
    stream.__init__()
    for _ in range(n):
        print(stream.get_next())
