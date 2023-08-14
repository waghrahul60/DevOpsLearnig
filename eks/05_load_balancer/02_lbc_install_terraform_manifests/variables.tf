variable "aws_region" {
  type    = string
  default = "us-east-1"
}

variable "project_name" {
  type    = string
  default = "EKS-Demo"
}

variable "environment" {
  type    = string
  default = "Dev"
}

variable "cluster_name" {
  description = "Name of the EKS cluster"
  type        = string
  default     = "eksdemo"
}