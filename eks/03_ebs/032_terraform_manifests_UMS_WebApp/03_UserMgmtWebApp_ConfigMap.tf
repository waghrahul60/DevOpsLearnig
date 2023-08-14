 # Resource: Config Map
 # https://registry.terraform.io/providers/hashicorp/kubernetes/latest/docs/resources/config_map_v1
 # https://kubernetes.io/docs/concepts/configuration/configmap/
 resource "kubernetes_config_map_v1" "config_map" {
   metadata {
     name = "usermanagement-dbcreation-script"
   }
   data = {
    "webappdb.sql" = "${file("${path.module}/webappdb.sql")}"
   }
 } 