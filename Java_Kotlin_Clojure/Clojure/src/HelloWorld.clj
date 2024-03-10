(defn execWhileLoop []
  (let [x (atom 42)]
    (while (< @x 45)
      (do
        (println @x)
        (swap! x inc)))))

(defn execDoSeqLoop []
  (doseq [x (range 4)]
    (println x)))

(defn execDoTimesLoop []
  (dotimes [x 2]
    (println x)))

(defn execLoop []
  (loop [x 42]
    (when (< x 45)
      (println x)
      (recur (inc x)))))

(defn stringConcat []
  (let [s "String "
        w "Concatenation"]
    (println (str s w))))


(defn -main []
  (execWhileLoop)
  (execDoSeqLoop)
  (execDoTimesLoop)
  (execLoop)
  (stringConcat))

(-main)