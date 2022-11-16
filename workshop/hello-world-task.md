# Hello World Task[^source]

Start exploring the features of GitHub Actions. (10min)

## Create your very first workflow

1. Create a `.github/workflows` directory in your repository on GitHub if this
   directory does not already exist.

2. In the `.github/workflows` directory, create a file named
   `github-actions-demo.yml`. For more information, see
   "[Creating new files](https://docs.github.com/en/repositories/working-with-files/managing-files/creating-new-files)."

3. Copy the following YAML contents into the `github-actions-demo.yml` file:

```yml
name: ESDE GitHub Actions Demo
run-name: ${{ github.actor }} is testing out GitHub Actions 🚀
on: [ push ]
jobs:
  explore-github-actions:
    runs-on: ubuntu-latest
    steps:
      - name: Greet the world!
        run: date
      # ADD SOME CUSTOM UNIQUE CODE HERE!!!!
      - name: Printing job status
        run: echo "🍏 This job's status is ${{ job.status }}."
```

4. Now it is time to make the code your own by adding a unique step. You can
   consulte the main
   [README.md](https://github.com/sebivenlo/esde-2022-gh-actions/blob/main/README.md)
   for ideas and possibilities.

5. Scroll to the bottom of the page and select **Create a new branch for this
   commit and start a pull request**. Then, to create a pull request, click
   **Propose new file**.

![Commit new file](https://docs.github.com/assets/cb-67235/images/help/repository/actions-quickstart-commit-new-file.png)

6. Committing the workflow file to a branch in your repository triggers the
   `push` event and runs your workflow.

## Viewing your first workflow results

1. Navigate to the main page of the repository.

2. Under your repository name, click `Actions`.

![Open actions tab](https://docs.github.com/assets/cb-13492/images/help/repository/actions-tab.png)

3. In the left sidebar, click the workflow you want to see.

![Navigate workflow sidebar](https://docs.github.com/assets/cb-55861/images/help/repository/actions-quickstart-workflow-sidebar.png)

4. From the list of workflow runs, click the name of the run you want to see.

![Select workflow](https://docs.github.com/assets/cb-57054/images/help/repository/actions-quickstart-run-name.png)

5. Under Jobs, click the `explore-github-actions` job.

![Job](https://docs.github.com/assets/cb-46973/images/help/repository/actions-quickstart-job.png)

6. The log shows you how each of the steps was processed. Expand any of the
   steps to view its details.

7. The example workflow you just added is triggered each time code is pushed to
   the branch, and shows you how GitHub Actions can work with the contents of
   your repository.

[^source]: Modified version of the
[official quickstart guide](https://docs.github.com/en/actions/quickstart) on.
