# Global fit package
 
## Set up
 
### Installing Docker
 
Download docker for your computer
 
Directions for [Mac](https://docs.docker.com/desktop/mac/install/)

Directions for [Windows](https://docs.docker.com/desktop/windows/install/)

Directions for [Linux](https://docs.docker.com/desktop/linux/install/)

### Get Global-fit-package

Here on GitHub.com, navigate to the main page of this repository, if you are not already on it.
![image](https://user-images.githubusercontent.com/78410623/140979822-66878ab2-bc8f-44f7-8908-e02bcb49ade8.png)

Above the list of files, click  ```Code```.

If you have ```Git``` you can install it using your terminal, if you don't have ```Git``` you can install it following these [instructions](https://github.com/git-guides/install-git). If you don't want to install ```Git``` you can also download the repository as a zip file and extract it to the place you want to.

![image](https://user-images.githubusercontent.com/78410623/140980507-f2d5e82e-2e85-4c9d-a341-bf622fb5d71d.png)

#### Getting the repository using git:

1. Open Terminal.

2. Change the current working directory to the location where you want the cloned directory.

3. Type git clone, and then paste the URL you copied earlier.
```git clone https://github.com/nooraangelva/Global-fit-package.git```

Result:
```
git clone https://github.com/nooraangelva/Global-fit-package.git
> Cloning into `Spoon-Knife`...
> remote: Counting objects: 10, done.
> remote: Compressing objects: 100% (8/8), done.
> remove: Total 10 (delta 1), reused 10 (delta 1)
> Unpacking objects: 100% (10/10), done.
```

#### Getting the repository without Git:
1. Choose ```Download ZIP```
2. Extract all in your files to the place you want to store the repository


### Running the Global-Fit-package using Docker
Run the following commands in your terminal:

```
docker run -it -v $PWD:/tmp nooraangelva/global_fit:1.0 /bin/bash
cd tmp/chic_pol_global_fit
make all
scripts/run_nrqcd_fit.sh
```

The results of the fit can be found in ```.tex``` form in the directory ```/tmp/chic_pol_global_fit/SDCs_Carlos_interpol/fit_1S0_only_LP+NLO```

You can access them from your file explorer you don't have to use the terminal for it.

### Developing the repository

Under development...
