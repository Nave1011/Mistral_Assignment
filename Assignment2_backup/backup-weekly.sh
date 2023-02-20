
tar -cf ~/assignbackup/weekly/backup-$(date +%Y%m%d).tar.gz  Desktop/assignment
find ~/assignbackup/weekly/* -mtime +31 -delete

