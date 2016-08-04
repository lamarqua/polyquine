import sys

with open(sys.argv[1]) as f:
	s = f.read()
	pattern = "quineData = \""
	if len(sys.argv) >= 2:
		pattern = sys.argv[2]
	s = s[:s.find(pattern)]
	print(s.encode('hex'))

## cut