# jam

60% layout keyboard with usb hub

![20260211_210944093](https://github.com/user-attachments/assets/926918b1-7ced-40d9-8995-fa9ffdb6b42a)

## QMKのセットアップ

[build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) を参考に、qmkの実行環境を作成する

## 書き込み

1. リポジトリをqmkのホームフォルダにcloneする

```sh
cd path/to/qmk_firmware/keyboards # 自分のQMK Home
git clone https://github.com/nattoujam/jamkey
```

2. コンパイルする

```sh
qmk compile -kb jamkey/jam -km default
```

3. マイコンをPCと接続する

4. 書き込みする

```sh
qmk flash -kb jamkey/jam -km default
```

## キーマップの変更方法

[remapのキーボードをカスタマイズ](https://remap-keys.app/configure) から可能です。

jsonファイルは [jam.json](https://github.com/nattoujam/jamkey/blob/main/jam/jam.json) を使用してください。
