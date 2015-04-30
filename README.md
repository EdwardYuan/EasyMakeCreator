EasyMakefile
============


Create Makefile templates easily, it could help you avoid tab or space problems when make


### How to use it ###

#### Command Line ####

Type command "easymake" in the shell, with options bellow:

		-src"source dir"   identify the source dir, if not identified, use the current dir
		
		-include"header files dir"  identify the header files dir, empty if not identified
		
		-lib"libiary dir"    identify the libiary dir, empty if not identified
		
		-tool"tool name"     identify the tool name, such as "gcc", "g++" or "erl", etc
		
		-name"exec file name"    identify the project name or the executable file name, you must name the project, so this parameter could not be enpty
		
		-clean"clean files"    identify how to clean the temp files, or the temp file names
		
#### GUI ####

Choose tools name, source dir, include dir, lib dir in the main window, fill the clean file names and project name, then just click the "generate" button, if there are any errors, you will get the information at the bottom of the window. The user interface looks like bellow:

![](http://)


##Lisence##

This Project published under the GPL.v2 lisence
