# 42_school
git filter-branch -f --env-filter '
CORRECT_NAME="Giovanna Gardinali de Miranda"
CORRECT_EMAIL=" gigardin@student.42sp.org.br" 

export GIT_COMMITTER_NAME="$CORRECT_NAME"
export GIT_COMMITTER_EMAIL="$CORRECT_EMAIL"

export GIT_AUTHOR_NAME="$CORRECT_NAME"
export GIT_AUTHOR_EMAIL="$CORRECT_EMAIL"

' --tag-name-filter cat -- --branches --tags