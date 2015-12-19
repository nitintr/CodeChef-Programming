#!/usr/bin/env perl
my $t;
$t = <>;
while ($t > 0){
    my $ans = 0;
    $_ = <>;
    chomp;
    my @chars = split //;
    foreach (@chars){
       $ans += ( ord($_) - ord('0') );
    }
    print $ans."\n";
    $t = $t - 1;
}
