window.onload = function() {
    document.querySelectorAll("code").forEach(function(elem) {
        elem.classList.add("highlight-code");
    });
    document.querySelectorAll("code *").forEach(function(elem) {
        elem.classList.add("highlight-code");
    });
    document.querySelectorAll(".video-wrapper").forEach(function(elem) {
        elem.style.width = (window.innerWidth * 0.8) + "px";
        elem.style.height = (window.innerWidth * 0.8 * 0.56) + "px";
    });
    setTimeout(function() {
        document.querySelectorAll(".yanzhan-hidden").forEach(function(elem) {
            elem.classList.remove("yanzhan-hidden");
            elem.classList.add("yanzhan-show");
        });
    }, 300);
    setTimeout(function() {
        // <!-- Google Analytics -->
        (function (i, s, o, g, r, a, m) {
            i["GoogleAnalyticsObject"] = r;
            (i[r] =
                i[r] ||
                function () {
                    (i[r].q = i[r].q || []).push(arguments);
                }),
            (i[r].l = 1 * new Date());
            (a = s.createElement(o)), (m = s.getElementsByTagName(o)[0]);
            a.async = 1;
            a.src = g;
            m.parentNode.insertBefore(a, m);
        })(window, document, "script", "https://www.google-analytics.com/analytics.js", "ga");
        ga("create", "UA-73731579-2", "auto");
        ga("send", "pageview");
    }, 500);
};
