#!/bin/sh
list_alldir()
{
	for file in $1/*
	do
#if [-d $file]; then
			echo $file
#			list_alldir $file
#		fi
	done
}

#if [$# -gt 0]
#then
	list_alldir "$1"
#else
#	list_alldir	"."
#fi
