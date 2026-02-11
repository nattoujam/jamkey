# jam_drei

![jam_drei](imgur.com image replace me!)

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
qmk compile -kb jamkey/jamdrei -km default
```

3. マイコンをPCと接続する
   - RP2040-zeroのBOOTボタンを押しながらRESETボタンを押す
   - USBストレージとして認識されればOK

4. 書き込みする

```sh
qmk flash -kb jamkey/jamdrei -km default
```

## キーマップの変更方法

[remapのキーボードをカスタマイズ](https://remap-keys.app/configure) から可能です。

jsonファイルは [jamdrei.json](https://github.com/nattoujam/jamkey/blob/main/jamdrei/jamdrei.json) を使用してください。
