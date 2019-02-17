import sys
import os
import json

with open(sys.argv[1]) as jsonFile:
    filenames = json.load(jsonFile)
    for filename in filenames:
        with open(filename,'rb') as f:
            print f.read()

