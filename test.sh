#########################################################################
# File Name: test.sh
# Author: duqinglong
# mail: du_303412@163.com
# Created Time: Wed 18 Nov 2015 09:35:17 AM EST
#########################################################################
#!/bin/bash
while true; do
	./r > input
	./a < input > output.a
	./b < input > output.b
	diff output.a output.b
	if [ $? -ne 0 ] ; then break; fi
done
