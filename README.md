## Circleci


[![ahmed-bahnasy](https://circleci.com/gh/ahmed-bahnasy/devops.svg?style=svg)](https://github.com/ahmed-bahnasy/devops/edit/master/README.md)

## Project Overview
In this project, you will apply the skills you have acquired in this course to operationalize a Machine Learning Microservice API. 

You are given a pre-trained, `sklearn` model that has been trained to predict housing prices in Boston according to several features, such as average rooms in a home and data about highway access, teacher-to-pupil ratios, and so on. You can read more about the data, which was initially taken from Kaggle, on [the data source site](https://www.kaggle.com/c/boston-housing). This project tests your ability to operationalize a Python flask app—in a provided file, `app.py`—that serves out predictions (inference) about housing prices through API calls. This project could be extended to any pre-trained machine learning model, such as those for image recognition and data labeling.

### Project Tasks

Your project goal is to operationalize this working, machine learning microservice using [kubernetes](https://kubernetes.io/), which is an open-source system for automating the management of containerized applications. In this project you will:
* Test your project code using linting
* Complete a Dockerfile to containerize this application
* Deploy your containerized application using Docker and make a prediction
* Improve the log statements in the source code for this application
* Configure Kubernetes and create a Kubernetes cluster
* Deploy a container using Kubernetes and make a prediction
* Upload a complete Github repo with CircleCI to indicate that your code has been tested


**The final implementation of the project will showcase your abilities to operationalize production microservices.**

---

## Setup the Environment

* Create a virtualenv and activate it
* Run `make install` to install the necessary dependencies
* 'requirements.txt' : list of project dependencies to be installed.

*'Dockerfile' : The Dockerfile contains all the commands a user could call on the command line to assemble an image.
*'docker_out.txt' : Contain the output of two scripts " run_docker.sh"and "make_prediction.sh"
*'upload_docker.sh' : script has commands to upload our built image to docker to be accessible to a Kubernets cluster.
*'run_kubernetes.sh' : script to run our containerized application using kubectl.
*'kubernetes.out.txt' : Contain the output of two scripts " run_kubernetes.sh " and "make_prediction.sh"
### Running `app.py`

1. Standalone:  `python app.py`
2. Run in Docker:  `./run_docker.sh`
    'docker_out.txt' : contain the output 
3. Run in Kubernetes:  `./run_kubernetes.sh`




### Kubernetes Steps

* Setup and Configure Docker locally
* Setup and Configure Kubernetes locally
* Create Flask app in Container
* Run via kubectl



