#!/usr/bin/perl

unlink <*.html>;

while (<screenshotb*.jpg>) {

$c = $_;
$c =~ s/screenshotb//;
$c =~ s/.jpg//;
$name = "screenshot";
$nameb= "screenshotb";

$b=$c-1;
$d=$c+1;
$d=$d+1;

open(PAGE, ">>$name$c.html");

print "$name$c.html\n";

#print PAGE "<META HTTP-EQUIV=\"refresh\" content=\"2;$name$d.html\">";
print PAGE "<img src=\"$nameb$c.jpg\">\n";
print PAGE "<img src=\"$name$c.jpg\">\n";
print PAGE "<p><a href=\"$name$b.html\">$name$b</a>|<a href=\"$name$d.html\">$name$d</a></p>\n";
print PAGE "<p><a href=\"http://bioviewer.sourceforge.net\">Bioviewer Home</a>\n";
print PAGE "<br><br<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><img src=\"$nameb$d.jpg\">";
print PAGE "<img src=\"$name$d.jpg\">";

close PAGE;
}
