* learning about shell permissions
* learning about Users, IDs and Groups
* learning other administrative and control commands
---------------------------------
---------------------------------
00-to_betty
This command changes to the home dir of the user betty

01-my_name_is
This command prints the name of the current user

02-my_groups
This command prints all the groups the current user is part of

03-betty_own
This command changes the owner of the file README.md to betty

04-blank_file
This command creates an empty file called bye

05-executable
This script adds executable permission to the file bye for the owner

06-permed_up
This script gives the owner and owner group execute permission and sets others to read for the file bye

07-all_permed
This script gives the owner, owner group and others execute permission

08-bond
This script removes all permissions from owner and owner group and gives the others rwx for the file bye

09-mysterious
This script sets the permission rwxr-x-wx for the file bye

10-copy_perm
This script copies the permissions of the file README.md to the file bye

11-perm_subs
This script give the owner, group and all, executive permissions to all the files and subdirs in the current dir

12-dir_751
This script creates a dir 'newdir' in the current dir with the permissions 751

13-group_change
This script changes the group of the file bye to home

14-owner_change_and_group
This script changes the owner to sheyi and group to customer, for all files and subdirs in the current dir
