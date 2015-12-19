#!/usr/bin/env perl
my $t;
while (1){
    $t = <>;
    if($t == 42) {
        last;
    }
    print $t."\n";
}
