import sys

with open(sys.argv[1]) as f:
	s = f.read()
	s = s[:s.find("quineData = \"")]
	print(s.encode('hex'))

## cut