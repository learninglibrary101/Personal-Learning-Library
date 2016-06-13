import React, { Component, PropTypes } from 'react';

export default class Task extends Component {
  render(){
    return (
      // Components receive data from their parents through attributes called props
      <li>{ this.props.task.text } with id: {this.props.task._id}</li>
    );
  }
}

// http://wecodetheweb.com/2015/06/02/why-react-proptypes-are-important/

Task.propTypes = {
  // task: PropTypes.object.isRequired
  task: PropTypes.shape({
    _id: PropTypes.number,
    text: PropTypes.string
  }).isRequired
};
