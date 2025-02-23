## Contributing Steps

- Fork the repository
- Clone your forked repository:

```bash
git clone https://github.com/<your-github-username>/cpp-sdk-appwrite.git
```

- Navigate to the project directory:

```bash
cd cpp-sdk-appwrite
```

- Install dependencies and build-essentials
```bash
sudo apt-get update
sudo apt-get install build-essential clang-format
pip install pre-commit
pre-commit install
```

- Create a new branch for your contribution:

```bash
git checkout -b feat/<feature-name>
```

- Make your changes, squash the commits and commit it with a valid commit message :

```bash
git commit -m "feat:added clang-formatter as a precommit"
```

- Push your changes to your fork:

```bash
git push origin feat/<feature-name>
```

- Raise a Pull Request to the **develop** branch.
- Get your PR merged! 🚀