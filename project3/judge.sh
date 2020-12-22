#!/bin/bash
###
# @Github: https://github.com/Certseeds/CS323_Compilers_2020F
# @Organization: SUSTech
# @Author: nanoseeds
# @Date: 2020-09-19 17:59:07
# @LastEditors: nanoseeds
# @LastEditTime: 2020-12-12 21:40:49
###
make_steps() {
  cd src || exit
  make clean
  make splc
  cp ./splc ./../splc
  mv ./../splc ./../splc.out
  make clean
  cd ..
}
test() {
  local i=1
  while [[ "${i}" -le "10" ]]; do
    readinFileName="test_3_r$(printf "%02d" "${i}")"
    ./splc.out \
      ./test/"${readinFileName}.spl" \
      >./test/"${readinFileName}.ir.test" 2>&1
    i=$((i + 1))
  done
}
main() {
  if [[ -f "./splc.out" ]]; then
    rm ./splc.out
  fi
  make_steps
  test
}
main
