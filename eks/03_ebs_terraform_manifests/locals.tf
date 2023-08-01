
locals {
  project     = var.project_name
  environment = var.environment
  name        = "${var.project_name}-${var.environment}"
  common_tags = {
    project     = local.project
    environment = local.environment
  }
  eks_cluster_name = "${local.name}-${var.cluster_name}"
} 