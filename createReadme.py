import sys
import re

if len(sys.argv) == 1:
    print("Give a filename as an argument")
    exit(1)
elif len(sys.argv) > 2:
    print("Only 1 filename is needed")
    exit(1)
    
PROJECT_EULER_PREFX = "https://www.hackerrank.com/contests/projecteuler/challenges/euler"
HACKER_RANK_PREFIX = "https://projecteuler.net/problem="
GITHUB_LINK_PREFIX = "https://github.com/matthewReff/Project-Euler/blob/main/"

#shamelessly taken from kattis's official submission script
_LANGUAGE_GUESS = {
    'c': 'C',
    'c#': 'C#',
    'c++': 'C++',
    'cc': 'C++',
    'cpp': 'C++',
    'cs': 'C#',
    'cxx': 'C++',
    'go': 'Go',
    'h': 'C++',
    'hs': 'Haskell',
    'java': 'Java',
    'js': 'JavaScript',
    'm': 'Objective-C',
    'pas': 'Pascal',
    'php': 'PHP',
    'pl': 'Prolog',
    'py': 'Python',
    'rb': 'Ruby'
}

ignoredFileNames = ["createReadme.py"]
filename = sys.argv[1]
with open(filename) as fileObj:
    for line in fileObj.read().split():
        reg = re.search(r"(.*\/)(.+)$", line.strip()) # Remove any path information
        problemFileName = reg.group(2)
        if(problemFileName in ignoredFileNames):
            continue

        filename, extension = problemFileName.split(".")
        markdownRow = "|"
        markdownRow += "[" + filename + "]"
        markdownRow += "(" + PROJECT_EULER_PREFX + filename + ")"
        markdownRow += "|"
        markdownRow += "[" + filename + "]"
        markdownRow += "(" + HACKER_RANK_PREFIX + filename + ")"
        markdownRow += "|"
        markdownRow += "[" + _LANGUAGE_GUESS[extension.rstrip()] + "]"
        markdownRow += "(" + GITHUB_LINK_PREFIX + problemFileName.rstrip() + ")"
        markdownRow += "|"
        print(markdownRow)
