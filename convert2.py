import sys

with open(sys.argv[1]) as f:
	s = f.readlines()
	# print ''.join(s[4:20])
	s = ''.join(s[4:22])
	print(s.encode('hex'))

## cut