exiftool cat.jpg
# licences are usually all lowercase or all uppercase
echo "licence" | base64 -d

exiftool cat.jpg | grep License | awk '{print $3}' | base64 -d