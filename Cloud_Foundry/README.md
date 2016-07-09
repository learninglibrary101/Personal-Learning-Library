## About Cloud Foundry
Cloud Foundry is an open source PaaS, providing a choice of clouds, developer frameworks, and application services. We make it faster and easier to build, test, deploy, and scale applications.

Cloud Foundry's advantage is its strong support of continuous delivery (CD) software strategies.

## To get started
The best way to get started free is to learn from the "Deploy Your First Cloud Foundry App" [powerpoint](http://www.cloudworkshop.org/cloudfoundry/Deploy_Your_First_CF_App_Preso_CF_Israel_Meetup_20151003.pdf) from the Dave Nielsen of during Cloud Foundry Summit. Only first example is recommended, the rest can be find on the internet.
Reference: [Link 1 - Deploy_Your_First_CF_App_by Dave Nielsen](http://www.cloudworkshop.org/sponsors/)

## Pivotal API Endpoint
`$ cf login -a https://api.run.pivotal.io`

## Buildpacks
Buildpacks provide framework and runtime support for your applications. Buildpacks typically examine user-provided artifacts to determine what dependencies to download and how to configure applications to communicate with bound services.

### Meteor Buildpacks
Cloud Foundry Meteor Buildpacks, [link here](https://github.com/cloudfoundry-community/cf-meteor-buildpack)

## Terminal
- `$ cf login -a https://api.run.pivotal.io`: example if using Pivotal Web Service
- `$ cf push`
- `$ cf apps`: list all apps deploy in cloud
- `$ cf app [app name]`: see the health and status details about a specific app
- `$ cf stop`
- `$ cf delete`
- `$ cf events [app name]`: view the logs and events of a specific app
- `$ cf scale [app name] -i [# of instances]`

#### Run the following commands to see details about your org and space:
- `$ cf orgs`
- `$ cf spaces`
- `$ cf target -o [org] -s [space]`: example: > cf target -o mydevteam -s development
