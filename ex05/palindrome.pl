#!/usr/bin/perl

sub palindrome
{
    my ($name) = @_;
    my $i = 0;

    while($i < (length($name) - 1) / 2)
    {
        my $j = length($name) - 1;
        if (substr($name, $i, 1) eq substr($name, $j, 1))
        {
            $i++;
            $j--;
        }
        else
        {
            return (0);
        }
    }
    return (1)
}


print "Enter a string: ";
my $name = <STDIN>;
chomp $name;

if(palindrome($name))
{
    print "The string is a palindrome.\n";
}
else
{
    print "The string is not a palindrome.\n";
}