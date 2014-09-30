#!/bin/bash



#mencoder -mf on:w=400:h=300:fps=30:type=jpeg -vop scale=253:240 -ovc lavc -lavcopts vcodec=mpeg1video:aspect=4/3 -o test.mpg \*.jpg
mencoder -mf on:w=400:h=300:fps=30:type=jpeg -vop scale=253:240 -ovc mpeg1 -o test.mpg \*.jpg
