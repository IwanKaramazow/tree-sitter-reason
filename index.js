try {
  module.exports = require("./build/Release/tree_sitter_arithmetic_binding.node");
} catch (error) {
  try {
    module.exports = require("./build/Debug/tree_sitter_arithmetic_binding.node");
  } catch (_) {
    throw error
  }
}
