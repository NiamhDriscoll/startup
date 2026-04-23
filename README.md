Hello there,
this is my startup app. It handles what happens when I start up my computer. However, if you decide to use it, there are specific cases that need to be true.
First, running linux (my distro is arch)
Also, using xfce with the startx command 
Finally, have btop installed.

If you have all the conditions correct and decide to use a strange startup manager on Github, compile it like:

g++ startup.cpp -o [whatever you want it to be called]

or

clang++ startup.cpp -o [whatever you want it to be called]

and run it with ./[what you named it].
I named it 'x' so I save typing 2 charecters (this is what happens when you are lazy and an programmer. 
