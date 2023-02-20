tar -cf ~/assignbackup/daily/backup-$(date +%Y%m%d).tar.gz  Desktop/assignment
find ~/assignbackup/daily* -mtime +7 -delete
rsync -a --delete assignbackup/ Desktop/assignment

