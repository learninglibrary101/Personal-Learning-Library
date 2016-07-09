## Deply to Heroku

#### Login
```
$ heroku login
Enter your Heroku credentials.
Email: adam@example.com
Password (typing will be hidden):
Authentication successful.
```

```
$ cd ~/myapp
$ heroku create
Creating stark-fog-398... done, stack is cedar-14
http://stark-fog-398.herokuapp.com/ | https://git.heroku.com/stark-fog-398.git
Git remote heroku added
```


#### Steps to deply Meteor
`$ heroku create`

`$ heroku buildpacks:set https://github.com/AdmitHub/meteor-buildpack-horse.git`

`$ heroku config:set ROOT_URL="https://<appname>.herokuapp.com"`

`$ heroku config:set MONGO_URL="mongodb://<dbuser>:<dbpassword>@example.mlab.com:88888/your-meteor-app"`
