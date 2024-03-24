fun execForLoop() {
    val classes = arrayOf("CS 351", "CS 446")
    println("Here are the best classes at CSUSM:")
    for (s in classes) {
        val result = "- " + s
        println(result)
    }
}

fun execWhileLoop() {
    var i = 1
    while (i <= 10) {
        println(Math.pow(i++.toDouble(), 2.0))
    }
}

fun execDoWhileLoop() {
    var i = 1.0
    do {
        println(Math.pow(2.0, i++))
        i++
    } while (i <= 10)
}

fun stringConcatenation(s1: String, s2: String): String {
    return s1 + s2
}

fun main() {
    execForLoop()
    execWhileLoop()
    execDoWhileLoop()
    println(stringConcatenation("Hello ", "world"))
}