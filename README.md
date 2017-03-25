# xorcise

## behavior

1. read a byte
2. read another byte
3. output newest byte XOR second-newest byte
4. goto 2

## use

xorcise your cores!

```bash
./xorcise < /dev/zero | ./xorcise | ./xorcise | ./xorcise > /dev/null
```

## build

```bash
make
```
