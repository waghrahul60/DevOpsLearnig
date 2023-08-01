# Resource: Persistent Volume Claim
# https://registry.terraform.io/providers/hashicorp/kubernetes/latest/docs/resources/persistent_volume_claim_v1
# https://kubernetes.io/docs/concepts/storage/persistent-volumes/
resource "kubernetes_persistent_volume_claim_v1" "pvc" {
  metadata {
    name = "ebs-mysql-pv-claim"
  }
  spec {
    access_modes = ["ReadWriteOnce"]
    storage_class_name = kubernetes_storage_class_v1.ebs_sc.metadata.0.name 
    resources {
      requests = {
        storage = "4Gi"
      }
    }
  }
}
