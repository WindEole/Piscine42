# this script will give the list of existing files in the local repository
# but are ignored by the git repository


# list of files : git ls-files
# ignored tracked files : -i or --ignored
# list of untracked files : -o or --other
# standard exclusions in Git : --exclude-standard

git-ls-files --ignored --other --exclude-standard


