# Fix Repository Task

As you might have already noticed, some of this repository's workflows are failing or behaving very strangely. Therefore we have decided that it is now your mission to identify, understand and resolve the following checklist of issues in the next 20 minutes:

- Creating a pull request for any branch fails the branch convention usage check. *(Tip: Compare the action documentation against the usage)*

- Deno CI does not trigger on the main branch like all the other workflows. *(Tip: Check the workflow triggers)*

- There also seems to be an issue that none of the code files can be found in the execution context for that workflow (Deno CI). *(Tip: git checkout)*

- Currently, the release setup only creates builds for `macos`. Enhance the workflow with support for `ubuntu`. *(Tip: Is Neo "The One"?)*

We did not expect you to be this quick, but luckily we prepared a few extra tasks just in case:

- Your copy of the template repository appears to be suffering from resource loss. Investigate how to satisfy the MoSCoW Prioritization label requirements using the `Actions` tab and `Summary` section.

- Feel free to integrate any action of your choosing from the GitHub Marketplace.
