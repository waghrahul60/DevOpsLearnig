resource "aws_s3_bucket" "bucket-my" {
  bucket = "my-tf-test-bucket-273648237-sdhgf"

  tags = {
    Name        = "My bucket"
    Environment = "Dev"
  }
}