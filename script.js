const helpingname = document.getElementById("helpingname");
const textt = document.getElementById("textt");

function helpsubmited() {
  var text = helpingname.innerText;
  console.log(text)
  textt.innerText = text;
}

