tar -cf ~/assignbackup/monthly/backup-$(date +%Y%m%d).tar.gz  Desktop/assignment
find ~/assignbackup/monthly/* -mtime +365 -delete

