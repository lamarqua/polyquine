#!/usr/bin/perl -0777

# local $/=undef;
# binmode STDIN;
$string = <>;

$string =~ s/(.)/sprintf("%X", ord($1))/egs;
print $string;