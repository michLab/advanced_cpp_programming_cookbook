# Notes
## How to...
### Display information about object files?
Use _objdump_ program, eg.:
```bash
 objdump -d example01 | grep -ia -e "main>:" -A12
```