let amount = 6
for (let i = 0; i < 6; i++) {
  // const element = array[i];
  console.log(
    `ToggleClass("#shift-btn0${i}", "#shift-sec0${i}", "shift-btn0${i}", "shift-sec0${i}")`
  )

  ToggleClass(
    "#shift-btn0${i}",
    "#shift-sec0${i}",
    "shift-btn0${i}",
    "shift-sec0${i}"
  )
}

console.log("<br>")
console.log("<br>")

ToggleClass("#shift-btn", "#shift-sec", "shift-btn", "shift-sec")
function ToggleClass(a, b, c, d) {
  console.log(a, b, c, d)
  return 0
}
