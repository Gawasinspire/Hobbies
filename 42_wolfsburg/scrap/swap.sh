cat /etc/passwd | grep -v -e "#" | sed -n "2~2p" | cut -d':' -f1 | rev | sort -rn | awk "FNR>=$FT_LINE1 && FNR<=$FT_LINE2" | tr '\n' ' ' | sed "s/ /, /g; s/, $/\./"
