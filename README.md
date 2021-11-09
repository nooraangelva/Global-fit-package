# Global fit package
 
## Set up to run Global fit package with any computer
 
### Installing Docker
 
Download docker for your computer
 
Directions for [Mac](https://docs.docker.com/desktop/mac/install/)

Directions for [Windows](https://docs.docker.com/desktop/windows/install/)

Directions for [Linux](https://docs.docker.com/desktop/linux/install/)

### Get Global-fit-package

Here on GitHub.com, navigate to the main page of this repository, if you are not already on it.
![image](https://user-images.githubusercontent.com/78410623/140979822-66878ab2-bc8f-44f7-8908-e02bcb49ade8.png)

Above the list of files, click  Code.

If you have git you can install it the following way, if you don't have git you can install it following these [instructions](https://github.com/git-guides/install-git). If you don't want to install Git you can also download the repository as a zip file and extract it to the place you want to.

![image](https://user-images.githubusercontent.com/78410623/140980507-f2d5e82e-2e85-4c9d-a341-bf622fb5d71d.png)

To clone the repository using HTTPS, under "Clone with HTTPS", click . To clone the repository using an SSH key, including a certificate issued by your organization's SSH certificate authority, click Use SSH, then click . To clone a repository using GitHub CLI, click Use GitHub CLI, then click .
The clipboard icon for copying the URL to clone a repository

The clipboard icon for copying the URL to clone a repository with GitHub CLI

Open Terminal.

Change the current working directory to the location where you want the cloned directory.

Type git clone, and then paste the URL you copied earlier.

```git clone https://github.com/nooraangelva/Global-fit-package.git```
Press Enter to create your local clone.

Result:
```
git clone https://github.com/nooraangelva/Global-fit-package.git
> Cloning into `Spoon-Knife`...
> remote: Counting objects: 10, done.
> remote: Compressing objects: 100% (8/8), done.
> remove: Total 10 (delta 1), reused 10 (delta 1)
> Unpacking objects: 100% (10/10), done.
```

### Running the Global-Fit-package from your terminal
Run the following commands in your terminal:

```
docker run -it -v $PWD:/tmp nooraangelva/global_fit:1.0 /bin/bash
cd tmp/chic_pol_global_fit
make all
scripts/run_nrqcd_fit.sh
```

The results of the fit can be found in the directory /tmp/chic_pol_global_fit/SDCs_Carlos_interpol/fit_1S0_only_LP+NLO
You can access them from your file explorer you don't have to use the terminal for it.
