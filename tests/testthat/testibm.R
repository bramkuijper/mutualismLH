test_that("Calling the ibm function should result in a data.frame",{
  expect_equal(
    class(ibm(ngenerations=10)),class(data.frame()))
})
