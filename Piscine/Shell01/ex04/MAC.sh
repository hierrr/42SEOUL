#!/bin/sh
ifconfig -a | grep -w ether | cut -c 8-24
