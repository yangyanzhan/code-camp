window.onload = function() {
    document.querySelectorAll("code").forEach(function(elem) {
        elem.classList.add("cpp-code");
    });
    document.querySelectorAll("code *").forEach(function(elem) {
        elem.classList.add("cpp-code");
    });
    setTimeout(function() {
        document.querySelectorAll(".cpp-hidden").forEach(function(elem) {
            elem.classList = ["cpp-show"];
        });
    }, 300);
};
