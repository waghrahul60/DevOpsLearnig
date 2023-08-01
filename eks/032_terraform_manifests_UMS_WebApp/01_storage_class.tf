# Resource: Kubernetes Storage Class
# https://registry.terraform.io/providers/hashicorp/kubernetes/latest/docs/data-sources/storage_class
# https://kubernetes.io/blog/2017/03/dynamic-provisioning-and-storage-classes-kubernetes/
resource "kubernetes_storage_class_v1" "ebs_sc" {  
  metadata {
    name = "ebs-sc"
  }
  storage_provisioner = "ebs.csi.aws.com"
  volume_binding_mode = "WaitForFirstConsumer"
}