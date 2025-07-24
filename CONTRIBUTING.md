## Setup Guide for Windows and Linux

Before getting started, ensure you have:

- A Windows/Linux system with administrative access
- Internet connectivity

### ⚙️ Steps to setup cpp-sdk-appwrite on Windows
- Install [Chocolatey](https://chocolatey.org/install), a package manager for Windows, as it simplifies software installation process.
- Install **mingw** using chocolatey.
    ```bash
    choco install mingw
    ```
- This will install and set **mingw** paths in windows system.
- Now, we'll need **Curl**, ofcourse. Go to [Official Curl Website](https://curl.se/windows/) and download the latest binary builds for your desired 64/32bit OS and extract the folder (any location).

- Press **Win + R**, type **sysdm.cpl**, and press Enter to open System Properties.
- Go to the **Advanced** > **Environment Variables**.

    _Under System variables_

    - Click "New..." to add **CPLUS_INCLUDE_PATH**.

            Variable name: CPLUS_INCLUDE_PATH

            Variable value: C:\path\to\curl\include (Replace with actual include folder path)

    - Click "New..." to add **LIBRARY_PATH**.

            Variable name: LIBRARY_PATH

            Variable value: C:\path\to\curl\lib (Replace with actual lib folder path)

    - Click "New..." to add **CURL_CERT**.

            Variable name: CURL_CERT

            Variable value: C:\path\to\curl\bin\curl-ca-bundle.crt (Replace with actual bin folder path)
        
    Find the **Path** variable and click "Edit...".

    Click "New" and add 
    
        C:\path\to\curl\bin (Replace with actual bin folder path).

- Ensure it's added as a new, separate entry. Click **"OK"** on all dialogs to save the changes.

    #### Important: You might need to restart open command prompts/IDEs for the changes to take effect.
- Go to Github and **Fork** the repository
- Clone your forked repository:

    ```bash
    git clone https://github.com/<your-github-username>/cpp-sdk-appwrite.git
    ```
- Navigate to the project directory:
    ```bash
    cd cpp-sdk-appwrite
    ```
- Now let's try compiling an API to check if the setup is ready.
    ```bash
    mingw32-make testSDK
    ```
- You should see a folder **"/tests"** will be created signalling the successfull setup of the project.
- Execute the compiled binary
    ```bash
    cd tests
    ./testSDK
    ```
    You should see the output as 
    ```bash
    Setup Complete. Welcome to cpp-sdk-appwrite!!!
    ```

### ⚙️ Steps to setup cpp-sdk-appwrite on Linux

- Install dependencies and build-essentials
    ```bash
    sudo apt-get update
    sudo apt-get install build-essential clang-format
    pip install pre-commit
    pre-commit install
    ```
- Go to Github and **Fork** the repository
- Clone your forked repository:
    ```bash
    git clone https://github.com/<your-github-username>/cpp-sdk-appwrite.git
    ```

- Navigate to the project directory:
    ```bash
    cd cpp-sdk-appwrite
    ```

 - Now let's try compiling an API to check if the setup is ready.
    ```bash
    make testSDK
    ```
- You should see a folder **"/tests"** will be created signalling the successfull setup of the project.
- Execute the compiled binary
    ```bash
    cd tests
    ./testSDK
    ```

    You should see the output as 
    ```bash
    Setup Complete. Welcome to cpp-sdk-appwrite!!!
    ```
- Create a new branch for your contribution:

## How to Contribute ?

After you're done with setting up **cpp-sdk-appwrite** you can create new APIs in the subsequent classes and raise PR for the feature/bug in **develop** branch.

- Create a new branch for your contribution:
```bash
git checkout -b feat/<feature-name>
```

- Make your changes, squash the commits and commit it with a valid commit message :

```bash
git commit -m "feat:added api for sms [messaging]"
```

- Push your changes to your fork:

```bash
git push origin feat/<feature-name>
```

- Raise a Pull Request to the **develop** branch.
- Get your PR merged! 🚀