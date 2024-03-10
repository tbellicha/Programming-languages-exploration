JAVAC=javac
JAVA=java
KOTLINC=kotlinc
KOTLIN=java -jar
CLOJURE=clojure

.PHONY: all clean

all: java kotlin clojure

java:
	@echo "\033[34m=========(   JAVA COMPILATION   )=========\033[0m"
	$(JAVAC) Java/program.java
	@echo "\033[32m=========(   JAVA COMPILED   )=========\033[0m"
	@echo "\033[34m=========(   JAVA EXECUTION   )=========\033[0m"
	$(JAVA) Java/program

kotlin:
	@echo "\033[34m=========(   KOTLIN COMPILATION   )=========\033[0m"
	$(KOTLINC) Kotlin/HelloWorld.kt -include-runtime -d Kotlin/HelloWorld.jar
	@echo "\033[32m=========(   KOTLIN COMPILED   )=========\033[0m"
	@echo "\033[34m=========(   KOTLIN EXECUTION   )=========\033[0m"
	$(KOTLIN) Kotlin/HelloWorld.jar

clojure:
	@echo "\033[34m=========(   CLOJURE EXECUTION   )=========\033[0m"
	$(CLOJURE) -M Clojure/src/HelloWorld.clj

clean:
	rm -f *.class *.jar
	@echo "\033[31m=========(   CLEANED   )=========\033[0m"

re: clean all