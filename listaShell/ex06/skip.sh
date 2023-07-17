#!/bin/ssh
ls -l | awk 'NR % 2 == 1'
