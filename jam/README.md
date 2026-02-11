# jam
60% layout keyboard

## flash
setup workspace

```bash
qmk setup
git clone https://github.com/natoujam/jam ~/qmk_firmware/keyboard
```

compile and flash

```bash
qmk compile -kb jamkey/jam -km via
qmk flash -kb jamkey/jam -km via
```
