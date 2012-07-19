## Project Discussion

This is an OpenAtrium feature designed to provide discussions based around projects. The standard OpenAtrium blog is great for group discussions, but projects within the group don't have a mechanism for specific discussions based upon specific projects.

This module uses the [Features](http://drupal.org/project/features) module that ships with OpenAtrium. It is also heavily dependant on OpenAtrium, so it most likely will not work very well without it. It ties together with the _Project_ content type.

After installation, a new content type called _Project Discussion_ is created with a node reference to a project.

### Installation

1. Install as you would any other module by copying the entire project_discussion folder to sites>all>modules or profiles>openatrium>modules>contrib
2. After the files are copied, visit admin>build>features and under the features heading, enable _Project Discussion_
3. This module is dependant on the group context allowing you to enable it for specific groups. Enable the _project discussion_ for any group by visiting the _Group Settings_ for each group that you want _Project Discussion_ functionality.


### License
This module integrates heavily with [OpenAtrium](http://openatrium.com) which itself uses [Drupal](http://drupal.org). So it is licensed under the [GNU GPL](http://www.gnu.org/copyleft/gpl.html)

### Development

This module was created for use by the United States Federal Government by [RadiantBlue Technologies](http://radiantblue.com) for the [Department of Defense](http://defense.gov) and the [National Geospatial Intelligence Agency](http://nga.mil).