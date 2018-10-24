# PrivEsc

/!\ To get a nice TTY :
```python -c 'import pty;pty.spawn("/bin/bash")'```
CTRL + Z
```stty raw -echo``` 
## Linux

### Checklist

* Checking sudo : ```sudo -l```
* Checking netstat : ```netstat -laputen```
* Checking process : ```ps -elf```
### Escaping rbash

```awk 'BEGIN {system("/bin/sh")}'```

### SSH Port fowarding 

Service listen on local on port 1234.

```ssh user@remotemachine-L 80:localhost:1234```

Now naviguate to localhost:80
### Binaries

Binaries that can be exploited : https://gtfobins.github.io

### MySQL

Execute command : ```mysql -u [user] -p -e "COMMAND HERE"``` 
## Windows

### Simple Tricks

* ```dir /ah``` to display hidden files
