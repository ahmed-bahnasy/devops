#!/usr/bin/env bash
# This file tags and uploads an image to Docker Hub

# Assumes that an image is built via `run_docker.sh`

# Step 1:
# Create dockerpath
dockerpath=/path

# Step 2:  
# Authenticate & tag
echo "Docker ID and Image: $dockerpath"
docker login
docker tag api ahmedbahnasy/devops:api

# Step 3:
# Push image to a docker repository
docker push ahmedbahnasy/devops:api