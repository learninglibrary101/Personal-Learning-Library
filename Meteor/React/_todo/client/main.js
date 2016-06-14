// For NPM Packages
// Without curly braces, you will obtain the default export from the module.
// With the curly braces will obtain named exports from the module.
import React from 'react';

// For Atmosphere Packages
// Curly Braces in import are required here to properly destructure the package’s exports
import { Meteor } from 'meteor/meteor';
import { render } from 'react-dom';

import App from '../imports/ui/App.jsx';

Meteor.startup(() => {
  render(<App/>, document.getElementById('render-target'));
});
