# this scipt will render the id of the 5 last commits of git repository


#!/bin/sh

git log --pretty=%H -5

