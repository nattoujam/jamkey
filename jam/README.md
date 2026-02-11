# jam

60% layout keyboard

![20260211_210944093](https://github.com/user-attachments/assets/926918b1-7ced-40d9-8995-fa9ffdb6b42a)

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
