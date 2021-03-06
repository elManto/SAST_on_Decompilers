#!/bin/bash
# Fetch CVE issues that are interesting to look at

echo "CVE" > cve.txt

for i in `seq 1 26`;
do
  echo "page $i"
  # CVE 119 issues:
  # https://www.cvedetails.com/vulnerability-list/cweid-119/vulnerabilities.html
  # Use curl to get page $i:
  curl -s "https://www.cvedetails.com/vulnerability-list.php?vendor_id=0&product_id=0&version_id=0&page=$i&hasexp=0&opdos=0&opec=0&opov=0&opcsrf=0&opgpriv=0&opsqli=0&opxss=0&opdirt=0&opmemc=0&ophttprs=0&opbyp=0&opfileinc=0&opginf=0&cvssscoremin=0&cvssscoremax=0&year=0&month=0&cweid=416&order=1&trc=11185&sha=a76f56dbb935840fc028b135d550322223547356" >> v.html

  # for each cve:
  #for cve in $(grep /cve/CVE-2018- v.html | sed 's|.*/cve/CVE-2018-\([0-9]*\).*|CVE-2018-\1|'); do
  #  echo "$cve" >> cve.txt
  #  curl -s "https://www.cvedetails.com/cve/$cve/" > download-cve
  #  # cve type
  #  cat download-cve | grep -i '>Double free<' >> cve.txt
  #  # is there a code reference?
  #  cat download-cve | grep 'https*://.*[a-f0-9]\{30,50\}' | sed 's|.*\(https*://[^ ]*[a-f0-9]\{30,\}\).*|\1|' >> cve.txt
  #  # is there a pull request reference?
  #  cat download-cve | grep 'https*://github.com/[^ ]*/pull/' | sed 's|.*\(https*://github.com/[^ ]*\).*|\1|' >> cve.txt
  #  echo " " >> cve.txt
  #done
done

#rm v.html
rm download-cve



