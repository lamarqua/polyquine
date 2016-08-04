import sys

with open(sys.argv[1]) as f:
	s = f.readlines()
	s = ''.join(s[4:21])
	print(s.encode('hex'))

## cut