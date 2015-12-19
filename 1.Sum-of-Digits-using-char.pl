#!/usr/bin/env perl
my $t;
$t = <>;
while ($t > 0){
    my $ans = 0;
    my $n = <>;
    chomp($n);
    my @chars = split //, $n;
    foreach $a (@chars){
       $ans += ( ord($a) - ord('0') );
    }
    print $ans."\n";
    $t = $t - 1;
}
