# add entensions as needed for the languages you use
# *.cpp *.py *.c *.c# *.cc *.cs *.cxx *.go *.hs *.java *.js *.m *.pas *.php *.pl *.rb
codePathPrefix="./"
sourceReadmePath="README.template"
destReadmePath="README.md"
echo $codePathPrefix*.cpp $codePathPrefix*.py > filenames.txt
cat $sourceReadmePath > $destReadmePath
echo "| Project Euler | HackerRank | Solution |" >> $destReadmePath
echo "|:-------:|:--------:|:--------:|" >> $destReadmePath
python3 createReadme.py filenames.txt >> $destReadmePath
rm filenames.txt
git add $destReadmePath