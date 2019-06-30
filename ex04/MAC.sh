#!/bin/sh
ifconfig | grep -w "ether" | cut -f2 | rev | cut -d ' ' -f2 | rev
