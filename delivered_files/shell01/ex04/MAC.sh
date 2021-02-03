#!/bin/sh
ifconfig -a | grep 'ether' | sed 's/ether //' | cut -c9-