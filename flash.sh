#!/usr/bin/env bash

qmk json2c keymap.json > ./keyboards/kyria/keymaps/default/keymap_gen.h \
&& make kyria/rev1:default:flash
