## Deply to Heroku

#### Steps
`$ heroku create`

`$ heroku buildpacks:set https://github.com/AdmitHub/meteor-buildpack-horse.git`

`$ heroku config:set ROOT_URL="https://<appname>.herokuapp.com"`

`$ heroku config:set MONGO_URL="mongodb://<dbuser>:<dbpassword>@example.mlab.com:88888/your-meteor-app"`
