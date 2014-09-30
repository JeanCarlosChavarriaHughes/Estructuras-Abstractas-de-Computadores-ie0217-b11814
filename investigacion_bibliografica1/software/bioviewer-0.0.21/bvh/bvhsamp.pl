

$numFrames = 40;
$numParts = 20*3;
$part = 42;
$pi = 3.14;

for ($y = 0; $y < $numFrames; $y++) {
for ($z = 0; $z < $numParts; $z++) {

$wave = (($y/$numFrames)*2*$pi);
if ($z == $part) { print "$wave ";} 
#elsif ($z == $part+3) { print "$wave "; }
else { print "0.0 "; }


}
print "\n";
}
